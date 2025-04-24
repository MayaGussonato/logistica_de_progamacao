// Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o salário acrescido de 10%.
// Ao final exiba o nome, o cargo e o novo salário desse funcionário.

void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
 
  Serial.println("Digite o nome do funcionario:");
}

void loop() {
  // Verifica se há dados para ler no Serial
  if (Serial.available() > 0) {
    
    String nome = Serial.readString(); // Lê o nome do funcionário
    Serial.print("Nome: ");
    Serial.println(nome);

    // Solicita o cargo
   
    Serial.println("Digite o cargo do funcionario: ");
    while (Serial.available() == 0) {} // Aguarda a entrada do cargo
    
    String cargo = Serial.readString(); // Lê o cargo do funcionário
    Serial.print("Cargo: ");
    Serial.println(cargo);

    // Solicita o salário
   
    Serial.println("Digite o salario do funcionario: ");
    while (Serial.available() == 0) {} // Aguarda a entrada do salário
    float salario = Serial.parseFloat(); // Lê o salário do funcionário
    
    Serial.print("Salario: ");
    Serial.println(salario);

    // Calcula o novo salário com 10% de aumento
    float novoSalario = salario * 1.10;

    // Exibe os dados do funcionário e o novo salário
    Serial.println("------ Dados do Funcionario ------");
    Serial.print("Nome: ");
    Serial.println(nome);
    Serial.print("Cargo: ");
    Serial.println(cargo);
    Serial.print("Novo salario com aumento de 10%: ");
    Serial.println(novoSalario, 2); // Exibe o novo salário com 2 casas decimais

    // Aguarda 5 segundos antes de permitir nova entrada
    delay(5000);
    Serial.println("Digite o nome do funcionario novamente:");
  }
}
