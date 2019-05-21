int redpin =6; //pin 6
int bluepin =7; //pin 7
int greenpin =10; 
int yellowpin =9;
int greenpin2 =11;
int bluepin2 =12;
int redpin2 =13;
int RED_PIN =5;
int GREEN_PIN =4;
int BLUE_PIN =3;
int delaytime=250;
void setup(){pinMode(redpin,OUTPUT);
pinMode(bluepin,OUTPUT);
pinMode(greenpin,OUTPUT);
pinMode(yellowpin,OUTPUT);
pinMode(greenpin2,OUTPUT);
pinMode(bluepin2,OUTPUT);
pinMode(redpin2,OUTPUT);
pinMode(RED_PIN, OUTPUT);
pinMode(GREEN_PIN, OUTPUT);
pinMode(BLUE_PIN, OUTPUT);       //LED
}

void loop(){
  digitalWrite(redpin,HIGH);
delay(delaytime);
digitalWrite(redpin,HIGH);
delay(delaytime);
digitalWrite(redpin,LOW);
delay(delaytime);
digitalWrite(bluepin,HIGH);
digitalWrite(greenpin,HIGH);
delay(delaytime);
digitalWrite(bluepin,LOW);
digitalWrite(greenpin,LOW);
delay(delaytime);
digitalWrite(RED_PIN, HIGH);
digitalWrite(GREEN_PIN, LOW);
digitalWrite(BLUE_PIN, LOW);
digitalWrite(yellowpin,HIGH);
delay(delaytime);
digitalWrite(RED_PIN, LOW);
digitalWrite(GREEN_PIN, LOW);
digitalWrite(BLUE_PIN, LOW);
digitalWrite(yellowpin,LOW);
delay(delaytime);
digitalWrite(bluepin2,HIGH);          //start
digitalWrite(greenpin2,HIGH);
delay(delaytime);
digitalWrite(bluepin2,LOW);
digitalWrite(greenpin2,LOW);
delay(delaytime);
digitalWrite(redpin2,HIGH);
delay(delaytime);
digitalWrite(redpin2,LOW);
delay(delaytime);
digitalWrite(redpin,HIGH);
digitalWrite(bluepin,HIGH);
digitalWrite(greenpin,HIGH);
digitalWrite(RED_PIN, HIGH);
digitalWrite(GREEN_PIN,HIGH);
digitalWrite(BLUE_PIN,HIGH);
digitalWrite(yellowpin,HIGH);
digitalWrite(greenpin2,HIGH);
digitalWrite(bluepin2,HIGH);
digitalWrite(redpin2,HIGH);
delay(delaytime);       //start
digitalWrite(redpin,LOW);
digitalWrite(bluepin,LOW);
digitalWrite(greenpin,LOW);
digitalWrite(RED_PIN, LOW);
digitalWrite(GREEN_PIN,LOW);
digitalWrite(BLUE_PIN,LOW);
digitalWrite(yellowpin,LOW);
digitalWrite(greenpin2,LOW);
digitalWrite(bluepin2,LOW);
digitalWrite(redpin2,LOW);
delay(3000);//entering a different part owowowowowowo uwuwuwuwuwuwuwuwuwu
digitalWrite(redpin,HIGH);
digitalWrite(bluepin,HIGH);
digitalWrite(greenpin,HIGH);
digitalWrite(RED_PIN, HIGH);
digitalWrite(GREEN_PIN,HIGH);
digitalWrite(BLUE_PIN,HIGH);
digitalWrite(yellowpin,HIGH);
digitalWrite(greenpin2,HIGH);
digitalWrite(bluepin2,HIGH);
digitalWrite(redpin2,HIGH);
digitalWrite(BLUE_PIN,HIGH);      //start
digitalWrite(yellowpin,HIGH);
digitalWrite(greenpin2,HIGH);
digitalWrite(bluepin2,HIGH);
digitalWrite(redpin2,HIGH);
delay(delaytime);
digitalWrite(redpin,LOW);
digitalWrite(bluepin,LOW);
digitalWrite(greenpin,LOW);
digitalWrite(RED_PIN, LOW);
digitalWrite(GREEN_PIN,LOW);
digitalWrite(BLUE_PIN,LOW);
digitalWrite(yellowpin,LOW);
digitalWrite(greenpin2,LOW);
digitalWrite(bluepin2,LOW);
digitalWrite(redpin2,LOW);
delay(delaytime);       ///start
digitalWrite(redpin2,LOW);
delay(delaytime);
digitalWrite(greenpin2,LOW);
digitalWrite(bluepin2,LOW);
delay(delaytime);
digitalWrite(RED_PIN, LOW);
digitalWrite(GREEN_PIN,LOW);
digitalWrite(BLUE_PIN,LOW);
digitalWrite(yellowpin,LOW);
delay(delaytime);
delay(delaytime);               //end
digitalWrite(greenpin,LOW);
digitalWrite(bluepin,LOW);
delay(delaytime);
digitalWrite(redpin.LOW);
delay(delaytime);
digitalWrite(redpin,HIGH);
digitalWrite(bluepin,HIGH);
digitalWrite(greenpin,HIGH);
digitalWrite(RED_PIN, HIGH);
digitalWrite(GREEN_PIN,HIGH);
  int buttonState;
  buttonState = digitalRead(2);
  if (buttonState == HIGH){

  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  delay(1000);
  }
  else{
    
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  }
  }



