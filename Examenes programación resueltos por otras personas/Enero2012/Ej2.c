#include <iostream>
using namespace std;

void imprimir (int matriz[4][5]);
void cambiar_numero(int matriz[4][5]);


main(){

int matriz[4][5];
int i,j;

srand(time(0));	



for(i=0;i < 4;i++){
  for(j=0;j < 5;j++){
  matriz[i][j]=rand()%(10);
    
  }
}

cout<<"Matriz original"<<endl;

imprimir(matriz);

cambiar_numero(matriz);

cout<<endl<<"Matriz nueva"<<endl;

imprimir(matriz);

}



void imprimir (int matriz[4][5]){

int i,j;

for(i=0;i < 4;i++){
  for(j=0;j < 5;j++){
  cout<<matriz[i][j]<<"     ";
  }
cout<<endl;
}

}


void cambiar_numero(int matriz[4][5]){

  int i,j,max;

  for(i=0;i < 4;i++){
    for(j=0;j < 5;j++){
      if(matriz[i][j]==0){
	
	if(i!=0)max=matriz[i-1][j];
	if(i!=3 && matriz[i+1][j]>max )max=matriz[i+1][j];
	if(j!=0 && matriz[i][j-1]>max )max=matriz[i][j-1];
	if(j!=4 && matriz[i][j+1]>max )max=matriz[i][j+1];
	
	if(i!=0 && j!=0 && matriz[i-1][j-1]>max )max=matriz[i-1][j-1];
	if(i!=0 && j!=4 && matriz[i-1][j+1]>max )max=matriz[i-1][j+1];
	if(i!=3 && j!=0 && matriz[i+1][j-1]>max )max=matriz[i+1][j-1];
	if(i!=3 && j!=4 && matriz[i+1][j+1]>max )max=matriz[i+1][j+1];
	
	matriz[i][j]=max;
      
      }
    }
  }
}
