//ALEJANDRO REYES ALBILLAR 45931406-S//
#include <iostream>
using namespace std;

int sumaMult5(int n){
  int res;
  if(n<5)//caso base
    res=0;
  else{
    if(n%5!=0)
      res=sumaMult5(n-1);
    else
      res=n+ sumaMult5(n-1);
  }
  return(res);
}

main(){
  int n, res;
  cout << "Introduce un número: ";
  cin >> n;
  res= sumaMult5(n);
  cout << "El resultado de sumar los múltiplos de 5 desde 1 hasta " << n << " es " << res << endl;
}