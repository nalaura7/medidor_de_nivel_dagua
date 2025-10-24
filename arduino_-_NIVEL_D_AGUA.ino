#define SensorBoia A5 //Define o pino em que o sensor está conectado

int leiturasensor ; //Declaração da variavel que armazenará os valores de leitura do sensor
void setup() {
  Serial.begin(9600); // Inicialização a comunicação serial
  pinMode(SensorBoia, INPUT); //Define o pino de sensor da boia como pino de entrada

}
void loop() {
  leiturasensor = digitalRead(SensorBoia); //Realiza a leitura do sensor e armazena na variável leiturasensor
  Serial.print("Leitura do sensor: ");
  Serial.println(leiturasensor);
  if (leiturasensor == HIGH) { //Se o sinal de leitura do sensor for HIGH, teremos que a água está com nível alto
    Serial.println("Nível de água alto");
    digitalWrite == HIGH;
  }
  else {
    Serial.println("Nível de água baixo");//Se o sinal de leitura do sensor for LOW, teremos que a água está com nivel baixo 
    digitalWrite == LOW;
  }
  delay(3000);
}
