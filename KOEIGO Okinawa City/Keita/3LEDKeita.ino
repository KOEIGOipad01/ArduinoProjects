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
    if (readValue >50) {
        digitalWrite(9,HIGH);
        digtalWrite(10,LOW );
        digitalWrite(11,LOW);
        
    }
    if (readValue >420) {
        digitalWrite(9,LOW);
        digitalWrite(10,HIGH);
        digitalWrite(11,LOW);
    }
    if (readValue >503) {
        digitalWrite(9,LOW);
        digitalWrite(10,LOW);
         digitalWrite(11,HIGH);
    }
}