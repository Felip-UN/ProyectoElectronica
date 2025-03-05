void setup() {
    //Paso 1 Se establecen los 9300 baudios del monitor serie y un mensaje de inicio de lectura 
    Serial.begin(9600);
    Serial.println('Sensor de humedad');
}
  
void loop() {
    //Paso 2 Lee el valor del sensor en el pin A0 y lo almacena en la variable humidity
    int humidity = analogRead(A0);
    Serial.print("Lectura:"); //Muestra el valor de la humedad en el monitor serie.
    Serial.println(humidity);

    
    //Paso 3 Se comparan los valores de humedad y se establecen umbrales para suelo seco, humeda y agua. 
    if(humidity >= 0 && humidity <= 300){
        Serial.println("Sensor en suelo seco");  
    } else if(humidity > 301 && humidity <= 700){
        Serial.println("Sensor en suelo húmedo");
    }else if(humidity >= 701){
        Serial.println("Sensor en agua");
    }
    delay(1000);
}
