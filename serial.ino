// definindo ENTRADA com o valor 8
#define ENTRADA 5

void setup() {
  // configurando a porta como entrada
  pinMode(ENTRADA, INPUT);
  // iniciando a comunicação serial
  Serial.begin(9600);
}

void loop() {
  // variavel que armazena o valor recebido pela porta digital
  int valorLido = digitalRead(ENTRADA);
  // mostrando na serial valor recebido
  Serial.println(valorLido);
  // aguardar 100 milesegundos
  delay(100);
}
