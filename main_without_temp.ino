//FEATURE LIST

// TEMPERATURE SENSOR ACTIVATED
   //TEMPERATURE DISPLAYED (potential)
// BUTTON ACTIVATED (done)
   //REMOTE BUTTON (potential)
// MOTION SENSOR ACTIVATED (done)
// INDICATOR LIGHTS (in progress)
// WORKING FAN (in progress)
// LOGIC WHICH ALLOWS THE FAN TO BE ACTIVATED BY DIFFERENT THINGS (in progress)
// OFF BUTTON (potential)
// PHYSICAL STRUCTURE (potential) 

//constants
const int buttonledPin = 12; 
const int motionPin = 8;
const int motionledPin = 9; 
const int buttonPin = 11;
const int ledpinFin = 13;
const int fanPin = 6 ; 


//int
int motionState = 0;
int buttonState = 0;
int temperatureRead = 0;


//funtion
void setup() {

pinMode (buttonledPin, OUTPUT);
pinMode (motionPin, INPUT);

pinMode (buttonPin, INPUT);
pinMode (motionledPin, OUTPUT); 
}

void loop() {

////////////////////////////////////////////////////////////////////////////////MOTION SENSOR ACTIVATE////////////////////////////////////////////////////////////////////
  motionState = digitalRead (motionPin);
  if (motionState == HIGH) {
    digitalWrite (motionledPin, HIGH); 
    digitalWrite (ledpinFin, HIGH);
    digitalWrite (fanPin, HIGH); 
    delay (30000);
    digitalWrite (ledpinFin, LOW);
    digitalWrite (fanPin, LOW); 
  }
  else if (motionState == LOW) {
    digitalWrite (motionledPin, LOW);
  }

////////////////////////////////////////////////////////////////////////////////////BUTTON ACTIVATE//////////////////////////////////////////////////////////////
  buttonState = digitalRead (buttonPin);
  if (buttonState == HIGH){
    digitalWrite (buttonledPin, HIGH);
    digitalWrite (ledpinFin, HIGH);
    digitalWrite (fanPin, HIGH); 
    delay (30000);
    digitalWrite (ledpinFin, LOW);
    digitalWrite (fanPin, LOW); 
  }
  else if (buttonState == LOW){
    digitalWrite (buttonledPin, LOW);
  }
 
  }
