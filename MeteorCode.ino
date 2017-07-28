int led_1 = 3;
int led_2 = 5;
int led_3 = 6;
int led_4 = 9;
int led_5 = 10;
int led_6 = 11;

int l1[] = {0,20,40,60,80,100,120,140,160,180,200,220,240,220,200,180,160,140,120,100,80,60,40,20,0,0,0,0,0};
int l2[] = {0,0,20,40,60,80,100,120,140,160,180,200,220,240,220,200,180,160,140,120,100,80,60,40,20,0,0,0,0};
int l3[] = {0,0,0,20,40,60,80,100,120,140,160,180,200,220,240,220,200,180,160,140,120,100,80,60,40,20,0,0,0};
int l4[] = {0,0,0,0,20,40,60,80,100,120,140,160,180,200,220,240,220,200,180,160,140,120,100,80,60,40,20,0,0};
int l5[] = {0,0,0,0,0,20,40,60,80,100,120,140,160,180,200,220,240,220,200,180,160,140,120,100,80,60,40,20,0};
int l6[] = {0,0,0,0,0,0,20,40,60,80,100,120,140,160,180,200,220,240,220,200,180,160,140,120,100,80,60,40,20};

void setup() {
pinMode(led_1,OUTPUT);
pinMode(led_2,OUTPUT);
pinMode(led_3,OUTPUT);
pinMode(led_4,OUTPUT);
pinMode(led_5,OUTPUT);
pinMode(led_6,OUTPUT);
Serial.begin(9600);
}





void loop() {
  delay(1500);
for (int i = 0 ; i < 29 ; i++ ){
  analogWrite(led_1,l1[i]);
  delay(8);
  analogWrite(led_2,l2[i]);
  delay(8);
  analogWrite(led_3,l3[i]);
  delay(8);
  analogWrite(led_4,l4[i]);
  delay(8);
  analogWrite(led_5,l5[i]);
  delay(8);
  analogWrite(led_6,l6[i]);
  delay(8);
  } //forward
 for (int i = 28 ; i >= 0 ; i-- ){
  analogWrite(led_1,l1[i]);
  delay(8);
  analogWrite(led_2,l2[i]);
  delay(8);
  analogWrite(led_3,l3[i]);
  delay(8);
  analogWrite(led_4,l4[i]);
  delay(8);
  analogWrite(led_5,l5[i]);
  delay(8);
  analogWrite(led_6,l6[i]);
  delay(8);
  } //backward

}

