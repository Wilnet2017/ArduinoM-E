int salidaEA = 2;
int salidaEB = 3;
int salidaEC = 4;
int salidaED = 5;
int salidaEE = 6;
int salidaEF = 7;
int salidaEG = 8;

bool entradaE10 = 10;
bool entradaE11 = 11;
//int entradaE12 = 12;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(salidaEA,OUTPUT);
  pinMode(salidaEB,OUTPUT);
  pinMode(salidaEC,OUTPUT);
  pinMode(salidaED,OUTPUT);
  pinMode(salidaEE,OUTPUT);
  pinMode(salidaEF,OUTPUT);
  pinMode(salidaEG,OUTPUT);
  
  pinMode(entradaE10,INPUT);
  pinMode(entradaE11,INPUT);
  //pinMode(entradaE12,INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Valor entrada 10");
 // Serial.println(entradaE10);
  bool entrada1 = digitalRead(entradaE10);
  Serial.println("Valor entrada 11");
  //Serial.println(entradaE11);
  
  bool entrada2 = digitalRead(entradaE11);
  
  Serial.println("Valor entrada 10");
  Serial.println(entrada1);
  Serial.println("Valor entrada 11");
  Serial.println(entrada2);
  delay(1000);
  if(entrada1== 1 && entrada2 == 0 )
  {
    display(1,1,0,0,0,0,0);// Apagamos c,d,e,f,g del display uno
  }
  else if(entrada1 == 0 && entrada2 == 1 )
  {
    display(1,1,0,1,1,0,1); //dos Apagamos c,d,e,f,g del display dos
  }
  else if( entrada1 == 1 && entrada2 == 1)
  {
    display(1,1,1,1,0,0,1); // tres Apagamos c,d,e,f,g del display tres
  }
  else
  {
    display(1,1,1,1,1,1,0);// Apagamos G del display cero
  }

}

void display(int a, int b, int c, int d, int e, int f, int g)
{
    digitalWrite(salidaEA, a);
    digitalWrite(salidaEB, b);
    digitalWrite(salidaEC, c);
    digitalWrite(salidaED, d);
    digitalWrite(salidaEE, e);
    digitalWrite(salidaEF, f);
    digitalWrite(salidaEG, g);
}
