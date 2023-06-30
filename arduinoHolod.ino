#include <microDS18B20.h> //Подключаем библиотеку microDS18B20

MicroDS18B20 <A0> ds; //Датчик на порте A0
const int pinOut = 2; //Порт D2 - выходит на затвор транзистора
float tempIn = 0; //Считанная температура
bool stateOpen = false; //Состояние транзистора: false - закрыт, true - открыт

////////////////////////// КОНСТАНТЫ КОТОРЫЕ МОЖНО ПО ЖЕЛАНИЮ ИЗМЕНИТЬ НА ДРУГИЕ
const float TEMP_CLOSE = 3.2; //Температура закрытия транзистора
const float TEMP_OPEN = 5.8; //Температура открытия транзистора
const int TIME = 1000;  //Время в миллисекундах между считыванием температуры на датчике
//////////////////////////

void setup() {
  Serial.begin(9600);
  pinMode(pinOut, OUTPUT);  //Определяем что pinOut (порт D2) является выходом
}

void loop() {
  static uint32_t timer = millis(); //Инициализируем таймер
  if (millis() - timer >= TIME) { //Если прошло больше 1 секунды    
    timer = millis(); //Обновляем таймер
    if (ds.readTemp()) {  //И если успешно была считана температура      
      tempIn = ds.getTemp();  //То запоминаем её
      Serial.println(tempIn);  //И выводим её значение в консоль
      Serial.print("Current state: ");  //Параллельно выводим в консоль состояние транзистора (0 - закрыт, 1 - открыт)
      Serial.println(stateOpen);
    }
    ds.requestTemp(); //Считываем температуру
  }
  if (tempIn > TEMP_OPEN) stateOpen = true; //Обновляем состояние транзистора
  if (tempIn < TEMP_CLOSE) stateOpen = false;
  if (stateOpen) digitalWrite(pinOut, HIGH);  //Если stateOpen == true, открываем транзистор - посылаем высокий сигнал
  else digitalWrite(pinOut, LOW);
}
