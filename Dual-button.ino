const int redbutton = 4;     
const int greenbutton = 3;
const int ledPin =  2; 

int redswitch =0;
int greenswitch =0;        

void setup() {
 
  pinMode(ledPin, OUTPUT);
  pinMode(redbutton, INPUT);
  pinMode(greenbutton, INPUT);
}

void loop() {
  
  redswitch = digitalRead(redbutton);
  greenswitch = digitalRead(greenbutton);

 
  if ((redswitch == HIGH) && (greenswitch == HIGH )) {
    
    digitalWrite(ledPin, LOW);
  } else {
    
    digitalWrite(ledPin, HIGH);
  }
}
