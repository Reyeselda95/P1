#include <iostream>
using namespace std;

int fib(int n){
  int resultado;
  if(n == 0 || n == 1)
    resultado = 1;
  else
    resultado=fib(n-2)+(n-1);
  return (resultado);
}

main(){
  int n, res;
  cout << "Introduce un número: ";
  cin >> n;
  res = fib(n);
  cout << res << endl;
}