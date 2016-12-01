#include <iostream>
using namespace std;

void imprimeNumeros(int inicio, int fin, char orden){
  if(orden=='d' && inicio==fin){
    cout << fin;
  }
  else if (orden == 'd' && inicio<fin){
    imprimeNumeros(inicio+1, fin, orden);
    cout << inicio;
  }
  else if (orden == 'c' && inicio>fin){
    imprimeNumeros(inicio-1, fin, orden);
    cout << inicio;
  }
  else if (orden == 'c' && inicio==fin){
    cout << fin;
  }
}
main(){
  int inicio, fin;
  char orden;
  cout << "Introduce un número de inicio: ";
  cin >> fin;
  cout << "Introduce un número de fin: ";
  cin >> inicio;
  cout << "Introduce si los números van ordenados creciente o dececientemente: (c/d)(en minúscula por favor)";
  cin >> orden;
  imprimeNumeros(inicio, fin, orden);
  cout << endl;
}