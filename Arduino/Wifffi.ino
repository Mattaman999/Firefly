#include <Firebase.h>
#include <FirebaseArduino.h>
#include <FirebaseCloudMessaging.h>
#include <FirebaseError.h>
#include <FirebaseHttpClient.h>
#include <FirebaseObject.h>


#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
#include "Arduino.h"

const int firepin = D3;
const int gaspin = A0;


// Set these to run example.
#define FIREBASE_HOST "firefly-618c5-default-rtdb.firebaseio.com"
#define FIREBASE_AUTH "4jcQOaIrkkMQsnC0FRmbYuH6Idu1f1a5sUHMV6R8"
#define WIFI_SSID "Charan's iPhone"
#define WIFI_PASSWORD "ChanaBattura2005"

void setup() {
  Serial.begin(9600);
  pinMode(firepin, INPUT);
  pinMode(gaspin, INPUT);
  // connect to wifi.
  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

int n = 0;

void loop() {
  int GasDetect = analogRead(gaspin);

  int gasppm = analogRead(gaspin);
  
  bool fire = (digitalRead(firepin)==LOW);
  bool gas = (gasppm>500);
  
  Firebase.setBool("fire", fire);

  Firebase.setBool("gas", gas);
  
  // set bool value
  Firebase.setInt("Gas PPM", gasppm);
  Firebase.setInt("Loop", n);
  // handle error
  if (Firebase.failed()) {
      Serial.print("ERROR:");
      Serial.println(Firebase.error());  
      return;
  }
  n++;
  delay(500);
}
