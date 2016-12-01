//ALEJANDRO REYES ALBILLAR 45931406-S//
#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.141592654;
const int OPCION_SALIR = 4;

void menu () {
  cout << "\n1. CALCULA EL ÁREA DE UN RECTÁNGULO." << endl;
  cout << "2. CALCULA EL ÁREA DE UN TRIÁNGULO." << endl;
  cout << "3. CALCULA EL ÁREA DE UN CIRCULO." << endl;
  cout << "4. SALIR" << endl;
}  

int Leer_Opcion() {
  int opcion;
  do{
  cout << "\nIntroduce una opción: ";
  cin >> opcion;
  }while (opcion < 1 || opcion > 4);
 return opcion;
}

float areaRec (int base, int altura){
  int area;
  area = base * altura;
  return (area);
}

float areaTri (int base, int altura){
  float area;
  area = (base * altura) / 2.0;
  return (area);
}

float areaCir (int radio){
  float area;
  area = PI * pow(radio,2.0);
  return (area);
}

int main(){
  int base, altura, radio, opcion;
  float area;
  do{
  menu();
  opcion = Leer_Opcion();
  
    switch(opcion){
    case 1:
      cout << "Introduzca la base del rectángulo en cm: ";
      cin >> base;
      cout << "Introduzca la altura del rectángulo en cm: ";
      cin >> altura;
      area = areaRec(base, altura);
      cout << "El área del rectángulo es: " << area << "cm²" << endl;
      break;
    case 2:
      cout << "Introduzca la base del triángulo en cm: ";
      cin >> base;
      cout << "Introduzca la altura del triángulo en cm: ";
      cin >> altura;
      area = areaTri(base, altura);
      cout << "El área del triángulo es: " << area << "cm²" << endl;
      break;
    case 3:
      cout << "Introduzca el radio del circulo en cm: ";
      cin >> radio;
      area = areaCir(radio);
      cout << "El área del circulo es: " << area << "cm²" << endl;
      break;
    case OPCION_SALIR:
      cout << "FIN DEL PROGRAMA" << endl;
      break;
    }
  }while(opcion != OPCION_SALIR);
}
