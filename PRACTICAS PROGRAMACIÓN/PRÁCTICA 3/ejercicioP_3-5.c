#include <iostream>
using namespace std;

int main() {

  int altu;

  cout << "Introduce tu altura en centímetros: " << endl;
  cin >> altu;

  if (altu<100) {
    cout << "Bebé. Pulsera Blanca. " << endl;
  }
  else if (altu<120) {
    cout << "Infantil. Pulsrea Amarilla. " << endl;
  }
  else if (altu<140) {
    cout << "Junior. Pulsera Naranja. " << endl;
  }
  else {
    cout << "Adulto. Pulsera Roja. " << endl; 
  }
}
