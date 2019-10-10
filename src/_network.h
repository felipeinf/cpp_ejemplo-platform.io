#include <ESP8266WiFi.h>
#include <string>

struct Red {
  String name;
  String password;
};

void wifiConnect(struct Red red);

void wifiConnect(struct Red red){
    WiFi.begin(red.name, red.password);
    Serial.print("Connecting to Wi-Fi");
    while (WiFi.status() != WL_CONNECTED)
    {
        Serial.print(".");
        delay(300);
    }
    Serial.println();
    Serial.print("Connected with IP: ");
    Serial.println(WiFi.localIP());
    Serial.println();
}