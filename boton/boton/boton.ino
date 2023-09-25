int led = 8;
int boton = 9;
int botonState=0;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(boton,INPUT);

}

void loop() {
  botonState = digitalRead(boton);
  if (botonState == HIGH){
    digitalWrite(led,HIGH);
  } else{
    digitalWrite(led,LOW);
  }

}
