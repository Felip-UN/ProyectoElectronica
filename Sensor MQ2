int gas_detectado = 0;  // Variable para guardar la señal

void setup() {
    pinMode(SENSOR_PIN, INPUT);
    Serial.begin(115200);
}

void loop() {
    gas_detectado = digitalRead(SENSOR_PIN);  // Leer la señal del sensor

    if (gas_detectado == HIGH) {  // Si hay gas metano
        Serial.println("Gas detectado, señal = 1");
    } else {
        Serial.println("Sin gas, señal = 0");
    }

    delay(600);  // Pequeño retraso para evitar lecturas constantes
}
