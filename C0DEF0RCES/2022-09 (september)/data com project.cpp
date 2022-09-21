const int LED = 2;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {

  while( Serial.available() ){
    char command = Serial.read();
    switch(command){
      case 'a':
        digitalWrite(LED, LOW);
        break;
      case 'A':
        digitalWrite(LED, HIGH);
        break;
    case 'b':
        digitalWrite(LED, LOW);
        upTime(1000,goon); //for blink
        break;
      case 'B':
        digitalWrite(LED, HIGH);
        break;
    case 'c':
        digitalWrite(LED, LOW);
        break;
      case 'C':
        digitalWrite(LED, HIGH);
        upTime(250,goon); //for fast blink
        break;
      default:
        Serial.println("Unknown command");
        break;
    }
  }

}