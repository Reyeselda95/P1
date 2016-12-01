#include <iostream>
using namespace std;

int main() {
  int n1, n2, multi, div;

  cout << "Introduce un núemero : ";
  cin >> n1;
  cout << "Introduce otro número : ";
  cin >> n2;
 
  multi = n1 * n2;
  cout << "El resultado de " << n1 << " * " << n2 << " es : " << multi << endl;
  div = n1 / n2;
  cout << "El resultado de  " << n1 << " / " << n2 << " es : " << div << endl;

}