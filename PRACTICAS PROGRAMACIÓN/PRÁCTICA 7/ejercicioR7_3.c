#include <iostream>
using namespace std;

const int KFILAS = 3;
const int KCOLS = 2;

typedef int TMatriz[KFILAS][KCOLS];

void leerMatriz(TMatriz matriz, int filas, int cols);
void escribirMatriz(TMatriz matriz, int filas, int cols);

main(){
  TMatriz matriz;
  
  leerMatriz(matriz, KFILAS, KCOLS);
  escribirMatriz(matriz, KFILAS, KCOLS);
}

//Procedimiento para leer los elementos de la matriz.
void leerMatriz(TMatriz matriz, int filas, int columnas){
  int i, j;
  
 for(i=0; i<filas;i++)
   for(j=0; j<columnas;j++){
     cout << "Introduzca el elemento (" << i << "," << j << ") : ";
     cin >> matriz[i][j];
   }
}

//Procedimiento para imprimir la matriz.
void escribirMatriz(TMatriz matriz, int filas, int columnas){
  int i, j;
  for(i=0; i < filas; i++){
    for(j=0; j < columnas; j++){
      cout.width(5); //formatea salida rellenando con blancos según ancho indicado
      cout << matriz[i][j];
    }
    cout << endl;
  }
}