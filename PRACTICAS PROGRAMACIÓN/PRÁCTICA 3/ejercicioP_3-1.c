#include <iostream>
using namespace std;

int main () {
  int num1, num2;

  cout << "Introduce un número: " << endl;
  cin >> num1;
  cout << "Introduce otro número: " << endl;
  cin >> num2;
  
  if(num1>num2){
    cout << num1 << " es mayor que " << num2 << endl;
    }
  else
    cout << num2 << " es mayor que " << num1 << endl;
 
}