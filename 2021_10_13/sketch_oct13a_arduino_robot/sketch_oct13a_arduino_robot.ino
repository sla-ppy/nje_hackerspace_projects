#define echoPin 12  // echo pin 11-es labhoz kapcsolasa (bordo drot)
#define trigPin 11  // trig pin 12-eshez (kek drot)

// analog ertek mereshez:
#define sensor1 A0
#define sensor2 A1
#define sensor3 A2
#define sensor4 A3

// SDA sensor
#define sensor5 SDA

void setup() {
  // FIXME: lehet hogy forditva lesz
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  Serial.begin(115200);   // tavolsag olv  asashoz

  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);
}

void loop() {
  /*
  digitalWrite(trigPin, LOW);   // impulzus kezdohelye
  delayMicroseconds(2);   // kis delay
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);  // 10-es delay
  digitalWrite(trigPin, LOW);
  long ido = pulseIn(echoPin, HIGH); //  hany ms volt mire visszaert a jel

  // szamolos resz:
  int tavolsag = (ido * 0.034)/2;

  Serial.println(tavolsag); 
  */

  // analog tesztelese:
  int sensor1_data = analogRead(sensor1);
  int sensor2_data = analogRead(sensor2);
  int sensor3_data = analogRead(sensor3);
  int sensor4_data = analogRead(sensor4);
  int sensor5_data = analogRead(sensor5);

  Serial.print("s1: " + String (sensor1_data) + "   s2: " + String (sensor2_data) + "   s3: " + String (sensor3_data) + "   s4: " + String (sensor4_data) + "   s5: " + String (sensor5_data)+ String('\n'));  // sensorok data kiiratasa
  
}
