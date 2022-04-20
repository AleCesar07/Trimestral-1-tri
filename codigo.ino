  const int led1 = 2;
  const int led2 = 3;
  const int led3 = 4;
  const int led4 = 5;
  const int led5 = 6;
  const int led6 = 7;
  
  const int bot8 = 8;
void setup(){
  pinMode(led1, OUTPUT);
    pinMode(led1, INPUT);
  pinMode(led2, OUTPUT);
    pinMode(led1, INPUT);
  pinMode(led3, OUTPUT);
    pinMode(led1, INPUT);
  pinMode(led4, OUTPUT);
    pinMode(led1, INPUT);
  pinMode(led5, OUTPUT);
    pinMode(led3, INPUT);
  pinMode(led6, OUTPUT);
    pinMode(led1, INPUT);
    
    pinMode(bot8, INPUT);
}

void loop(){

  int var = digitalRead(bot8);
  if (var){
    digitalWrite(led1,HIGH);
  }else{
    digitalWrite(led1,LOW);
  }
  delay(100);
  
  {
  int var = digitalRead(bot8);
  if (var){
    digitalWrite(led2,HIGH);
  }else{
    digitalWrite(led2,LOW);
  }
  delay(100);
    
  {
  int var = digitalRead(bot8);
  if (var){
    digitalWrite(led3,HIGH);
  }else{
    digitalWrite(led3,LOW);
  }
  delay(100);
      
  {
  int var = digitalRead(bot8);
  if (var){
    digitalWrite(led4,HIGH);
  }else{
    digitalWrite(led4,LOW);
  }
  delay(100);
    
  {
  int var = digitalRead(bot8);
  if (var){
    digitalWrite(led5,HIGH);
  }else{
    digitalWrite(led5,LOW);
  }
  delay(100);
    
  {
  int var = digitalRead(bot8);
  if (var){
    digitalWrite(led6,HIGH);
  }else{
    digitalWrite(led6,LOW);
  }
  delay(100);
    
  }
