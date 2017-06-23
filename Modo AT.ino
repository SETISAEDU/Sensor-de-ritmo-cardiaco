/*
* Codigo de muestra para la configuracion del modulo bluetooth HC-05
* Desarollado para uso con Arduino Mega, Arduino Due.
* Nota: No es compatible para las placas con un solo modulo serial USART.
*/

char c = ' ';
 
void setup() 
{
    Serial.begin(9600);
    Serial.println("Arduino listo");
    Serial.println("Recuerda seleccionar Ambos NL & CR en el monitor serial");
    pinMode(2,OUTPUT); //Pin para control del Reset del modulo HC05
    digitalWrite(13, LOW);
    delay(200);
    digitalWrite(13, HIGH);
    // El modulo HC-05 tiene por defecto el Baud rate a 38400 en el modo AT 
    Serial1.begin(38400);  
}
 
void loop()
{ 
    // Esperar respuesta del modulo HC-05 y se envia a el monitor serial
    if (Serial1.available())
    {  
        c = Serial1.read();
        Serial.write(c);
    }
    // Esperar codigos enviados por el monitor serial y se envian a el modulo HC-05
    if (Serial.available())
    {
        c =  Serial.read();
        Serial1.write(c);  
    }
}
