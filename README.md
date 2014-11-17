ardunio-rc-racingwheel
======================

used:
Logitech Driving Force
Cirtuits@home USB Shield 2.0
FrSky TX/RX


Need to Change 
UsbCore.h
typedef MAX3421e<P10, P9> MAX3421E; // Official Arduinos (UNO, Duemilanove, Mega, 2560, Leonardo, Due etc.) or Teensy 2.0 and 3.0
To
typedef MAX3421e<P10, P7> MAX3421E; // Official Arduinos (UNO, Duemilanove, Mega, 2560, Leonardo, Due etc.) or Teensy 2.0 and 3.0

and rewire on shield


http://youtu.be/1T7e3VLKBAY
