#include <iostream>
using namespace std;

enum DiasSemana {lunes, martes, miercoles, jueves, viernes, sabado, domingo};

int main() {
  enum DiasSemana dia;
  
  dia = lunes;
  cout << "Primer dia de la semana " << dia << endl;
  cout << "Segundo dia de la semana " << dia+1 << endl;
  cout << "Tercer dia de la semana " << dia+2 << endl;
  cout << "Cuarto dia de la semana " << dia+3 << endl;
  cout << "Quinto dia de la semana " << dia+4 << endl;
  cout << "Sexto dia de la semana " << dia+5 << endl;
  cout << "Ultimo dia de la semana " << dia+6 << endl;
}