#include <iostream>
using namespace std;

int main() {

  int num;

  cout << "Anota tu edad en un papel y coge una calculadora." << endl;
  cin.get();
  cout << "Ahora multiplicala por 2." << endl;
  cin.get();
  cout << "Una vez multiplicado sumale 5" << endl;
  cin.get();
  cout << "El resultado multiplicalo por 500." << endl;
  cin.get();
  cout << "¿Ya esta?" << "\n" << "\n" << "Bien, ahora súmale la cantidad de dinero que llevas en el bolsillo, pero solamente los €, no los centimos ¿ok?" << endl;
  cin.get();
  cout << "Finalmente, restale 3758 a lo que te queda" << endl;
  cout << "\n" << "Bien ahora escribe el número resultante: " << endl;
  cin >> num;
  num = num + 1258;
  cout << "\n" << "Bien ahora te diré que eres una persona de " << num/1000 << " años de edad y que tienes " << num%1000 << " € en tu bolsillo." << "\n" << "¿He acertado?" << "\n" << "\n" << "Espero que hayas disfrutado y suerte si intentas encontrar el truco xD" << endl;
} 
