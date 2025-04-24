//Faça um programa que receba um número e exiba o seu dobro.
//
void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
  Serial.println("Digite um numero para ver o seu dobro: ");
}

void loop() {
  // Verifica se há dados para ler no Serial
  if (Serial.available() > 0) {
    int numero = Serial.parseInt(); // Lê o numero digitado
    int dobro = numero * 2;         // Calcula o dobro do numero

    // Exibe o numero original e o seu dobro
    Serial.print("numero digitado: ");
    Serial.println(numero);
    Serial.print("O dobro do numero e: ");
    Serial.println(dobro);

    // Aguarda 5 segundos antes de permitir nova entrada
    delay(5000);
    Serial.println("Digite outro numero para ver o seu dobro: ");
  }
}

