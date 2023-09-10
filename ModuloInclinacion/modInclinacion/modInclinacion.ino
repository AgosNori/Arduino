int Led = 13 ; // Definimos el pin del LED
int buttonpin = 8; // Definimos el pin del sensor
int val ; //  Definimos un valor a la variable

void setup ()
{
  pinMode (Led, OUTPUT) ;      // Definimos el led como salida
  pinMode (buttonpin, INPUT) ; // Definimos el pin del sensor como entrada
}
void loop ()
{
  val = digitalRead (buttonpin) ; // Lectura del pin digital conectado al sensor
  if (val == HIGH) // Cuando el sensor detecta una senal hace que el led prenda o apague
  {
    digitalWrite (Led, HIGH);
  }
  else
  {
    digitalWrite (Led, LOW);
  }
} 