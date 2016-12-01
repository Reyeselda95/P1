#include <iostream>
using namespace std;

int main() {

  char car;

  cout << "Escribe el carácter que quieras: ";
  cin >> car;

  if (car>=65 && car<=90) {
    cout << "El carácter es una letra mayúscula";
    if (car == 65 || car == 69 || car == 73 || car == 79 || car == 85)
      cout << " y es una vocal. " << endl;
    else
      cout << " y es una consonante. " << endl;
    }
  else if (car>=97 && car<=122) {
    cout << "El carácter es una letra minúscula";
    if (car == 97 || car == 101 || car == 105 || car == 111 || car == 117) {
      cout << " y es una vocal. " << endl;
    }
    else {
      cout << " y es una consonante" << endl;
    }
  }
  else
    cout << "El carácter no es una letra. " << endl;
}