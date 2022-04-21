// C++ code
//
int Led_Pin = 3;
int Led2_Pin = 6;
int Pot_Pin = A0;
int sensorValue = 0;
int outputValue = 0;
void setup()
{
pinMode(Led_Pin, OUTPUT);
pinMode(Led2_Pin, OUTPUT);

Test_Led();
}
void loop()
{
sensorValue = analogRead(Pot_Pin);
outputValue = map(sensorValue, 0, 1023, 0, 255);
analogWrite(Led_Pin, outputValue);
sensorValue = analogRead(Pot_Pin);
outputValue = map(sensorValue, 0, 1023, 0, 255);
analogWrite(Led2_Pin, outputValue);  
}
void Test_Led()
{
digitalWrite(Led_Pin, HIGH);
delay(1000);
digitalWrite(Led_Pin, LOW);
delay(1000);
digitalWrite(Led_Pin, HIGH);
delay(1000);
digitalWrite(Led2_Pin, LOW);
delay(1000);
digitalWrite(Led2_Pin, HIGH);
delay(1000);
digitalWrite(Led2_Pin, LOW);
delay(1000);
}