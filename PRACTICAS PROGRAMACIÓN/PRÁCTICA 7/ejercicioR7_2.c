#include <iostream>
using namespace std;

//Declaración de la constante con el tamaño del vector de números enteros
const int TAM = 10;

//declaración de un nuevo tipo TVector
typedef int TVector[TAM];

//Funciones cabecera
void leerVector(TVector vector);
void ordenaVector(TVector vector);
void imprimirVector(TVector vector);

//cuerpo principal del algoritmo 
int main(){
  TVector vector;
  leerVector(vector);
  ordenaVector(vector);
  imprimirVector(vector);
}

//Subprograma para leer el contenido del vector.
//Leeremos numeros enteros positivos
void leerVector(TVector vector){
  int i=0;
  do{
    cout << "Introduzca el número de la posición " << i << ": ";
    cin >> vector[i];
    if(vector[i] < 0)
      cout << "Error, debe introducir números naturales enteros positivos. " << endl;
    else 
      i++; //Pasamos a la siguiente posición.
  }while (i < TAM);
}

//procedimiento que ordena el vector de forma ascendente.
void ordenaVector(TVector vector){
  int aux, i, j;
  for(i=0; i < TAM-1; i++)
    for(j=(i+1); j < TAM;j++)
      if(vector[j] < vector[i]){
	aux= vector[i];
	vector[i]=vector[j];
	vector[j]= aux;
      }
}

//Imprime por pantalla los elementos del vector.
void imprimirVector(TVector vector){
  int i;
  cout << "Valores del vector: " << endl;
  for(i=0; i<TAM; i++)
    cout << vector[i] << " ";
  cout << endl;
}