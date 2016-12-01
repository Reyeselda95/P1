#include <iostream>
using namespace std;

int main() {
  float teoria, practica, global;
   
  cout << "Introduce la nota de la teoría: ";
  cin >> teoria;
  cout << "Introduce la nota de la práctica: ";
  cin >> practica;
  global = 0.4*teoria + 0.6*practica;
  cout << "La nota global es un " << global << endl;
}