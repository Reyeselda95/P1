//ALEJANDRO REYES ALBILLAR 45931406-S//
#include <iostream>
using namespace std;

int main() {
  int num, div, sig;
  sig=0;
  do{
      cout << "Introduce un número natural: ";
      cin >> num;
  } while (num<=0); 
 //Aqui va la puñetera comprobacion de si es o no primo y dar el siguiente//
  sig=sig+num;
  cout << "El siguiente número es :" << sig << endl;
}