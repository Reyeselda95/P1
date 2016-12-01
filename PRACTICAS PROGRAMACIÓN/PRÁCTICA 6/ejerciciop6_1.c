#include <iostream>
using namespace std;

//El módulo suma la primera cifra de un número a los cuadrados de las siguientes, sean cuantas sean y hasta 258
int recur(int n){
  int res;
  if (n < 10)
    res = n;
  else
    res = (n%10)*(n%10) + recur(n/10);
  return(res);
}

main(){
  int n, res;
  cout << "Introduzca un número: ";
  cin >> n;
  res = recur(n);
  cout << res << endl;
}