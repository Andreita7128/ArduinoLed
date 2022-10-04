
const int PINLED1 = 3;
const int PINLED2 = 5;
const int PINLED3 = 6;
const int PINLED4 = 9;
const int PINLED5 = 10;

const int PIN_PHOTO = A0;
int photoValue = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(PINLED1, OUTPUT);
pinMode(PINLED2, OUTPUT);
pinMode(PINLED3, OUTPUT);
pinMode(PINLED4, OUTPUT);
pinMode(PINLED5, OUTPUT);


Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

photoValue = analogRead(PIN_PHOTO);

if(photoValue >= 1){
analogWrite(PINLED1,HIGH);
}else {
analogWrite(PINLED1,LOW);
}

if(photoValue >= 100){
analogWrite(PINLED2,photoValue / 4);
} else {
  analogWrite(PINLED2,LOW);
}

if(photoValue >= 200){
analogWrite(PINLED3,photoValue / 4);
}else {
analogWrite(PINLED3,LOW);
}

if(photoValue >= 300){
analogWrite(PINLED4,photoValue / 4);
}else {
analogWrite(PINLED4,LOW);
}

if(photoValue >= 400){
analogWrite(PINLED5,photoValue / 4);
}else {
analogWrite(PINLED5,LOW);
}


Serial.println(photoValue);
delay(100);
}
