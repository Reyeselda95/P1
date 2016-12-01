#include <iostream>
using namespace std;

void decimalABinario(int n){
  if(n<=1)
    cout << n;
  else{
    decimalABinario(n/2);
    cout << n%2;
  }
}

main(){
  int n;
  cout << "Introduce un número para convertir este a binario: ";
  cin >> n;
  decimalABinario(n);
  cout << endl;
}