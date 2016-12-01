#include <iostream> 
#include <ctime>
#include <cstdlib>
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
  srand(time(0));
  int opcion, alto, ancho, tam;

  do{
    menu();
    opcion = LeerOpcion();
    switch(opcion){
      case 1:
	alto = rand() %20+1;
	ancho = rand() %20+1;
	rectangulo(alto, ancho);
	cout << endl;
	break;
      case 2:
	tam = rand() %20+1;
	triangulo(tam);
	cout << endl;
	break;
      case OPCION_SALIR:
	cout << "FIN DEL PROGRAMA" << endl;
    }
   }while(opcion != OPCION_SALIR);
}