#include <iostream>
using namespace std;

int main() {

  int num1, num2;

  cout << "Introduce un número ";
  cin >> num1;
  cout << "Introduce otro número ";
  cin >> num2;
  cout << "La parte entera resultante de la division del primer número entre el segundo es " << num1 / num2 << endl;
  cout << "El resto resultante de la dicisión del primer número entre el segundo es " << num1 % num2 << endl;

}