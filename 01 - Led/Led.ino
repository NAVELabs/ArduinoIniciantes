//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Led Piscando
// 
// Made by Lucas Soares
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/4812635-led-piscando

int led = 2;

void setup() 
{
  pinMode(led, OUTPUT);
}

void loop() 
{
  digitalWrite(led, HIGH);
  delay(1000);            
  digitalWrite(led, LOW); 
  delay(1000);
}
