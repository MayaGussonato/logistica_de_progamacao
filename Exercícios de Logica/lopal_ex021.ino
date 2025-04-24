// Faça um programa que receba o ano de nascimento de uma pessoa e 
//o ano atual. Calcule e imprim


void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
  Serial.println("Digite o ano de nascimento: ");
}

void loop() {
  // Verifica se há dados para ler no Serial
  if (Serial.available() > 0) {
    int anoNascimento = Serial.parseInt(); // Lê o ano de nascimento
    Serial.print("Ano de nascimento: ");
    Serial.println(anoNascimento);

    // Pergunta pelo ano atual
    Serial.println("Digite o ano atual: ");
    
    // Aguarda a entrada do ano atual
    while (Serial.available() == 0) {
      // Aguarda o usuário digitar o ano atual
    }
    
    int anoAtual = Serial.parseInt(); // Lê o ano atual
    Serial.print("Ano atual: ");
    Serial.println(anoAtual);

    // Calcular a idade
    int idade = anoAtual - anoNascimento;

    // Converter a idade em semanas (1 ano = 52 semanas)
    long semanas = idade * 52;

    // Imprimir os resultados
    Serial.print("Idade: ");
    Serial.print(idade);
    Serial.println(" anos");

    Serial.print("Idade em semanas: ");
    Serial.print(semanas);
    Serial.println(" semanas");

    // Aguarda 5 segundos antes de permitir nova entrada
    delay(5000);
    Serial.println("Digite o ano de nascimento novamente: ");
  }
}

