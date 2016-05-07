// define the switches
int relay_1 = 2;
int relay_2 = 3;

// string to store the incoming serial data
String serial_in;

void setup() {
  // set the switches to be output
  pinMode(relay_1, OUTPUT);
  pinMode(relay_2, OUTPUT);

  
  // start the serial port
  Serial.begin(9600);
}

void loop() {
  // wait for  data on serial
  if (Serial.available() > 0) {
    serial_in = Serial.readStringUntil('\n');

  if (serial_in == "relay_1") {
   Serial.println("in relay_1");
   digitalWrite(relay_1, HIGH);
   delay(200);
   digitalWrite(relay_1, LOW);
   Serial.println("exit relay_1");
   return;
  }
     
  if (serial_in == "relay_2") {
   Serial.println("in relay_2");
   digitalWrite(relay_2, HIGH);
   delay(200);
   digitalWrite(relay_2, LOW);
   Serial.println("out relay_2");
   return;
  }
 else 
   Serial.println("Invalid input");

  Serial.print("serial in : ");
  Serial.println(serial_in);
  }
}
