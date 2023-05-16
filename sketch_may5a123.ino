#include <Servo.h>
Servo m;
void setup() {
  // put your setup code here, to run once:
 m.attach(10);
 Serial.begin(9600);
 pinMode(5,INPUT);

}
int n=0;
void loop() {
  // put your main code here, to run repeatedly:
  int x=digitalRead(5);
  Serial.println(x);
  Serial.println("Enter:");
  
  Serial.println(n);
  if((x == 0) && (n == 0)){
 for(int i = 0;i<=120;i=i+15){
   m.write(i);
   delay(500);
   
 }
 n++;
  }
 else if((x != 0) && (n == 1)){
 for(int i = 120;i>=0;i=i-15){
   m.write(i);
   delay(500);
   
 }
  n--;
 }
 delay(10000);
}
