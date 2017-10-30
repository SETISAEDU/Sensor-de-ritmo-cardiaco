//Sensor de ritmo cardiaco

//  Variables
int PulseSensor = A0 ;        // Conecte el cable rojo del sensor en pin analogico cero
int LED13 = 13;               // Blink del LED segun la frecuencia de pulsos
int Buzzer = 2;



int Signal = 0;                
int Threshold = 520;           //Dato analogico considerado como un pulso     




void setup() {
  pinMode(13,OUTPUT); 
  pinMode(2,OUTPUT);
  Serial.begin(9600);        
  Serial1.begin(57600);     // Velocidad de comunicacion con el modulo Bluetooth HC-05 
   
}


void loop() {

  Signal = analogRead(PulseSensor);  //Lectura de datos del sensor de ritmo cardiaco
                                              
   Serial.println(Signal);                   

   
   if(Signal > Threshold){                           
     digitalWrite(LED13,HIGH);   
     digitalWrite(Buzzer,HIGH);
     delay(30);
     digitalWrite(Buzzer,LOW); 
     
   }
   
   if(Signal <= Threshold) 
   {
       digitalWrite(LED13,LOW);                
       
       digitalWrite(Buzzer,LOW);
   }
   Serial1.print("*G");             //caracter definido en la aplicacion Bluetooth Electronic para empezar a recibir informacion
   Serial1.print(String(Signal));  //Mandamos la informacion al modulo HC-05
   Serial1.print("*");
   delay(100);

   digitalWrite(Buzzer,LOW);
   
}
