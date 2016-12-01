#include <iostream>
#include <cmath>
using namespace std;

//declaración de la constante con el tamaño de vector de números reales
const int TAM=5;

//delcaración de un nuevo tipo TVector
typedef float Tvector[TAM];

//cuerpo principal del algoritmo
int main (){
  float media, var, desv, suma;
  int i;
  Tvector vector;
  //inicializa la variable que acumula la suma de los cinco números
  suma=0.0;
  
  //lee los cinco números y calcula la suma
  for(i=0; i < TAM; i++){
    cout << "Introduce un número: ";
    cin >> vector[i];
    suma += vector[i];
  }
  
  //calcula la media
  media =suma/TAM;
  cout << "La media es " << media << endl;
  
  //calcula y escribe la varianza
  suma = 0;
  for(i=0; i < TAM; i++){
    suma += pow(vector[i] - media, 2);
  }
  var=suma;
  cout << "La varianza es " << var << endl;
  
  //calcula y escribe la desviación típica
  desv= pow(var, 1/2.0);
  cout << "La desviación típica es " << desv << endl;
}