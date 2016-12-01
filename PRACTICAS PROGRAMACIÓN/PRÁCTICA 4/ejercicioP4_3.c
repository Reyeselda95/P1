#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int a, b, c, d, n, x, y, pol;

  do{
    cout << "Introduce el número de valores: ";
    cin >> n;
  }while (n<=0);
  cout << "f(x)=ax³+bx²+cx+d";
  do{
    cout << "\nIntroduce el coeficiente a: ";
    cin >> a;
  }while (a<0);
  do{
    cout << "Introduce el coeficiente b: ";
    cin >> b;
  }while (b<0);
  do{
    cout << "Introduce el coeficiente c: ";
    cin >> c;
  }while (c<0);
  do{
    cout << "Introduce el coeficiente d: ";
    cin >> d;
  }while (d<0);
  for(x=0; x<n; x++) {
    pol= (a * pow(x,3)) + (b * pow(b,2)) + (c * x) + d;
    for(y=0; y<pol-1; y++){
      cout << ' ';
    }
    cout << "*"<< endl;
  }
}