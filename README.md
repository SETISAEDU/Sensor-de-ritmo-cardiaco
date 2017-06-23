# Sensor-de-ritmo-cardiaco

En el video tutorial de esta semana se realizó una aplicación muy interactiva utilizando el sensor de ritmo cardiaco SEN-11574, con el fin de poner observar la frecuencia del ritmo cardiaco, graficando los datos obtenidos del sensor. Con un Arduino Mega realizamos una comunicación serial con el módulo Bluetooth HC-05 con el fin de enviar los datos obtenidos del sensor hacia otro dispositivo Bluetooth, que en esta ocasión hicimos uso de un Smartphone con sistema operativo Android.

## Características técnicas del sensor de ritmo cardiaco

Este pequeño dispositivo que combina un sensor de pulsos óptico con un circuito de amplificación y cancelación de ruido, lo que le permite obtener lecturas fiables de las pulsaciones del corazón.
Las Especificaciones técnicas son: 

1-	Tensión de alimentación: 3.3V-5V

2-	Consumo de corriente: 4mA

3-	Longitud de los cables: 20cm

4-	Terminales de conexión: Dupont macho

![Vista frontal](https://raw.githubusercontent.com/SETISAEDU/Sensor-de-ritmo-cardiaco/master/sensor1.jpeg) 
![Vista trasera](https://raw.githubusercontent.com/SETISAEDU/Sensor-de-ritmo-cardiaco/master/sensor2.jpeg)

## Modulo Bluetooth HC-05

Bluetooth es una especificación industrial para Redes Inalámbricas de Área Personal (WPAN) que posibilita la transmisión de voz y datos entre diferentes dispositivos mediante un enlace por radiofrecuencia en la banda ISM de los 2.4 GHz.

El dispositivo bluetooth HC-05, gracias a sus puertos TxD y RxD nos permite realizar comunicaciones inalámbrica-mente a 10 mts máximo. Son dispositivos faciles de utilizar, esto gracias a su SPP (Serial Port Protocol) de bajo consumo ya que trabajan a 3.3V. El módulo bluetooth HC-05 resultan populares para aplicaciones sobre todo con microcontroladores PIC tarjetas de desarrollo tipo Arduino. 

![Modulo Bluetooth](https://raw.githubusercontent.com/SETISAEDU/Sensor-de-ritmo-cardiaco/master/HC-05.jpg)

EL modulo Bluetooth HC-05 viene configurado de fábrica como Esclavo, pero se puede cambiar para que trabaje como maestro. El programa: `Modo AT.ino` permite configurar el módulo Bluetooth HC-05 a través de comandos AT enviados desde Arduino.






