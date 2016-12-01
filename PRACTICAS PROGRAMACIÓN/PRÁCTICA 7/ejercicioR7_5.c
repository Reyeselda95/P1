#include <iostream>
#include <string.h>
using namespace std;

//Tamaño máximo de las cadenas
const int TAM=20;

//Tipo de datos para las cadenas
typedef char TCadena[TAM];

bool esAlfabetica(TCadena);
void aMinusculas(TCadena);
void leerCadena(TCadena);

int main(){
  TCadena cad1, cad2;
  
  //Pide al usuario introducir dos cadenas
  leerCadena(cad1);
  leerCadena(cad2);
  
  //Convierte las cadenas a minusculas
  aMinusculas(cad1);
  aMinusculas(cad2);
  
  //Muestra las cadenas en munúsculas
  cout << "Las dos palabras en minúsculas son:" << endl;
  cout << cad1 << endl << cad2 << endl;
  
  //Comprueba cual es la cadena menor
  int result=strcmp(cad1, cad2);
  if(result < 0)
    cout << "La menor es " << cad1 << endl;
  else if(result > 0)
    cout << "La menor es " << cad2 << endl;
  else
    cout << "Ambas cadenas son iguales" << endl;
}

void leerCadena(TCadena cad){
  do{
    cout << "Introduce una palabra: ";
    cin >> cad;
    
    if(!esAlfabetica(cad))
      cout << "Error, la palabra sólo debe contener letras" << endl;
  }while(!esAlfabetica(cad));
}

bool esAlfabetica(TCadena cad){
  bool alfabetica =true;
  int i=0;
  
  while (i<TAM && cad[i] != '\0'){
    if(!isalpha(cad[i])){
      alfabetica = false;
      break;
    }
    i++;
  }
  return alfabetica;
}

void aMinusculas(TCadena cad){
  int i=0;
  while(i<TAM && cad[i] != '\0'){
    cad[i]= tolower(cad[i]);
    i++;
  }
}