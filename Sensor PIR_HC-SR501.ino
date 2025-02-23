/*
	Programa que detecta movimiento usando el sensor PIR
	y realiza una acción, como encender o apagar un LED.
*/

int PIR = 2;			// señal de PIR a pin 2
int LED = 13;			// LED a pin 13 (puedes usar otro pin)

int ESTADO = 0;			// almacena el estado de la señal
int estadoAnterior = 0;	// para detectar el cambio de estado

void setup(){
  pinMode(PIR, INPUT);		// pin 2 como entrada
  pinMode(LED, OUTPUT);		// pin 13 como salida
  delay(2000);			// demora para estabilizar el sensor
}

void loop(){
  ESTADO = digitalRead(PIR);	// lectura de estado de señal
  
  if (ESTADO == HIGH && estadoAnterior == LOW){	// Si detecta movimiento (cambio de LOW a HIGH)
    digitalWrite(LED, HIGH);	// enciende el LED
    delay(4000);		// mantiene el LED encendido durante 4 segundos
  } else if (ESTADO == LOW && estadoAnterior == HIGH) {	// Si no hay movimiento (cambio de HIGH a LOW)
    digitalWrite(LED, LOW);	// apaga el LED
  }

  estadoAnterior = ESTADO;	// actualiza el estado anterior para detectar cambios