// Definição dos pinos
const int sensorNivelAgua = A0;
const int sensorChuva = A1;
const int ledVerde = 2;
const int ledAmarelo = 3;
const int ledVermelho = 4;
const int buzzer = 5;

// Limiares para os níveis
const int limiarAtencao = 500;
const int limiarPerigo = 800;

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int nivelAgua = analogRead(sensorNivelAgua);
  int nivelChuva = analogRead(sensorChuva);

  Serial.print("Nível de Água: ");
  Serial.print(nivelAgua);
  Serial.print(" | Nível de Chuva: ");
  Serial.println(nivelChuva);

  if (nivelAgua < limiarAtencao && nivelChuva < limiarAtencao) {
    // Nível Seguro
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
    noTone(buzzer);
  } else if (nivelAgua < limiarPerigo && nivelChuva < limiarPerigo) {
    // Nível de Atenção
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);
    noTone(buzzer);
  } else {
    // Nível de Perigo
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
    tone(buzzer, 1000); // Frequência de 1000Hz
  }

  delay(1000); // Aguarda 1 segundo antes da próxima leitura
}
