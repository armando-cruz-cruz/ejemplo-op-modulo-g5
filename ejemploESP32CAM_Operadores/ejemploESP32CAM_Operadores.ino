/*
 * Ejemplo Modulo
 * 
 * Por: Armando Cruz
 * Fecha: 11 de abril de 2021
 * 
 * Este programa tiene como proposito ejemplificar el uso del operador modulo
 */

// Bibliotecas

// Constantes

// Variables
int dato=0;
double timeStart, timeFinish;
// Definición de objetos

// Condiciones iniciales - Se ejecuta sólo una vez al energizar
void setup() {// Inicio de void setup ()
  // Aquí va tu código
  Serial.begin(115200); //Iniciar comunicacion serial
  Serial.println("Se ha iniciado la comunicacion serial..");
}// Fin de void setup

// Cuerpo del programa - Se ejecuta constamente
void loop() {// Inicio de void loop
  // put your main code here, to run repeatedly:
  dato=0;
  timeStart=micros();
  for(int i=0;i<10000;i++) {
    //Contador de anillo con op ternario
    dato=(dato==8)? 0:dato+1;
  }
  timeFinish=micros();
  Serial.print("Con comparaciones: ");
  Serial.println(timeFinish-timeStart); //Mandar al monitor serial la resta de las 2 variables
  delay(2000);
  dato=0;
  timeStart=micros();
  for(int i=0;i<10000;i++) {
    dato++; // dato=dato+1; forma alternativa
    //Contador de anillo con operador
    dato%=8;
  }
  timeFinish=micros();
  Serial.print("Con Operador: ");
  Serial.println(timeFinish-timeStart); //Mandar al monitor serial la resta de las 2 variables
  delay(2000);
}// Fin de void loop

// Funcioes del usuario
