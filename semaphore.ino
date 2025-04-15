#define FALHA_PIN 9

// Semáforo principal
int vermelho1 = 3;
int verde1 = 2;

// Semáforo backup
int vermelho2 = 6;
int verde2 = 5;

void setup() {
  pinMode(vermelho1, OUTPUT);
  pinMode(verde1, OUTPUT);

  pinMode(vermelho2, OUTPUT);
  pinMode(verde2, OUTPUT);

  pinMode(FALHA_PIN, INPUT_PULLUP); // Botão simula falha
  Serial.begin(9600);
}

void loop() {
  bool falha = digitalRead(FALHA_PIN) == LOW;
  Serial.println(falha);

  if (!falha) {
    controlarSemaforo(vermelho1, verde1);
    desligarSemaforo(vermelho2, verde2);
  } else {
    controlarSemaforo(vermelho2, verde2);
    desligarSemaforo(vermelho1, verde1);
  }
}

void controlarSemaforo(int r, int g) {
  digitalWrite(r, HIGH);
  delay(3000);
  digitalWrite(r, LOW);
  digitalWrite(g, HIGH);
  delay(3000);
  digitalWrite(g, LOW);
}

void desligarSemaforo(int r, int g) {
  digitalWrite(r, LOW);
  digitalWrite(g, LOW);
}
