// ALEJANDRO REYES ALBILLAR//
//Este programa lee tres números de dia mes y año y comprueba si son correctos. En ese caso imprime en pantalla el día siguiente.//
#include <iostream>
using namespace std;

int main() {
  int dia, mes, anyo;
  bool ok;
  
  cout << "Introduce un día: ";
  cin >> dia;
  cout << "Introduce un mes: ";
  cin >> mes;
  cout << "Introduce un año: ";
  cin >> anyo;
  if (mes > 12 || mes < 1) {
    cout << "El mes introducido no es correcto. " << endl;
    ok=false;
  }
  else
    if (mes == 4 || mes == 5 || mes == 9 || mes == 11) {
      if (dia > 30){	
	cout << "El dia introducido es incorrecto. " << endl;
	ok=false;
      }
      else 
	ok=true;
    }
    if (mes == 2) {
      if (anyo%4 == 0 && (!(anyo%100 == 0)) || (anyo%400 == 0) && dia <= 29)
	ok=true;
      else if (dia<=28)
	ok=true;
      else
	ok=false;
    }
    else {
      if (dia > 31)
	ok=false;
      else
	ok=true;
    }
  if (ok == true) {
    cout << "La fecha es correcta. " << endl;
    if (dia == 31 && mes == 12)
      cout << "El día siguiente es: 1/1/" << anyo+1 << endl;
    else if (mes == 2 && (anyo%4 == 0 && (!(anyo%100 == 0)) || (anyo%400 == 0)) && dia < 29)
      cout << "El dia siguiente es: " << dia+1 << "/" << mes << "/" << anyo << endl;
    else if (mes == 2 && (anyo%4 == 0 && (!(anyo%100 == 0)) || (anyo%400 == 0)) && dia == 29)
      cout << "El dia siguiente es: 1/3/" << anyo <<endl;
    else if (mes == 2 && dia < 28)
      cout << "El dia siguiente es: " << dia+1 << "/" << mes << "/" << anyo << endl;
    else if (mes == 2 && dia == 28)
      cout << "El dia siguiente es: 1/3/" << anyo << endl;
    else if ((mes == 4 || mes == 5 || mes == 9 || mes == 11) && dia < 30)
      cout << "El dia siguiente es: " << dia+1 << "/" << mes << "/" << anyo << endl;
    else if ((mes == 4 || mes == 5 || mes == 9 || mes == 11) && dia == 30)
      cout << "El dia siguiente es: 1/" << mes+1 << "/" << anyo << endl;
    else if (dia < 31)
      cout << "El dia siguiente es: " << dia+1 << "/" << mes << "/" << anyo << endl;
    else if (dia == 31)
      cout << "El dia siguiente es: 1/" << mes+1 << "/" << anyo << endl;
  }
  else
    cout << "La fecha es incorrecta." << endl;
}