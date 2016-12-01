#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a, b, c, d;
  int aux;

  a = 4.0;
  b = 7.0;
  c = 8.5;
  d = 1.5;

  aux = a>b;
  cout << "a>b " << aux << endl;
  
  aux = a>d && c<b;
  cout << "a>d && c>b " << aux << endl;

  aux = d>a || c>=b;
  cout << "d>a || c>=b " << aux << endl; 

  aux = !(a!=b);
  cout << "!(a!=b) " << aux << endl;
}