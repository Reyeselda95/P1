//ALEJANDRO REYES ALBILLAR 45931406-S//
#include <iostream>
using namespace std;
//a^b-1

int doublepotencia(double a, int b){
  int res, i;
  res=1;
  for(i=0;i<b;i++)
    res=res*a;
  return(res);
}

main(){
  double a, res;
  int b;
  cout << "Introduce un número: ";
  cin >> a;
  cout << "Introduce el exponente al que deseas elevar el número: ";
  cin >> b;
  res= doublepotencia(a,b);
  cout << "El resultado de elevar " << a << " al exponente " << b << " es " << res << endl;
} 