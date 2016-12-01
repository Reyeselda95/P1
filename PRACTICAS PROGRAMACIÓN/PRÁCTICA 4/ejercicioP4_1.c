#include <iostream>
#include <cmath>
using namespace std;

int main() {
  float num, sum, cont, med, var;
  
  cont=0;
  var=0;
  med=0;
  do{
    cout << "Introduce un número real: ";
    cin >> num;
    cont=cont++;
    med=med+num;
    var=var+pow(num,2);
  } while(num!=0);
  cont=cont-1;
  cout << "La media de los números introducidos es: " << med/cont;
  cout << "\nLa varianza de los números introducidos es: " << (var/cont)-pow((med/cont),2) << endl;
}
 