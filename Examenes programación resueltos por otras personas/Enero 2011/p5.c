#include <iostream>
#include <string.h>
using namespace std;


//Declaracion de constantes
int const TAM1=200;
int const TAM2=25;
int const TAM3=30;
int const TAM4=25;

//Declaracion de estructura

typedef struct{
char nombre[TAM4];
int cif;
int beneficio;
}TListaFabricante;

typedef TListaFabricante TFabricante[TAM2];

typedef struct{
int codigo;
char tipo[TAM4];
int anyo_salida;
int MB;
char dispositivo[TAM4]; 
}TListaConsola;

typedef TListaConsola TConsola[TAM3];

typedef struct{
char nombre[TAM4];
int cif;
int codigo;
char genero[TAM4];
int edad;
char stock[TAM4];
float precio;
TFabricante fabricante;
TConsola consola;
}TListaVideojuego;

typedef TListaVideojuego TVideojuego[TAM1];

//Declaracion modulos
char menu();
void datos_videojuegos(TListaVideojuego videojuego[TAM1], int &contador);
void imprimir_videojuegos_estrella(TListaVideojuego videojuego[TAM1], int contador);
void edad_media(TListaVideojuego videojuego[TAM1], int contador);

main(){

TVideojuego videojuego;

int contador=0;


char opcion;

do{

opcion=menu();

switch(opcion){

  case '1':
  cout<<"Has elegido la opción 1"<<endl;
  datos_videojuegos(videojuego,contador);
  cout<<endl;
  
  break;
  
  case '2':
  cout<<"Has elegido la opción 2"<<endl;
  imprimir_videojuegos_estrella(videojuego,contador);
  cout<<endl;
  
  break;
  
  case '3':
  cout<<"Has elegido la opción 3"<<endl;
  edad_media(videojuego,contador);
  cout<<endl;
  
  break;
  
  case '4':
  cout<<"Has elegido la opción 4"<<endl;
  cout<<"FIN DEL PROGRAMA"<<endl;
  cout<<endl;
  
  break;
  
  default:
  cout<<"ERROR: Elige una de las opciones(1/2/3/4)"<<endl;
  
}
}while(opcion != '4');

}

char menu(){

char opcion;

do{

cout<<"1.Introducir datos videojuegos"<<endl;
cout<<"2.Imprimir listado de videojuegos estrella"<<endl;
cout<<"3.Edad media y dispositivo de almacenamiento"<<endl;
cout<<"4.Salir"<<endl;
cout<<"Elige una de las opciones(1/2/3/4): ";
cin>>opcion;
cout<<endl;

}while( opcion <= '1' && opcion >= '4');
return(opcion);
}

void datos_videojuegos(TListaVideojuego videojuego[TAM1], int &contador){

char opcion1,opcion2;
int i=0;
int j=0;

cout<<"Introduce el nombre: ";
cin>>videojuego[contador].nombre;

cout<<"Introduce el CIF del fabricante: ";
cin>>videojuego[contador].cif;

cout<<"Introduce el código de las consolas en las que se puede ejecutar: ";
cin>>videojuego[contador].codigo;

do{
cout<<"Introduce el género (accion/rol/carreras): ";
cin>>videojuego[contador].genero;
}while(strcmp(videojuego[contador].genero,"accion") != 0 && strcmp(videojuego[contador].genero,"rol") != 0 && strcmp(videojuego[contador].genero,"carreras") != 0);

do{
cout<<"Introduce edad recomendable (menor que 21 años y mayor que 0): ";
cin>>videojuego[contador].edad;
}while(videojuego[contador].edad < 0 || videojuego[contador].edad > 21);

do{
cout<<"Introduce stock(Disponible/ No Disponible): ";
cin>>videojuego[contador].stock;
}while(strcmp(videojuego[contador].stock,"Disponible") != 0 && strcmp(videojuego[contador].stock,"No Disponible") != 0);

cout<<"Introduce precio: ";
cin>>videojuego[contador].precio;


do{
cout<<"¿Desea introducir datos sobre fabricante?: ";
cin>>opcion1;

if(opcion1 == 's'){

cout<<"Introduce nombre comercial: ";
cin>>videojuego[contador].fabricante[i].nombre;

cout<<"Introduce CIF: ";
cin>>videojuego[contador].fabricante[i].cif;

do{
cout<<"Introduce el margen de beneficio con el que trabaja (porcentaje sobre el precio de venta): ";
cin>>videojuego[contador].fabricante[i].beneficio;
}while(videojuego[contador].fabricante[i].beneficio < 0 || videojuego[contador].fabricante[i].beneficio > 100);

i=i+1;
}

}while(opcion1 != 'n');


do{
cout<<"¿Desea introducir datos sobre consolas?: ";
cin>>opcion2;

if(opcion2 == 's'){

cout<<"Introduce el código: ";
cin>>videojuego[contador].consola[j].codigo;

do{
cout<<"Introduce tipo (playstation/wii/xbox360): ";
cin>>videojuego[contador].consola[j].tipo;
}while(strcmp(videojuego[contador].consola[j].tipo,"playstation") != 0 && strcmp(videojuego[contador].consola[j].tipo,"wii") != 0 && strcmp(videojuego[contador].consola[j].tipo,"xbox360") != 0);

cout<<"Introduce año de salida: ";
cin>>videojuego[contador].consola[j].anyo_salida;

cout<<"Introduce memoria interna en MB: ";
cin>>videojuego[contador].consola[j].MB;

do{
cout<<"Introduce dispositivo de almacenamiento (dvd/bluray/tarjeta): ";
cin>>videojuego[contador].consola[j].dispositivo;
}while(strcmp(videojuego[contador].consola[j].dispositivo,"dvd") != 0 && strcmp(videojuego[contador].consola[j].dispositivo,"bluray") != 0 && strcmp(videojuego[contador].consola[j].dispositivo,"tarjeta") != 0);

j=j+1;
}

}while(opcion2 != 'n');


contador=contador + 1;

}

void imprimir_videojuegos_estrella(TListaVideojuego videojuego[TAM1], int contador){

int i,j,mayor;
bool ok=false;

for(i=0;i < contador; i++){

  for(j=0; j < TAM2; j++){

  if(videojuego[i].fabricante[j].beneficio > videojuego[contador].fabricante[i+1].beneficio
  mayor=videojuego[i].fabricante[j].beneficio;
  
  }
  cout<<"Videojuegos estrella: "<<videojuego[i].nombre<<endl;
  cout<<"Stock: "<<videojuego[i].stock<<endl;
  cout<<"Precio: "<<videojuego[i].precio<<endl;

}

}


void edad_media(TListaVideojuego videojuego[TAM1], int contador){

int i,j,calculo,edad_media;
char genero[TAM4];
char dispositivo[TAM4];
int veces=0;
int vez_dvd=0;
int vez_bluray=0;
int vez_tarjeta=0;
calculo=0;


cout<<"Introduce el genero: ";
cin>>genero;

for(i=0;i < contador;i++){

    if(strcmp(videojuego[i].genero,genero) == 0){
    calculo=videojuego[i].edad + calculo;
    veces=veces+1;
    
      for(j=0; j< TAM3;j++){
	
	if(strcmp(videojuego[i].consola[j].dispositivo,"dvd") == 0){
	vez_dvd=vez_dvd+1;
	}
	else if(strcmp(videojuego[i].consola[j].dispositivo,"bluray") == 0){
	vez_bluray=vez_bluray+1;
	}
	else if(strcmp(videojuego[i].consola[j].dispositivo,"tarjeta") == 0){
	vez_tarjeta=vez_tarjeta+1;
	}
    
    }
    
  }    

}

edad_media=calculo/veces;

if(vez_dvd > vez_bluray && vez_dvd > vez_tarjeta){
strcpy(dispositivo,"dvd");
}

else if(vez_bluray> vez_dvd && vez_bluray > vez_tarjeta){
strcpy(dispositivo,"bluray");
}

else if(vez_tarjeta > vez_dvd && vez_tarjeta > vez_bluray){
strcpy(dispositivo,"tarjeta");
}

cout<<"La edad media recomendable es: "<<edad_media<<endl;
cout<<"El dispositivo de almacenamiento mayoritario es: "<<dispositivo<<endl;

}