//ALEJANDRO REYES ALBILLAR 45931406-S//
#include <iostream>
using namespace std;

const int KPLANT=300;
const int KMAX=20;
const int KVAL=10;

typedef int TVal[KVAL];
typedef char TCad[KMAX];

typedef struct{
  int codigo;
  TCad nombre;
  char tipo;
  TVal valoracion;
  int nVal;
  float precio;
}TPlanta;

typedef TPlanta TVivero[KPLANT];

void nuevaPlanta(TVivero vivero,int i){
  int j;
  vivero[i].codigo=i;
  cout << "Nombre: ";
  cin >> vivero[i].nombre;
  do{
    cout << "\nTipo: ";
    cin >> vivero[i].tipo;
  }while(vivero[i].tipo != 'a' || vivero[i].tipo != 't' || vivero[i].tipo != 'c');
  do{
    cout << "\nNúmero de Valoraciones: ";
    cin >> vivero[i].nVal;
  }while(vivero[i].nVal>KVAL || vivero[i].nVal < 0);
  j=0;
  for(j=0; j < vivero[i].nVal; j++){
    do{  
      cout << "Valor " << j << "(2, 5, 8): ";
      cin >> vivero[i].valoracion;
    }while(vivero[i].valoracion[j] != 2 ||  vivero[i].valoracion[j] != 5 || vivero[i].valoracion[j] != 8);
  }
  cout << "\nPrecio: ";
  cin >> vivero[i].precio;
  cout << "\n*** ALTA DE PLANTA CORRECTA ***";
}
  
void listado (TVivero vivero, int nAltas){
  int i=0, suma, j, prom;
  cout << "NOMBRE         VALORACIÓN";
  do{
    cout << vivero[i].nombre;
    suma=0;
    for(j=0; j< vivero[i].nVal, j++){
      suma= suma + vivero[i].valoracion[j];
    }
    prom=suma/vivero[i].nVal;    
    if(prom>=2 && prom <4)
      cout << "      " << prom << "    NO COMPRAR";
    if else (prom >= 4 && prom < 7)
      cout << "      " << prom << "    COMPRAR SI EL COSTE INTERESA";
    if else (prom >= 7 && prom < 8)
      cout << "      " << prom << "    COMPRAR LO ANTES POSIBLE"; 
    i++; 
  }while(i<nAltas);
}

void listadoPrecio(TVivero vivero, int precio, int nAltas){
  int i;
  for(i=0; i<nAltas; i++){
    if(vivero[i].precio > precio){
      cout << endl;
    }
    else{
      cout << "Código: " << vivero[i].codigo;
      cout << "Nombre: " << vivero[i].nombre;
      cout << "Tipo: ";
      if(vivero[i].codigo=='a')
	cout << "anual"
      else if(vivero[i].codigo=='t')
	cout << "temporada"
      else
	cout << "cactus";
      cout << "Precio: " << vivero[i].precio;
    }
  }
}
  
void menu(int opcion){
  int i, nAltas, precio;
  TVivero vivero;
  i=0;
  nAltas=0;
  do{
    switch(opcion){
      case 1:
	cout << "*** ALTA DE PLANTA ***" << endl;
	nuevaPlanta(vivero, i);
	i=i+1;
	nAltas=nAltas+1;
	break;
      
      case 2:
	cout << "***** LISTADO ******" << endl;
	if(nAltas==0)
	  cout << "No se ha introducido ninguna planta todavía.";
	else
	  listado(vivero, nAltas);
	break;
      
      case 3:
	cout << "************ LISTADO POR PRECIO *************" << endl;
	cout << "Introduce el precio: ";
	cin >> precio;
	cout << "*********************************************" << endl;
	listadoPrecio(vivero, precio, nAltas);
	break;
      
      case 4:
	cout << endl;
      
    }
  }while(opcion <4 && opcion>1);
 }
      
int main(){
  int opcion;
  cout << "***** VIVEROS EL PLANTON *****" << endl;
  cout << "1.Introducir los datos de una planta." << "\n2. Listado." << "\n3.Listado por precio." << "\n4. Finalizar." << "\nOpción: ";
  cin >> opcion;
  menu(opcion);
}