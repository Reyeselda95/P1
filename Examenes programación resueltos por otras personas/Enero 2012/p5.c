#include <iostream>
#include <string.h>
using namespace std;

//declaracion constantes
const int TAM1=45;
const int TAM2=60;
const int TAM3=15;

//declaracion de estructura
typedef struct{
int codigo;
char nombre[TAM3];
int codigo_asignatura_coordina[3];
}TListaProfesor;

typedef TListaProfesor TProfesor[TAM2];

typedef struct{
int codigo;
char nombre[TAM3];
int cuatrimestre;
char tipo[TAM3];
int curso;
int codigo_profesor_coordina;
int codigo_asignatura_aprobadas[5];
}TListaAsignatura;

typedef TListaAsignatura TAsignatura[TAM1];

//declaracion de modulos
char menu();
void introducir_datos_asignatura(TListaAsignatura asignatura[TAM1],int &contador1);
void introducir_datos_profesor(TListaProfesor profesor[TAM2],int &contador2);
void imprimir_listado_asignatura(TListaAsignatura asignatura[TAM1],int contador1);
void asignatura_coordina_profesor(TListaAsignatura asignatura[TAM1],int contador1, TListaProfesor profesor[TAM2],int contador2);

main(){

TAsignatura asignatura;
TProfesor profesor;

int contador1=0;
int contador2=0;
char opcion;

do{

opcion=menu();

switch(opcion){

  case '1':
  cout<<"Has elegido la opción 1"<<endl;
  introducir_datos_asignatura(asignatura,contador1);
  cout<<endl<<endl;
  
  break;
  
  case '2':
  cout<<"Has elegido la opción 2"<<endl;
  introducir_datos_profesor(profesor,contador2);
  cout<<endl<<endl;
  
  break;
  
  case '3':
  cout<<"Has elegido la opción 3"<<endl;
  imprimir_listado_asignatura(asignatura,contador1);
  cout<<endl<<endl;
  
  break;
  
  case '4':
  cout<<"Has elegido la opción 4"<<endl;
  asignatura_coordina_profesor(asignatura,contador1,profesor,contador2);
  cout<<endl<<endl;
  
  break;
  
  case '5':
  cout<<"Has elegido la opción 5"<<endl;
  cout<<"FIN DEL PROGRAMA"<<endl;
  cout<<endl;
  
  break;
  
  default:
  cout<<"ERROR: Elige una de las opciones(1/2/3/4/5)"<<endl;
  
}
}while(opcion != '5');

}

char menu(){

char opcion;

do{
cout<<endl;
cout<<"1.Introducir datos asignatura"<<endl;
cout<<"2.Introducir datos profesor"<<endl;
cout<<"3.Imprimir listado de asignatura"<<endl;
cout<<"4.Listado asignaturas coordina profesor"<<endl;
cout<<"5.Salir"<<endl;
cout<<"Elige una de las opciones(1/2/3/4/5): ";
cin>>opcion;
cout<<endl;

}while( opcion <= '1' && opcion >= '5');
return(opcion);
}


void introducir_datos_asignatura(TListaAsignatura asignatura[TAM1],int &contador1){

char opcion;
int i=0;

cout<<"Introduce el código: ";
cin>>asignatura[contador1].codigo;

cout<<"Introduce el nombre: ";
cin>>asignatura[contador1].nombre;

do{
cout<<"Introduce el cuatrimestre: ";
cin>>asignatura[contador1].cuatrimestre;
}while(asignatura[contador1].cuatrimestre <= 1 && asignatura[contador1].cuatrimestre >= 3);

do{
cout<<"Introduce el tipo (basica,obligatoria,optativa): ";
cin>>asignatura[contador1].tipo;
}while(strcmp(asignatura[contador1].tipo,"basica") != 0 && strcmp(asignatura[contador1].tipo,"obligatoria") != 0 && strcmp(asignatura[contador1].tipo,"optativa") != 0);

cout<<"Introduce el curso: ";
cin>>asignatura[contador1].curso;

cout<<"Introduce el codigo del profesor coordinador: ";
cin>>asignatura[contador1].codigo_profesor_coordina;

do{
cout<<"¿Es recomendable tener aprobada alguna asignatura antes? (s/n): ";
cin>>opcion;
  
  if(opcion == 's'){
  cout<<"Introduce el codigo de las asignaturas que es recomendable tener aprobadas: ";
  cin>>asignatura[contador1].codigo_asignatura_aprobadas[i];
  i=i+1;
  }
}while(opcion != 'n' || i > 4);

contador1=contador1 + 1;

}

void introducir_datos_profesor(TListaProfesor profesor[TAM2],int &contador2){

char opcion;
int i=0;

cout<<"Introduce el código: ";
cin>>profesor[contador2].codigo;

cout<<"Introduce el nombre: ";
cin>>profesor[contador2].nombre;

do{
cout<<"¿El profesor coordina alguna asignatura? (s/n): ";
cin>>opcion;

  if(opcion == 's'){
  cout<<"Introduce los codigos de la asignatura que coordina: ";
  cin>>profesor[contador2].codigo_asignatura_coordina[i];
  i=i+1;
  }
}while(opcion != 'n' || i > 2);

contador2=contador2 + 1;
}

void imprimir_listado_asignatura(TListaAsignatura asignatura[TAM1],int contador1){

int i;

for(i=0;i < contador1;i++){

  if(asignatura[i].cuatrimestre == 1 && strcmp(asignatura[i].tipo,"obligatoria")){
  cout<<"Nombre: "<<asignatura[i].nombre<<endl;
  cout<<"Curso: "<<asignatura[i].curso<<endl<<endl;
  }
}

}

void asignatura_coordina_profesor(TListaAsignatura asignatura[TAM1],int contador1, TListaProfesor profesor[TAM2],int contador2){

int i,codigo,k,j;

cout<<"Introduce codigo de asignatura: ";
cin>>codigo;

for(i=0;i < contador1;i++){

  if(codigo == asignatura[i].codigo){
  
      for(j=0;j < contador2;j++){
      
      if(asignatura[i].codigo_profesor_coordina==profesor[j].codigo){
      
	for(k=0;k < 2;k++){
	
	  if(profesor[j].codigo_asignatura_coordina[k]==asignatura[i].codigo_profesor_coordina){
	  cout<<"Nombre de la asignatura que coordina el profesor: "<<asignatura[i].nombre;
	  }
	}  
      
      }
      }     
  
  }
  else{
  cout<<"No se encuentra el codigo de la asignatura"<<endl;
  }

}
}
