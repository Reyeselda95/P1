//ALEJANDRO REYES ALBILLAR 45931406-S//
#include <iostream>
using namespace std;

void parYmayorN(int n, int elem){ 
  if(elem<n && elem%2 != 0)
    parYmayorN(n, elem+1);
  else if(elem<n && elem%2==0){
    cout << elem << " ";
    parYmayorN(n, elem+2);
  }
  else if(elem=n)
    cout << n;
}

main(){
  int n, elem;
  
  cout << "Introduce un número: ";
  cin >> n;
  cout << "Introduce un número desde el que empezar a contar: ";
  cin >> elem;
  parYmayorN(n, elem+1);
  cout << endl;
}