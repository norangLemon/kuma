/* void setup() {
    Serial.begin(115200);  //initial the Serial

}

void loop() {
    if (Serial.available())  {
        Serial.write(Serial.read());//send what has been received
        Serial.println();   //print line feed character
    }
}
*/

// Pin 13 has an LED connected on most Arduino boards.
int x = 0;

void setup() {
    pinMode(8, INPUT);
    Serial.begin(9600);
}

void loop() {
  // print labels
    int val = digitalRead(8);
    Serial.println(val);
    delay(20);
}
