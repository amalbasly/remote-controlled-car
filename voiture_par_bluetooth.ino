#define m11 5
#define m12 6
#define m21 9
#define m22 10

void forward1()  { 

analogWrite(m11,255);  
analogWrite(m12,0); 
analogWrite(m21,255); 
analogWrite(m22,0);
}
void forward(){ 
analogWrite(m11,255);  
analogWrite(m12,0); 
analogWrite(m21,255); 
analogWrite(m22,0); 
delay(20);
analogWrite(m11,0);  
analogWrite(m12,0); 
analogWrite(m21,0); 
analogWrite(m22,0); 
} 
void left(){
analogWrite(m11,255);  
analogWrite(m12,0); 
analogWrite(m21,0); 
analogWrite(m22,255); 
delay(20);
analogWrite(m11,0);  
analogWrite(m12,0); 
analogWrite(m21,0); 
analogWrite(m22,0);  
}
void backward1() {
analogWrite(m11,0);  
analogWrite(m12,255); 
analogWrite(m21,0); 
analogWrite(m22,255);
}
void backward(){
analogWrite(m11,0);  
analogWrite(m12,255); 
analogWrite(m21,0); 
analogWrite(m22,255);  
delay(20);
analogWrite(m11,0);  
analogWrite(m12,0); 
analogWrite(m21,0); 
analogWrite(m22,0); 
} 
void right(){
analogWrite(m11,0);  
analogWrite(m12,255); 
analogWrite(m21,255); 
analogWrite(m22,0);  
delay(20);
analogWrite(m11,0);  
analogWrite(m12,0); 
analogWrite(m21,0); 
analogWrite(m22,0); 
}
void stop() {
analogWrite(m11,0);  
analogWrite(m12,0); 
analogWrite(m21,0); 
analogWrite(m22,0); 

} 

void setup(){
  Serial.begin(9600);

pinMode(m11,OUTPUT);
pinMode(m12,OUTPUT);
pinMode(m21,OUTPUT);
pinMode(m22,OUTPUT);


}

void loop() {
  while(Serial.available())
  { 
char data = Serial.read();
if (data == 'F')
{
forward();  
}
   
else if (data == 'L')
{
right();

}
else if (data == 'R')   
{ 
   
left();

}
else if (data == 'B')     
{

backward();

}
else if (data == 'S')  
{

stop();

}
else if (data == '+')     
{

backward1();

}
else if (data == '-')     
{

forward1();

}
}


}
