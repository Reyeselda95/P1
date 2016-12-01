// ALEJANDRO REYES ALBILLAR 45931406-S//
#include <iostream>
using namespace std;

const int OPCION_SALIR = 3;

int CantidadCifras(int);
//Declaracion de la funcion
int Cifra_i(int, int);
void menu();
int Leer_Opcion();

int main (void) {
  int opcion, n, resultado, i;
  
  do {
    menu();
    opcion = Leer_Opcion();
    if (opcion != OPCION_SALIR) {
      cout << "Introduzca un número: ";
      cin >> n;
    }
    switch (opcion) {
      case 1:
	resultado=CantidadCifras(n);
	cout << "El número de cifras de " << n << " es " << resultado << endl;
	break;
      case 2:
	cout << "Introduce la i: ";
	cin >> i;
	resultado=Cifra_i(n,i);
	cout << "La cifra " << i << " de " << n << " es " << resultado << endl;
	break;
      case OPCION_SALIR:
	  cout << "Fin del programa." << endl;
    }
  }while (opcion != OPCION_SALIR);
}

//Modulo que cuenta las cifras de la opcion 1
int CantidadCifras(int m) {
  int contador=1;
  
  while(m >= 10) {
    m=m/10;
    contador ++;
  }
  return (contador);
}

//Modulo que muestra la cifra i-ésima del número introducido
int Cifra_i(int m, int i) {
  int contador=1, cifra=0, devolver;
  
  cifra=m%10;
  while(m >=10 && contador<i) {
    m=m/10;
    cifra=m%10;
    contador ++;
  }
  if (contador==i)
    devolver=cifra;
  else 
    devolver=-1;
  return (devolver);
}

//Modulo que muestra el ménú
void menu() {
  cout << "1. Calcular el número de cifras de un número"<< endl;
  cout << "2. Mostrar la cifra i-ésima de un número" << endl;
  cout << "3. Salir" << endl;
}

//Módulo que lee la opcion
int Leer_Opcion() {
  int opcion;
  do {
    cout << "Introduzca la opción: ";
    cin >> opcion;
  } while(opcion < 1 || opcion > 3);
  return(opcion);
}