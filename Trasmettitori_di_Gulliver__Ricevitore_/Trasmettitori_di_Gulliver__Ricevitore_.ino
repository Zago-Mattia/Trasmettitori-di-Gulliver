int sensore = A5;
int led = 13;
int valore = 0;
char [] Simboli={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1','2','3','4','5','6','7','8','9','.',',',':','?','=','-','(',')','"','/','@','!'}; // Non presente apice e sottolineato
String [] Rilev ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","-----",".----","..---","...--","....-",".....","-....","--...","---..","----.",".-.-.-","--..--","---...","..--..","-...-","-....-","-.--.","-.--.","-.--.-",".-..-.","-..-.",".--.-.","-.-.--"};
void setup()
{
  pinMode(sensore, INPUT);
  pinMode(led, OUTPUT);


  Serial.begin(9600);
  Serial.println("Seriale attivata");
}

void loop()
{
  valore = analogRead(sensore);

  Serial.print("sensor = " );
  Serial.print(valore);
  Serial.print("\n");

  delay(100);
  //Led();
}

void Led()
{
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(A5, HIGH);
    delay (1000);
    digitalWrite(A5, LOW);
    delay (1000);
  }
}
