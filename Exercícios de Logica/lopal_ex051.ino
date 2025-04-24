//Faça um programa que receba a medida em centímetros e
//exiba esse número em polegadas

 void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
  Serial.println("Digite a medida em centimetros para converter para polegadas:");

}
void loop() {
  // Verifica se há dados para ler no Serial
  if (Serial.available() > 0) {
    float centimetros = Serial.parseFloat(); // Lê a medida em centímetros
    float polegadas = centimetros / 2.54;    // Converte para polegadas

    // Exibe a medida original em centímetros e o resultado em polegadas
    Serial.print(centimetros);
    Serial.print(" centimetros equivalem a ");
    Serial.print(polegadas, 2); // Exibe a conversão com 2 casas decimais
    Serial.println(" polegadas.");

    // Aguarda 5 segundos antes de permitir nova entrada
    delay(5000);
    Serial.println("Digite outra medida em centimetros para converter:");
  }
}