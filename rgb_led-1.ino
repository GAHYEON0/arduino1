int redpin=3;
int greenpin=5;
int bluepin=9;
void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
   { setColor(239,149,203); delay(1000); //red
     setColor(175,210,250); delay(1000); //green
     setColor(227,255,89); delay(1000); //blue
}

void setColor(int red, int green, int blue)
    {analogWrite(redpin, red);
     analogWrite(greenpin, green);
     analogWrite(bluepin, blue);
}
