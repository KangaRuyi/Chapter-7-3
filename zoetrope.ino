// file: zoetrope.ino

//Declare pin assignment variables
const int directionControlPin1 = 2,
            directionControlPin2 = 3,
            enablePin = 9,
            directionSwitchPin = 4,
            onOffSwitchStatePin = 5,
            potPin = A0;

//Declare variables to indicate the different states
//of the motor and switches
int onOffSwitchState,
    previousOnOffSwitchState = 0,
    directionSwitchState,
    previousDirectionSwitchState = 0,
    motorEnabled = 0,
    motorSpeed,
    motorDirection = 1;

void setup(){
    //Set the mode for all of the i/o pins
    pinMode(directionControlPin1, OUTPUT);
    pinMode(directionControlPin2, OUTPUT);
    pinMode(enablePin, OUTPUT);
    pinMode(directionSwitchPin, INPUT);
    pinMode(onOffSwitchStatePin, INPUT);

    //Set the intial motor speed to zero
    digitalWrite(enablePin, LOW);
}

void loop(){
    //Check the state of the push-button switches
    onOffSwitchState = digitalRead(onOffSwitchStatePin);
    delay(100);
    directionSwitchState = digitalRead(directionSwitchPin);
    
    //Check the potentiometer and transform the value to the 0 to 255 scale 
    motorSpeed = analogRead(potPin)/4;
    
    //If the state of the on/off button has changed and is high, change the 
    //"motorEnabled" flag to its opposite so that it is high
    if(onOffSwitchState != previousOnOffSwitchState && onOffSwitchState == HIGH) {
        motorEnabled = !motorEnabled;
    }
    
    //If the state of the direction button has changed and is high, change the 
    //"motorDirection" flag to its opposite so that it is high
    if(directionSwitchState != previousDirectionSwitchState && directionSwitchState == HIGH) {
        motorDirection = !motorDirection;
    }
    
    //If the "motorDirection" flag is high write the control pins to spin one direction,
    //if low write the opposite values to spin the motor in the other direction
    if(motorDirection == 1){
        digitalWrite(directionControlPin1, HIGH);
        digitalWrite(directionControlPin2, LOW);
    }
    else {
        digitalWrite(directionControlPin1, LOW);
        digitalWrite(directionControlPin2, HIGH);
    }
    
    //If the "motorEnabled" flag is high write the motor speed, on a scale of 0 to 255,
    //to the motor enable pin
    if(motorEnabled == 1){
        analogWrite(enablePin, motorSpeed);
    }
    else {
        analogWrite(enablePin, 0);
    }
    
    //Change the current state to the previous state
    previousDirectionSwitchState = directionSwitchState;
    previousOnOffSwitchState = onOffSwitchState;
}