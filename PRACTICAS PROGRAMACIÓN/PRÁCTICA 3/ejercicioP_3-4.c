#include <iostream>
using namespace std;
 
int main() {
  int num1, num2, num3;

  cout << "Introduce 3 números enteros: ";
  cin >> num1 >> num2 >> num3;

  if (num1>num2 && num2>num3)
    cout << "El mayor es: " << num1 << "\n El menor es: " << num3 << "\n El de en medio es: " << num2 << endl;
  else if (num1>num3 && num3>num2)
    cout << "El mayor es: " << num1 << "\n El menor es: " << num2 << "\n El de en medio es: " << num3 << endl;
  else if (num2>num1 && num1>num3)
    cout << "El mayor es: " << num2 << "\n El menor es: " << num3 << "\n El de en medio es: " << num1 << endl;
  else if (num2>num3 && num3>num1)
    cout << "El mayor es: " << num2 << "\n El menor es: " << num1 << "\n El de en medio es: " << num3 << endl;
  else if (num3>num1 && num1>num2)
    cout << "El mayor es: " << num3 << "\n El menor es: " << num2 << "\n El de en medio es: " << num1 << endl;
  else if (num3>num2 && num2>num1)
    cout << "El mayor es: " << num3 << "\n El menor es: " << num1 << "\n El de en medio es: " << num2 << endl;
  else if (num1 == num2 && num2>num3)
    cout << num1 << "y" << num2 << " son iguales y mayores que " << num3;
  else if (num1 == num3 && num3>num2)
    cout << num1 << "y" << num3 << " son iguales y mayores que " << num2;
  else if (num2 == num3 && num3>num1)
    cout << num2 << "y" << num3 << " son iguales y mayores que " << num1;
  else if (num2 == num1 && num1>num3)
    cout << num2 << "y" << num1 << " son iguales y mayores que " << num3;
  else if (num1 == num2 && num2 == num3)
    cout << "Los tres números son iguales." << endl;
}