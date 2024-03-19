int readValue = 0;
int writeValue = 0;
void setup() {
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    Serial.begin(9600);
    }

void loop() {
    readValue = analogRead(A0);
    writeValue = readValue / 4;
    if (readValue >. 100) {
        digitalWrite(9,HIGH);
        digtalWrite(9,HIGH);
        digitalWrite(9,HIGH);
        
    }
    if (readValue > 510) {
        digitalWrite(9,HIGH);
        digitalWrite(10,HIGH);
        digitalWrite(11,LOW);
    }
    if (readValue > 820) {
        digitalWrite(9,HIGH);
        digitalWrite(10,HIGH);
         digitalWrite(11,HIGH);
    }
}