#include <iostream>
using namespace std;

int main() {
  int n, fil, col;

  cout << "Introduce el número de estrellas de la línea final: ";
  cin >> n;
  for (fil=1; fil<=n; fil++) {
    for (col=0; col<fil; col++) {
      cout << "*";
    }
    cout << endl; //fin de línea
  }
}