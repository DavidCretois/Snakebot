(#include <SoftwareSerial.h>
#include "dht.h"

#define echopin A0
#define trigpin A1

SoftwareSerial BT(2, 3);

#define dht_pin A5
dht DHT;

int moteur2Pin1 = 6;
int moteur2Pin1 = 6;
int moteurEnablePin = 10;

int moteur1Pin1 = 4;
int moteur1Pin2 = 5;
int moteurEnablePin = 9;

int state;
int Speed = 130;


void setup() {
  pinMode (trigpin, OUTPUT);
  pinMode (echopin, INPUT);

  pinMode(moteur1Pin1, OUTPUT);
  pinMode(moteur1Pin2, OUTPUT);
  pinMode(moteur1EnablePin, OUTPUT);
  pinMode(moteur2Pin1, OUTPUT);
  pinMode(moteur2Pin2, OUTPUT);
  pinMode(moteur2EnablePin, OUTPUT);
  Serial.begin(9600);
  BT.begin(6900);
  delay(500)
}

void loop() {
  if(BT.available() > 0) {
    state = BT.read();
    Serial.println(state);
    if(state > 10) {
       Speed = state;}
}

void forward() {
  digitalWrite(moteur1Pin1, HIGH);
  digitalWrite(moteur1Pin2, LOW);
  digitalWrite(moteur2Pin1, LOW);
  digitalWrite(moteur2Pin2, HIGH);
}

void backword() {
  digitalWrite(moteur1Pin1, LOW);
  digitalWrite(moteur1Pin2, HIGH);
  digitalWrite(moteur2Pin1, HIGH;
  digitalWrite(moteur2Pin2, LOW);
}

void turnRight() {
  digitalWrite(moteur1Pin1, LOW);
  digitalWrite(moteur1Pin2, HIGH);
  digitalWrite(moteur2Pin1, LOW;
  digitalWrite(moteur2Pin2, HIGH);
}

void turnleft() {
  digitalWrite(moteur1Pin1, HIGH);
  digitalWrite(moteur1Pin2, LOW);
  digitalWrite(moteur2Pin1, HIGH);
  digitalWrite(moteur2Pin2, LOW);
}

long data()
{
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  duration=pulseIn (echopin, HIGH);
  return duration / 29 /2;
}
