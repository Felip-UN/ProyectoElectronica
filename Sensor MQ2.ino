/* Change the threshold value with your own reading */
#define Threshold 400  
// Es el umbral (400) que determina si hay presencia de humo/gas.

#define MQ2pin 0
// Define que el sensor está conectado al pin analógico A0 (pin 0).

float sensorValue;  //variable para almacenar el valor del sensor

void setup() {
	Serial.begin(9600); //Establecer el puerto serie en 9600
	Serial.println("MQ2 warming up!"); //Se muestra un mensaje "MQ2 warming up!" porque el sensor necesita 20 segundos (delay(20000)) para calentarse antes de funcionar correctamente.
	delay(20000); // Tiempo de espera para que el sensor pueda calentarse 
}

void loop() {
  sensorValue = analogRead(MQ2pin); //Lee el pin de la entrada que se asignó anteriormente A0
  
  Serial.print("Sensor Value: ");
  Serial.print(sensorValue); //Se imprime el valor leído por el sensor

  if(sensorValue > Threshold)
  {
    Serial.print(" | Smoke detected!"); 
// Si el valor del sensor es mayor al umbral (400), significa que se ha detectado humo y se muestra el mensaje "Smoke detected!".
  }
  
  Serial.println("");
  delay(2000); // wait 2s for next reading
}
