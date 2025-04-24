// Faça um programa que receba o nome, o peso e a altura de uma
//pessoa.

//Variáveis
String nome = "";
int peso = 0;
float altura = 0;
float IMC = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  
    //cabeçalho
  Serial.println("|______________________________|");
  Serial.println("|                              |");
  Serial.println("|        LOPAL - EX_02         |");
  Serial.println("|                              |");
  Serial.println("|______________________________|");
  
  
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  
  Serial.println("Digite o seu nome");
    while (! Serial.available ());
    nome = Serial.readString();
  
  Serial.println("Digite o seu peso");
  while (! Serial.available());
  peso = Serial.parseInt();
  
 Serial.println("Digite a sua altura");
    while (! Serial.available()); 
  altura = Serial.parseFloat(); //usar ponto ao invés de virgula
  
  //processamento
  IMC =  (peso) /  (altura * altura);
     
  //saída
     Serial.println("Seu nome:" + nome);
     Serial.println("Seu peso:" + String(peso));
     Serial.println("Sua altura:" + String(altura));
     Serial.println("Seu IMC aproximado:" + String(IMC));
  
}