#include <iostream>
#include <string.h>
using namespace std;

// declaración de la constante con el tamaño máximo de las palabras
const int TAM = 25;

// declaración de un nuevo tipo para las palabras
typedef char TPalabra[TAM];

//declaracion de módulos
void Pasar_A_Mayusculas(char cadena[]);

int main(){

  TPalabra palabra1, palabra2;
  int compara;

  //leer las dos palabras introducidas por el usuario
  cout << "Introduce la primera palabra:";
  cin.getline(palabra1, TAM);
  cout << "Introduce la segunda palabra:";
  cin.getline(palabra2, TAM);

  //pasar a mayúsculas ambas palabras
  Pasar_A_Mayusculas(palabra1);
  Pasar_A_Mayusculas(palabra2);

  //mostrar la longitud de cada palabra
  cout << "La longitud de " << palabra1 << " es: " << strlen(palabra1) << endl;
  cout << "La longitud de " << palabra2 << " es: " << strlen(palabra2) << endl;

  //Comparar ambas palabras

  compara = strcmp(palabra1, palabra2);
  if(compara==0)
    cout << "Ambas palabras son iguales";
  else if (compara < 0)
    cout << palabra1 << " es menor que " << palabra2;
  else
    cout << palabra2 << " es menor que " << palabra1;
  cout << endl;
}

//Procedimiento que convierte una cadena de caracteres a mayúsculas
void Pasar_A_Mayusculas(char cadena[]){
  int i;
  i=0;
  
  while(cadena[i] != '\0'){
    cadena[i] = toupper(cadena[i]);
    i++;
  }
}