#include <iostream> 
using namespace std;

int main() {
   char gen;
  
  cout << "Introduzca el sexo del bebé (M/F): ";
  cin >> gen;
  if (gen == 'M' || gen == 'm'){
    cout << "Asignar cuna Azul al bebé." << endl;
  }
  else if(gen == 'F' || gen == 'f'){
    cout << "Asignar cuna Rosa al bebé." << endl;
  }
  else
    cout << "El género introducido no es correcto." << endl;
}