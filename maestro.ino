// Incluimos librería
#include <Adafruit_Sensor.h>
#include <DHT.h>
 
// Definimos el pin digital donde se conecta el sensor
#define DHTPIN 13
// Dependiendo del tipo de sensor
#define DHTTYPE DHT11
 
// Inicializamos el sensor DHT11
DHT dht(DHTPIN, DHTTYPE);

//Programación arduino maestro
//declaramos las variables que serviran de salida para el Arduino Maestro
int salidaMA = 2;
int salidaMB = 3;
int salidaMC = 4;
int salidaMD = 5;
int salidaME = 6;
int salidaMF = 7;
int salidaMG = 8;

// Configuramos los pines que usaremos como señales de activación para el esclavo
bool activaE10 = 10;
bool activaE11 = 11;
//int activaE12 = 12;

void setup() {
  // put your setup code here, to run once:
  
  // Inicializamos comunicación serie
  Serial.begin(9600);
  
  // Comenzamos el sensor DHT
  dht.begin();
  
  pinMode(salidaMA,OUTPUT);
  pinMode(salidaMB,OUTPUT);
  pinMode(salidaMC,OUTPUT);
  pinMode(salidaMD,OUTPUT);
  pinMode(salidaME,OUTPUT);
  pinMode(salidaMF,OUTPUT);
  pinMode(salidaMG,OUTPUT);
  
  pinMode(activaE10,OUTPUT);
  pinMode(activaE11,OUTPUT);
  //pinMode(activaE12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // Leemos la humedad relativa
  float h = dht.readHumidity();
  // Leemos la temperatura en grados centígrados (por defecto)
  int t = dht.readTemperature();
  
  // Comprobamos si ha habido algún error en la lectura
  /*if (isnan(h) || isnan(t) {
    Serial.println("Error obteniendo los datos del sensor DHT11");
    return;
  }*/
  
  Serial.println("Humedad: ");
  Serial.println(h);
  Serial.println(" %\t");
  Serial.println("Temperatura: ");
  Serial.println(t);
   
  switch(t)
  {
    case 0:
    {  
        Cero();
        display(1,1,1,1,1,1,0); // cero
        break;      
    }
    case 1:
    {  
        Cero();
         display(0,1,1,0,0,0,0); //uno
        break;      
    }
    case 2:
    {  
        Cero();
         display(1,1,0,1,1,0,1); //dos
        break;      
    }
    case 3:
    {  
        Cero();
         display(1,1,1,1,0,0,1); // tres
        break;      
    }
    case 4:
    {  
        Cero();
         display(0,1,1,0,0,1,1); // cuatro
        break;      
    }
    case 5:
    {  
        Cero();
         display(1,0,1,1,0,1,1); // cinco
        break;      
    }
    case 6:
    {  
        Cero();
         display(1,0,1,1,1,1,1);  //seis
        break;      
    }
    case 7:
    {  
        Cero();
         display(1,1,1,0,0,0,0); //siete
        break;      
    }
    case 8:
    {  
        Cero();
         display(1,1,1,1,1,1,1); //ocho
        break;      
    }
    case 9:
    {  
        Cero();
         display(1,1,1,0,0,1,1);//nueve
        break;      
    }
    //mostramos decimales
    case 10:
    {  
        Uno();
        display(1,1,1,1,1,1,0); // cero
        break;      
    }
    case 11:
    {  
        Uno();
         display(0,1,1,0,0,0,0); //uno
        break;      
    }
    case 12:
    {  
        Uno();
         display(1,1,0,1,1,0,1); //dos
        break;      
    }
    case 13:
    {  
        Uno();
         display(1,1,1,1,0,0,1); // tres
        break;      
    }
    case 14:
    {  
        Uno();
         display(0,1,1,0,0,1,1); // cuatro
        break;      
    }
    case 15:
    {  
        Uno();
         display(1,0,1,1,0,1,1); // cinco
        break;      
    }
    case 16:
    {  
        Uno();
         display(1,0,1,1,1,1,1);  //seis
        break;      
    }
    case 17:
    {  
        Uno();
         display(1,1,1,0,0,0,0); //siete
        break;      
    }
    case 18:
    {  
        Uno();
         display(1,1,1,1,1,1,1); //ocho
        break;      
    }
    case 19:
    {  
        Uno();
         display(1,1,1,0,0,1,1);//nueve
        break;      
    }
    
    //Mostramos veinte
    
    case 20:
    {  
        Dos();
        display(1,1,1,1,1,1,0); // cero
        break;      
    }
    case 21:
    {  
        Dos();
         display(0,1,1,0,0,0,0); //uno
        break;      
    }
    case 22:
    {  
        Dos();
         display(1,1,0,1,1,0,1); //dos
        break;      
    }
    case 23:
    {  
        Dos();
         display(1,1,1,1,0,0,1); // tres
        break;      
    }
    case 24:
    {  
        Dos();
         display(0,1,1,0,0,1,1); // cuatro
        break;      
    }
    case 25:
    {  
        Dos();
         display(1,0,1,1,0,1,1); // cinco
        break;      
    }
    case 26:
    {  
        Dos();
         display(1,0,1,1,1,1,1);  //seis
        break;      
    }
    case 27:
    {  
        Dos();
         display(1,1,1,0,0,0,0); //siete
        break;      
    }
    case 28:
    {  
        Dos();
         display(1,1,1,1,1,1,1); //ocho
        break;      
    }
    case 29:
    {  
        Dos();
         display(1,1,1,0,0,1,1);//nueve
        break;      
    }
    
    //Mostramos treinta    
    case 30:
    {  
        Tres();
        display(1,1,1,1,1,1,0); // cero
        break;      
    }
    case 31:
    {  
        Tres();
         display(0,1,1,0,0,0,0); //uno
        break;      
    }
    case 32:
    {  
        Tres();
         display(1,1,0,1,1,0,1); //dos
        break;      
    }
    case 33:
    {  
        Tres();
         display(1,1,1,1,0,0,1); // tres
        break;      
    }
    case 34:
    {  
        Tres();
         display(0,1,1,0,0,1,1); // cuatro
        break;      
    }
    case 35:
    {  
        Tres();
         display(1,0,1,1,0,1,1); // cinco
        break;      
    }
    case 36:
    {  
        Tres();
         display(1,0,1,1,1,1,1);  //seis
        break;      
    }
    case 37:
    {  
        Tres();
         display(1,1,1,0,0,0,0); //siete
        break;      
    }
    case 38:
    {  
        Tres();
         display(1,1,1,1,1,1,1); //ocho
        break;      
    }
    case 39:
    {  
        Tres();
         display(1,1,1,0,0,1,1);//nueve
        break;      
    }
    default:
    {
      Serial.println("No haz ingresado a nada");
    }
    
    
  }//fin del switch
  delay(1000);
}//fin loop()

//Declaramos funciones para mandar a activar las salidas para el esclavo
void Cero()
{
  digitalWrite(activaE10,LOW);
  digitalWrite(activaE11,LOW);
  //digitalWrite(activaE12,LOW);
}
void Uno()
{
  digitalWrite(activaE10,HIGH);
  digitalWrite(activaE11,LOW);
  //digitalWrite(activaE12,LOW);
}
void Dos()
{
  digitalWrite(activaE10,LOW);
  digitalWrite(activaE11,HIGH);
  Serial.println("estas dentro");
  //digitalWrite(activaE12,LOW);
}
void Tres()
{
  digitalWrite(activaE10,HIGH);
  digitalWrite(activaE11,HIGH);
  //digitalWrite(activaE12,HIGH);
}

void display(int a, int b,int c, int d, int e, int f, int g)
{
    digitalWrite(salidaMA, a);
    digitalWrite(salidaMB, b);
    digitalWrite(salidaMC, c);
    digitalWrite(salidaMD, d);
    digitalWrite(salidaME, e);
    digitalWrite(salidaMF, f);
    digitalWrite(salidaMG, g);
}

