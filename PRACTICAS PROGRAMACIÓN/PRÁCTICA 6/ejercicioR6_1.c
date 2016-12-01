#include <iostream>
using namespace std;

void invertir(int n){ //n es el total de números a introducir
  int num;
  if(n>0){
    cout << "Introduce un número: ";
    cin >> num;
    invertir(n-1);
    cout << num << endl;
  }
}

int main(){
  int n;
  cout << "Introduce la cantidad de números a introducir: ";
  cin >> n;
  invertir(n);
}