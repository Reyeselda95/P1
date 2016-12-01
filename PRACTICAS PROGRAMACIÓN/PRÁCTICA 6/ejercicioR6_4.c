#include <iostream>
using namespace std;
/*
int sumaDigitos(int n){
  int res = 0;
  while(n>9){
    res += n%10;
    n=n/10;
  }
  res+=n;
  return(res);
}*/  //Esta parte es la que es sin recursividad

int sumaDigitosRecur(int n){
  int res;
  if (n<10)
    res=n;
  else
    res=n%10+sumaDigitosRecur(n/10);
  return(res);
}

main(){
  int n, res;
  cout << "Introduce un número: ";
  cin >> n;
  res=sumaDigitosRecur(n);
  cout << "La suma de los dígitos de " << n << " es " << res << endl;
}