int incomingAudio;


void setup() {
  Serial.begin(9600);
  Serial.println(" Ready \n");

}

void loop() {
  incomingAudio = analogRead(A0);//read input from A0
  int audioBuffer[16];
  
  for (int i=0; i<16; i++){
    incomingAudio = analogRead(A0);//read input from A0
    audioBuffer[i] = incomingAudio;
    Serial.print(audioBuffer[i]);
    Serial.print(" ");
  }
 
  Serial.print("\n");

}
