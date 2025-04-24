// Faça um programa que receba a medida em polegadas
//polegadas e exiba esse número em centímetros.
void setup()
{
Serial.begin(9600); 
  Serial.println("Digite a medida em polegadas para converter para centimetros:");
}
void loop() {
  // Verifica se há dados para ler no Serial
  if (Serial.available() > 0) {
    
   float polegadas = Serial.parseFloat(); // Lê a medida em polegadas
   float centimetros = polegadas * 2.54;  // Converte para centímetros

   // Exibe a medida original em polegadas e o resultado em centímetros
    Serial.print(polegadas);
    
    Serial.print(" polegadas equivalem a ");
    
    Serial.print(centimetros, 2); // Exibe a conversão com 2 casas decimais
   
    Serial.println(" centimetros.");

    // Aguarda 5 segundos antes de permitir nova entrada
    delay(5000);
    Serial.println("Digite outra medida em polegadas para converter:");
  }
}