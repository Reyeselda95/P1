#include <iostream>
#include <string.h>
using namespace std;

//declaracion de modulos
bool valor(char caracter[6][15]);

main(){

int i,j;
char caracter[6][15];
bool correcto;

cout<<"Introduce caracteres: ";

for(int i=0; i < 6;i++){
  
  for(int j=0;i < 15;j++){
  cin>>caracter[i][j];
  }
cout<<endl;  
}
correcto=valor(caracter);

cout<<correcto<<endl;

}


bool valor(char caracter[6][15]){

int i,j,k;
bool correcto;
correcto=false;
k=0;


for(int i=0; i < 6;i++){
  
  for(int j=0;i < 15;j++){

    if(strcmp(caracter[i][j],"*") == 0){
    
    k=k+1;
    
    }
    
	if(k == 15){
	correcto=true;
	}
	else{
	k=0;
	}
  
  }
cout<<endl;  
}
return(correcto);
}