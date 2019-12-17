const int redbutton = 3;     
const int greenbutton = 2;
const int redledPin =  4; 
const int greenledPin =  5; 
int redswitch =0;
int greenswitch =0;        

void setup() {
 
  pinMode(redledPin, OUTPUT);
  pinMode(greenledPin, OUTPUT);
  pinMode(redbutton, INPUT);
  pinMode(greenbutton, INPUT);
}

void loop() {
  
  redswitch = digitalRead(redbutton);
  greenswitch = digitalRead(greenbutton);

 
  if (redswitch == HIGH) {
    
    digitalWrite(redledPin, LOW);
  } 
  else {
    
    digitalWrite(redledPin, HIGH);
  }

if (greenswitch == HIGH) {
    
    digitalWrite(greenledPin, LOW);
  } else {
    
    digitalWrite(greenledPin, HIGH);
  }
}
