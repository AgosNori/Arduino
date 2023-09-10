int Buzzer = 7;
 
void setup ()
{
  pinMode (Buzzer, OUTPUT); 
}
 
void loop () 
{
  digitalWrite (Buzzer, HIGH); 
  delay (4000); 
  digitalWrite (Buzzer, LOW); 
  delay (2000);       
}