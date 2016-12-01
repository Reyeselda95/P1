#include <iostream>
using namespace std;

const int kFILAS = 10;
const int kCOLS = 10;

typedef int TMatriz[kFILAS][kCOLS];

// Procedimiento para leer los elementos de la matriz.
void leerMatriz(TMatriz matriz, int filas, int columnas){
     int i, j;

     for(i=0; i< filas; i++){
         for(j=0; j< columnas; j++) {
         cout << "Introduzca el elemento (" << i << "," << j << ") : ";
         cin >> matriz[i][j];
         }
     }
}

// Procedimiento para imprimir la matriz.
void escribirMatriz(TMatriz matriz, int filas, int columnas){
     int i, j;
     
     cout << "La matriz introducida es: " << endl;
     for(i=0; i< filas; i++) {
         for(j=0; j< columnas; j++) {
             cout.width(5); // formatea salida rellenando con blancos segun ancho indicado
             cout << matriz[i][j];
         }
         cout << endl;
     }
}
// Calcula la matriz traspuesta de la introducida.
void escribirMatrizT(TMatriz matriz, int columnas, int filas, TMatriz matrizT){
     int i, j;
     
     cout << "La matriz traspuesta a la introducida es: " << endl;
     for(i=0; i< filas; i++) {
         for(j=0; j< columnas; j++) {
                  matrizT[i][j]=matriz[j][i];
                  cout.width(5); // formatea salida rellenando con blancos segun ancho indicado
                  cout << matrizT[i][j];
         }
         cout << endl;
     }
}

//Procedimietnro para calcular la multiplicación de matrices
void multiplicarMatriz(TMatriz matriz, int filas, int columnas, TMatriz matrizT){
    int i, j, suma, n;
    TMatriz mult; 
     cout << "La matriz resultante de la multiplicación de la matriz introducida y su traspuesta es: " << endl;
     for(i=0; i< filas; i++) {
         for(j=0; j< filas; j++) {
             suma = 0;
             for(n=0;n<= filas; n++){
                suma = suma + matriz[i][n]* matrizT[n][j];
             }
             mult[i][j] = suma;
             cout.width(5); // formatea salida rellenando con blancos segun ancho indicado
             cout << mult[i][j];
         }
         cout << endl;
     }
} 

//módulo principal
int main(){
    int filas, columnas;
    TMatriz matriz, matrizT;
    cout << "Introduce el tamaño en filas d ela matriz: ";
    cin >> filas;
    cout << "Introduce el tamaño en columnas de la matriz: ";
    cin >> columnas;
    leerMatriz(matriz, filas, columnas);
    escribirMatriz(matriz, filas, columnas);
    escribirMatrizT(matriz, filas, columnas, matrizT);
    multiplicarMatriz(matriz, filas, columnas, matrizT);
}
