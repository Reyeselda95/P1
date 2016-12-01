#include <iostream>
using namespace std;

int main() {
  int i, cont, suma, num1, num2, aux;
  
  cout << "Introduce un número:";
  cin >> num1;
  cout << "Introduce otro número:";
  cin >> num2;
  if(num1>num2) {
    aux=num1;
    num1=num2;
    num2=aux;
  }
  cont=0; suma=0;
  for (i=num1+1; i<num2; i++) {
    cont++;
    suma = suma+i;
  }
  cout << "Hay " << cont << " números entre el " << num1 << " y el " << num2;
  cout << "\nLa suma es " << suma;
}