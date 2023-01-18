int LED_Pin = 13;
int PIR_Pin = 2;
int PIR_State = LOW;

void setup()
{
	pinMode(LED_Pin, OUTPUT);
  	pinMode(PIR_Pin, INPUT);
  
  	Serial.begin(9600);
}

void loop(){
  if(digitalRead(PIR_Pin) == HIGH){
    if (PIR_State == LOW){
      	digitalWrite(LED_Pin, HIGH);
    	Serial.println("Motion Detected!");
      	delay(2000);
      	PIR_State == LOW ;
    }
  }else{
        Serial.println("Motion Ended");
        delay(2000);
        PIR_State == HIGH;
    }
  }