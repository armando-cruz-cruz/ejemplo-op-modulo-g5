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
  dato++; // dato=dato+1; forma alternativa
  Serial.println(dato);
  delay(1000);
  //Contador de anillo con comparaciones
  if (dato>8) {
    dato=0;
  }
  //Contador de anillo con operador
  //dato%=8;
}// Fin de void loop

// Funcioes del usuario
