//Faça um progama que recaba a idade de uma pessoa em anos e
//imprima essa idade em : Meses, Dias, Horas, Minutos

void setup()
{
  Serial.begin(9600);
}

//variáveis
int idadeAnos = 0;
int idadeMeses = 0;
int idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos = 0;

void loop()
{
  Serial.println("Digite sua idade em anos:");
  while (Serial.available() == 0) {
   
  }
  idadeAnos = Serial.parseInt();
  delay(500);


  idadeMeses = idadeAnos * 12;
  idadeDias = idadeAnos * 365; // 
  idadeHoras = idadeDias * 8766;
  idadeMinutos = idadeHoras * 525960;

  
  Serial.print("Meses: ");
  Serial.println(idadeMeses);

  Serial.print("Dias: ");
  Serial.println(idadeDias);

  Serial.print("Horas: ");
  Serial.println(idadeHoras);

  Serial.print("Minutos: ");
  Serial.println(idadeMinutos);

Serial.println("Digite outra idade:");
  
  delay(20000);
