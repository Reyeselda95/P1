#include <iostream>
using namespace std;

int main() {
  int num;

  do {
    cout << "Introduce un número natural: ";
    cin >> num;
  } while (num <= 0);
  
  cout << "El número con las cifras en orden inverso es: ";
  while (num > 0) {
    cout << num%10;
    num = num/10;
  }
  cout << endl;
}