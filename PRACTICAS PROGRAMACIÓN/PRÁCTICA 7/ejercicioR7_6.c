#include <iostream>
#include <cstring>
using namespace std;

//funcion para buscar repetidos
/*busca el valor de lista de la posicion elementoBase hasta la posicion indiceHasta.
 * devuelve un entero con la poscion del duplicado o cero si no está duplicado.*/
int buscar(int elementoBase, int indiceHasta, char *lista[]);

//cuerpo principal del algoritmo

int main(int argc, char *argv[]){
  int contador;
  int nuevaposicion;
  int elementosrepetidos;
  
  elementosrepetidos=0;
  for(contador=1; contador < argc; contador++){
    nuevaposicion = buscar(contador, argc, argv);
    if(nuevaposicion>0)
      elementosrepetidos++;
  }
  return elementosrepetidos;
}

//funcion para buscar repetidos
/*tomando el elemento desde, busca en la lista hasta la posicion hasta
 * Devuelve 0 si no encuentra repetido
 * O el número de la posición del elemento encontrado*/
int buscar(int desde, int hasta, char *lista[]){
  int i;
  int encontrado; // se utiliza como indicador para salir
  encontrado=0;
  
  for(i=desde+1; i<hasta && encontrado==0; i++){
    cout << "Comparando: " << lista[desde] << " con: " << lista[i] << endl;
    if(strcmp(lista[desde], lista[i])==0)
      encontrado=i;
  }
  return encontrado;
}