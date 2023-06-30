Система работы холодильника основана на следующих компонентах:
1.	Вентилятор для холодильника Bosch, Daewoo 12-13V / 3.3 W. Ссылка на Озон: https://www.ozon.ru/product/ventilyator-dlya-holodilnika-bosch-daewoo-13v-1007966018/?oos_search=false&sh=ggxqqgjAww
2.	Блок питания 12 V / 24 W. Ссылка на Озон: https://www.ozon.ru/product/blok-pitaniya-12v-2a-12v-2a-stabilizirovannyy-shteker-5-5-h-2-5-dlya-kamer-videonablyudeniya-354230389/?sh=ggxqqjuHjA
3.	Датчик температуры DS18B20. Ссылка на Озон: https://www.ozon.ru/product/vodonepronitsaemyy-datchik-temperatury-ds18b20-arduino-sovmestimyy-839189551/?oos_search=false&sh=ggxqqk1CtQ
4.	Модуль MOSFET транзистора. Ссылка на Озон: https://www.ozon.ru/product/modul-mosfet-tranzistora-irf520-0-100v-6-2a-arduino-1008425055/?sh=ggxqqkdgCw
5.	Плата Arduino Nano V 3.0 / ATMEGA328P CH340. Ссылка на Озон: https://www.ozon.ru/product/plata-arduino-nano-v-3-0-sovmestimaya-atmega328p-ch340-788766909/?sh=ggxqqiKuHQ
6.	Цифровой термометр с выносимым датчиком. Ссылка на Озон: https://www.ozon.ru/product/tsifrovoy-termometr-s-vynosnym-datchikom-50c-do-110c-1-5m-tehmetr-th-1-chernyy-242508104/?sh=ggxqqqEQ7A

Цифровой термометр используется исключительно для того, чтобы была возможность отслеживать точную температуру внутри камеры холодильника.
Смотрите схему подключения для более подробной информации о том, как между собой взаимодействуют все элементы проекта.
Код для проекта на Ардуино можно скачать выше (arduinoHolod.ino). В проекте использовалась библиотека microDS18B20, её можно скачать со встроенного в IDE магазина библиотек или с гитхаба: https://github.com/GyverLibs/microDS18B20
Если Ваш компьютер не видит подключенную к нему Arduino Nano (в IDE не появляется в портах подключенная ардуинка), то это значит, что на этой плате стоит CH340 USB-адаптер. 
Для того чтобы компьютер увидел Вашу плату необходимо скачать и установить драйвера для этого адаптера. Ссылка на скачивание драйверов с сайта производителя: https://www.wch.cn/download/CH341SER_ZIP.html
