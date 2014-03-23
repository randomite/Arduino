
#include "DHT.h"

#define DHTPIN 2   


#define DHTTYPE DHT11   // DHT 11 


DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600); 
  Serial.println("DHTxx test!");
 
  dht.begin();
}

void loop() {

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(t) || isnan(h)) {
    Serial.println("Failed to read from DHT");
  } else {
    Serial.print("Humidity: "); 
    Serial.print(h);
    Serial.print(" %\t");
    Serial.print("Temperature: ");
    Serial.print("\t");
    Serial.print(t);
    Serial.print(" *C");
    Serial.print("\t");    
    Serial.print(farenheitTemp(t)); 
    Serial.print(" *F");
    Serial.print(" \t");
    kelvinTemp(t); 
  }
}

float farenheitTemp(float tempC){
  float tempF;
  
  tempF = (tempC * 1.8) + 32; 
    
  return tempF;
}

void kelvinTemp(float tempC){
  float tempK;
  
  tempK = tempC + 273;
  
      Serial.print(" \t");
      Serial.print(tempK);
      Serial.print(" *K");
  
    if(tempK < 100){
      Serial.print(" \t");
      Serial.println("Wear some shorts maaan !!!");
    } else {
          Serial.println(" ");
    }
      
//  return tempK;
}

