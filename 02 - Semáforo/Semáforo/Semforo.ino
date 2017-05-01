//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Semáforo
// 
// Made by Lucas Soares
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4812810-semaforo

int ledVermelho = 4;
int ledVerde = 2;
int ledAmarelo = 3;

void setup()
{
  pinMode(ledVermelho,OUTPUT);
  pinMode(ledVerde,OUTPUT);
  pinMode(ledAmarelo,OUTPUT);
}

void loop()
{
  digitalWrite(ledVerde, HIGH);
  delay(4000);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, HIGH);
  delay(1000);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho,HIGH);
  delay(4000);
  digitalWrite(ledVermelho, LOW);
}
