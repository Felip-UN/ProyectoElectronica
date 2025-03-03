void setup() {
    //Paso 1
    Serial.begin(9600);
    Serial.println("Valor del sensor de humedad");
}
  
void loop() {
    //Paso 2
    int humidity = analogRead(A0);
    Serial.print("Lectura:");
    Serial.println(humidity);
    //Paso 3
    if(humidity >= 0 & humidity <= 300){
        Serial.println("Sensor en suelo seco");  
    } else if(humidity > 301 & humidity <= 700){
        Serial.println("Sensor en suelo húmedo");
    }else if(humidity >= 701){
        Serial.println("Sensor en agua");
    }
    delay(1000);
}
