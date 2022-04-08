/*
 * Estructura básica
 * Por: Hugo Vargas
 * Fecha: 28 de junio de 2021
 * 
 * Esto es una muestra de la estructura básica de un programa
 */

// Bibliotecas
//#include<Serial.h>
// Constantes

// Variables
int dato=0;

// Definición de objetos

// Condiciones iniciales - Se ejecuta sólo una vez al energizar
void setup() {// Inicio de void setup ()
  // Aquí va tu código
  Serial.begin(115200);
  Serial.println("Conexion iniciada..");
}// Fin de void setup

// Cuerpo del programa - Se ejecuta constamente
void loop() {// Inicio de void loop
  // put your main code here, to run repeatedly:
  dato++;
  Serial.println(dato);
  delay(1000);
  dato%=8;
}// Fin de void loop

// Funcioes del usuario
