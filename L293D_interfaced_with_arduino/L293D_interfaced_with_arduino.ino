//Define all the input pins of the motor driver
const int motor1input1=2;
const int motor1input2=3;
const int motor2input1=4;
const int motor2input2=5;

void setup() {
 
Serial.begin(9600);
//Set baud rate for serial communication
//Set all the pin as OUTPUT
pinMode(motor1input1,OUTPUT);
pinMode(motor1input2,OUTPUT);
pinMode(motor2input1,OUTPUT);
pinMode(motor2input2,OUTPUT);
//Set all the pin to Logic HIGH to initially turn off the motor

}
 
void loop() {
  digitalWrite(motor1input1,LOW);
  digitalWrite(motor1input2,HIGH);
//Turn first motor in clockwise direction
  //digitalWrite(motor1input2,LOW);

//uncomment this to rotate first motor in anti-clockwise direction
  digitalWrite(motor2input1,HIGH);
  digitalWrite(motor2input2,LOW);

//Turn second motor in anti-clockwise direction
  //digitalWrite(motor2input2,LOW);

//uncomment this to rotate second motor in anti-clockwise direction
}