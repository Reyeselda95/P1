#include <iostream>
#include <string.h>
using namespace std;

//declaracion de constantes

int const TAM1=500;
int const TAM2=25;
int const TAM3=20;

//declaracion de estructura

typedef struct{
int cif;
char nombre[TAM3];
char domicilio[TAM3];
}TListaCadenaHotel;

typedef TListaCadenaHotel TCadenaHotel[TAM2];

typedef struct{
char nombre[TAM3];
char ciudad[TAM3];
int categoria;
char direccion[TAM3];
int precio_habitacion_simple;
int num_hab_simple;
int num_suite;
int num_hab_doble;
int cif;
}TListaHotel;

typedef TListaHotel THotel[TAM1];

//declaracion modulos
char menu();
void informacion_hotel(TListaHotel hotel[TAM1], int &contador1);
void informacion_cadena_hotel(TListaCadenaHotel cadenaHotel[TAM2], int &contador2);
void solicitar_datos(TListaHotel hotel[TAM1], int contador1);
void solicitar_datos_usuario(TListaHotel hotel[TAM1], int contador1, TListaCadenaHotel cadenaHotel[TAM2], int contador2);

main(){

TCadenaHotel cadenaHotel;
THotel hotel;

char opcion;
int contador1=0;
int contador2=0;


do{

opcion=menu();

switch(opcion){

    case '1':
    cout<<"Has elegido la opcion 1"<<endl;
    informacion_hotel(hotel,contador1);
    cout<<endl;
    break;
    
    case '2':
    cout<<"Has elegido la opcion 2"<<endl;
    informacion_cadena_hotel(cadenaHotel,contador2);
    cout<<endl;
    break;
    
    case '3':
    cout<<"Has elegido la opcion 3"<<endl;
    solicitar_datos(hotel,contador1);
    cout<<endl;
    break;
    
    case '4':
    cout<<"Has elegido la opcion 4"<<endl;
    solicitar_datos_usuario(hotel,contador1,cadenaHotel,contador2);
    cout<<endl;
    break;
    
    case '5':
    cout<<"Has elegido la opcion 5"<<endl<<endl;
    cout<<"Fin del programa"<<endl<<endl;
    cout<<endl;
    break;
    
    default:
    cout<<"ERROR:Elige una de las opciones (1/2/3/4/5): "<<endl<<endl;
    
}

}while(opcion != '5');

}


char menu(){

char opcion;

do{

cout<<"1. Introduce la información de los hoteles"<<endl;
cout<<"2. Introduce la informacion de las cadenas hoteleras"<<endl;
cout<<"3. Nombre de los hoteles con 5 estrellas"<<endl;
cout<<"4. Solicitar datos"<<endl;
cout<<"5. Salir"<<endl;
cout<<"Elige una de las siguientes opciones (1/2/3/4/5): ";
cin>>opcion;

}while(opcion < '1' && opcion > '5');

return(opcion);
}

void informacion_hotel(TListaHotel hotel[TAM1], int &contador1){

cout<<"Introduce el nombre del hotel: ";
cin>>hotel[contador1].nombre;

cout<<"Introduce la ciudad del hotel: ";
cin>>hotel[contador1].ciudad;

do{
cout<<"Introduce la categoria del hotel (estrellas): ";
cin>>hotel[contador1].categoria;
}while(hotel[contador1].categoria < 0 || hotel[contador1].categoria > 5);

cout<<"Introduce la direccion del hotel: ";
cin>>hotel[contador1].direccion;

cout<<"Introduce el precio de la habitacion simple del hotel: ";
cin>>hotel[contador1].precio_habitacion_simple;

cout<<"Introduce el número de la habitacion simple del hotel: ";
cin>>hotel[contador1].num_hab_simple;

cout<<"Introduce el número de suites del hotel: ";
cin>>hotel[contador1].num_suite;

cout<<"Introduce el número de habitaciones dobles del hotel: ";
cin>>hotel[contador1].num_hab_doble;

do{
cout<<"Introduce el CIF de la cadena hotelera a la que pertenece (1-25): ";
cin>>hotel[contador1].cif;
}while(hotel[contador1].cif < 1 || hotel[contador1].cif > 25);

contador1=contador1 + 1;
}

void informacion_cadena_hotel(TListaCadenaHotel cadenaHotel[TAM2], int &contador2){

cadenaHotel[contador2].cif = contador2 +1;

cout<<"CIF de la cadena hotelera: "<<cadenaHotel[contador2].cif<<endl;


cout<<"Introduce el nombre de la cadena hotelera: ";
cin>>cadenaHotel[contador2].nombre;

cout<<"Introduce el domicilio social de la cadena hotelera: ";
cin>>cadenaHotel[contador2].domicilio;


contador2=contador2 +1;
}


void solicitar_datos(TListaHotel hotel[TAM1], int contador1){

int i;
bool encontrado=false;

cout<<"El nombre de los hoteles que tienen 5 estrellas son: "<<endl;

for(i=0;i < contador1;i++){

    if(hotel[i].categoria == 5){
    
    cout<<hotel[i].nombre<<endl;
    
    encontrado=true;
    }
    

}

if( encontrado==false){
cout<<"Ningún hotel tiene 5 estrellas"<<endl;

}
}


void solicitar_datos_usuario(TListaHotel hotel[TAM1], int contador1, TListaCadenaHotel cadenaHotel[TAM2], int contador2){

char ciudad[TAM3],tipo_habitacion[TAM3];
int categoria, num_habitaciones,i,j;
float precio;
bool encontrado=false;

cout<<"Ciudad a la que quieres ir: ";
cin>>ciudad;

do{
cout<<"Categoría del hotel que buscas: ";
cin>>categoria;
}while(categoria < 1 || categoria > 5);

do{
cout<<"Tipo de habitación que quiere (simple,doble,suite): ";
cin>>tipo_habitacion;
}while(strcmp(tipo_habitacion,"simple") != 0 && strcmp(tipo_habitacion,"doble") != 0 && strcmp(tipo_habitacion,"suite") != 0);

cout<<"Número de habitaciones que quiere: ";
cin>>num_habitaciones;

cout<<endl<<endl;

for(i=0; i < contador1; i++){

    if(strcmp(ciudad,hotel[i].ciudad) == 0 && categoria == hotel[i].categoria){
    
    cout<<"Nombre del primer hotel encontrado que cumple los requisitos: "<<hotel[i].nombre<<endl;
    
    cout<<"Precio que le va a suponer al cliente: ";
    
    if(strcmp(tipo_habitacion,"simple") == 0){
    precio = hotel[i].num_hab_simple * hotel[i].precio_habitacion_simple;
    }
    else if(strcmp(tipo_habitacion,"doble") == 0){
    precio = hotel[i].num_hab_doble * (hotel[i].precio_habitacion_simple * 1.35);
    }
    if(strcmp(tipo_habitacion,"suite") == 0){
    precio = hotel[i].num_suite * (hotel[i].precio_habitacion_simple * 2);
    }
    
    cout<<precio<<endl;
    
    cout<<"Nombre de la cadena hotelera: ";
    
	for(j=0;j < contador2;j++){
    
	    if(cadenaHotel[j].cif == hotel[i].cif){
	    cout<<cadenaHotel[j].nombre<<endl;
	    }
	    
	}
    encontrado=true;
    }
	
}
    if(encontrado == false){
    cout<<"La ciudad introducida no existe o no hay información sobre ningún hotel en esa ciudad con esas caracteristicas"<<endl;
    }


}

