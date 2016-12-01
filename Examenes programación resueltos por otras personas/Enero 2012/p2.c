#include <iostream>
#include <stdlib.h> 
using namespace std;


//declaracion modulos
void imprimir (int numero[4][5]);
void cambiar_numero(int numero[4][5]);
//int numero_mas_grande(int numero[4][5]);


main(){

int numero[4][5];
int i,j,numero1;

srand(time(0));		//inicializar el generador de números aleatorios



for(i=0;i < 4;i++){
  for(j=0;j < 5;j++){
  numero1=rand()%(10);
  numero[i][j]=numero1;
  }
cout<<endl;
}

imprimir(numero);

cout<<endl<<endl;

cambiar_numero(numero);

imprimir(numero);

}



void imprimir (int numero[4][5]){

int i,j;

for(i=0;i < 4;i++){
  for(j=0;j < 5;j++){
  cout<<numero[i][j]<<"  ";
  }
cout<<endl;
}

}


void cambiar_numero(int numero[4][5]){

int i,j;

for(i=0;i < 4;i++){
  for(j=0;j < 5;j++){
    if(numero[i][j]==0){
    do{
      numero[i][j]=rand()%(10);
    }while(numero[i][j] == 0);
    }
  }
      
}
}


/*
int numero_mas_grande(int numero[4][5]){

int i,j;

int mayor;

for(i=0;i < 4;i++){
  for(j=0;j < 5;j++){
  if(numero[i][j] >= numero[i][j+1]){
  mayor=numero[i][j];
  }
  else{
  mayor=numero[i][j+1];
  }
  }
}
return(mayor);
}
*/