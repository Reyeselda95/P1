#include <iostream>
using namespace std;

int main() {

  int teoria1, teoria2, trabajo;
  float global;

  cout << "Introduce la nota del primer examen: ";
  cin >> teoria1;
  cout << "Introduce la nota del segundo examen: ";
  cin >> teoria2;
  cout << "Introduce la nota de tu trabajo: ";
  cin >> trabajo;
  global = 0.2*teoria1 + 0.2*teoria2 + 0.6*trabajo;
  cout << "La nota global es un " << global << endl;
}