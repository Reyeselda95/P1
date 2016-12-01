#include <iostream>
using namespace std;
const int OPCION_SALIR = 3;

void menu(){
  cout << "\n1. DIBUJAR UN RECTÁNGULO." << endl;
  cout << "2. DIBUJAR UN TRIÁNGULO." << endl;
  cout << "3. SALIR." << endl; 
}

void rectangulo(int alto, int ancho){
  int i, j;
  for(i=1;i<=alto;i++){
    for(j=1;j<=ancho;j++)
      cout << "*";
    cout << endl;
  }
}

void triangulo(int tam){
  int i, j;
  for(i=1;i<=tam;i++){
    for(j=1;j<=i;j++)
      cout << "*";
    cout << endl;
  }
}

int LeerOpcion (){
  int opcion;
  do{
    cout << "Introduzca una opcion: ";
    cin >> opcion;
  }while (opcion < 1 || opcion > 3);
  return(opcion);
}

int main(){
  int opcion, alto, ancho, tam;

  do{
    menu();
    opcion = LeerOpcion();
    switch(opcion){
      case 1:
	cout << "Introduzca la altura del rectángulo: ";
	cin >> alto;
	cout << "Introduzca la anchura del rectángulo: ";
	cin >> ancho;
	rectangulo(alto, ancho);
	cout << endl;
	break;
      case 2:
	cout << "Introduzaca el tamaño del triángulo: ";
	cin >> tam;
	triangulo(tam);
	cout << endl;
	break;
      case OPCION_SALIR:
	cout << "FIN DEL PROGRAMA" << endl;
    }
   }while(opcion != OPCION_SALIR);
}