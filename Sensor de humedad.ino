void setup() {
    Serial.begin(115200);
    pinMode(SENSOR_HUMEDAD_PIN, INPUT);
}

void loop() {
    int valorSensor = analogRead(SENSOR_HUMEDAD_PIN);  // Leer valor del sensor
    Serial.print("Valor del sensor: ");
    Serial.println(valorSensor);

    if (valorSensor > 1000) {  // Ajusta este umbral según tu sensor
        Serial.println("Humedad detectada: 1");
    } else {
        Serial.println("Humedad no detectada: 0");
    }

    delay(500);  // Esperar 1 segundo antes de la siguiente lectura
}
