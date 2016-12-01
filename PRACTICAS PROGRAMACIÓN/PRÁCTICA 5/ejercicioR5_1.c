//ALEJANDRO REYES ALBILLAR 45931406-6//

#include <iostream>
using namespace std;

//Declaracion de módulos
void mostrar_menu();
float Celsius_a_Fahrenheit(float);
float Fahrenheit_a_Celsius(float);

//Programa principal
main() {
  //Declaracion de variables
  int opcion;
  float celsius, fahr;
  
  do{
    mostrar_menu();
    cout << "\nOpción: ";
    cin >> opcion;
    cout << endl;
    
    switch(opcion) {
      case 1: 
	cout << "Introduzca la temperatura en Grados Celsius: ";
	cin >> celsius;
	fahr = Celsius_a_Fahrenheit(celsius);
	cout << "La temperatura en grados Fahrenheit es: " << fahr;
	break;
      case 2:
	cout << "Introduzca la temperatura en Grados Fahrenheit: ";
	cin >> fahr;
	celsius = Fahrenheit_a_Celsius(fahr);
	cout << "La temperatura en grados Celsius es: " << celsius;
	break;
      case 3:
	cout << "Ha seleccionado la opción salir." << endl;
	break;
      default: cout << "Debe introducir una opción de 1 a 3" << endl;
    }
   
    cout << endl;
    cin.get();
    cout << "Pulse Intro para continuar" << endl;
    cin.get();
    
  }while(opcion!=3);
}

//Módulo que muestra el menú
void mostrar_menu() {
  cout << "Seleccione quén tipo de conversión desea realizar:" << endl;
  cout << "1. Convertir de grados Celsius a Fahrenheit." << endl;
  cout << "2. Convertir de grados Fahrenheit a Celsius." << endl;
  cout << "3. Terminar el programa." << endl;
}

//Módulo que convierte de Celsius a Fahrenheit
float Celsius_a_Fahrenheit(float cel) {
  float fah;
  fah = cel * 1.8 + 32;
  return(fah);
}

//Módulo que conveierte de Fahrenheit a Celsius
float Fahrenheit_a_Celsius(float fah) {
  float cel;
  cel = (fah - 32)/1.8;
  return (cel);
}