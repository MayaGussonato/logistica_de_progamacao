// Faça um programa que receba o nome, o peso e a altura de uma pessoa
// Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso /(altura * altura).
void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
  Serial.println("Digite o nome da pessoa:");
}

void loop() {
  // Verifica se há dados para ler no Serial
  if (Serial.available() > 0) {
    String nome = Serial.readString(); // Lê o nome da pessoa
    Serial.print("Nome: ");
    Serial.println(nome);

    // Solicita o peso
    Serial.println("Digite o peso da pessoa (em kg): ");
    while (Serial.available() == 0) {} // Aguarda a entrada do peso
    float peso = Serial.parseFloat(); // Lê o peso em kg
    Serial.print("Peso: ");
    Serial.println(peso);

    // Solicita a altura
    Serial.println("Digite a altura da pessoa (em metros): ");
    while (Serial.available() == 0) {} // Aguarda a entrada da altura
    float altura = Serial.parseFloat(); // Lê a altura em metros
    Serial.print("Altura: ");
    Serial.println(altura);

    // Calcula o IMC
    float imc = peso / (altura * altura);

    // Exibe o nome e o IMC
    Serial.print("Nome: ");
    Serial.println(nome);
    Serial.print("IMC: ");
    Serial.println(imc, 2); // Exibe o IMC com 2 casas decimais

    // Aguarda 5 segundos antes de permitir nova entrada
    delay(5000);
    Serial.println("Digite o nome de outra pessoa :");
  }
}
