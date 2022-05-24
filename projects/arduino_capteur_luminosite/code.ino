void setup() {
   pinMode(A0, INPUT);
   analogWrite(A0, LOW);
   pinMode(13, OUTPUT);

   Serial.begin(9600);
}

void loop() {
   int light = analogRead(A0);
   Serial.print("Light = ");
   Serial.println(light);

   if (light > 15) { digitalWrite (13, LOW); }
   else { digitalWrite (13, HIGH); }
  delay(1);
}
