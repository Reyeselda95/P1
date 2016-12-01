#include <iostream>
using namespace std;

//declaracion de modulos
void contar(char letras,int &na,int &ne,int &ni,int &no,int &nu);

main(){

int i,j;
int na,ne,ni,no,nu;
char letras;
na=0;
ne=0;
ni=0;
no=0;
nu=0;

cout<<"Introduce letras en la matriz 5x5"<<endl;


for(i=0;i<5;i++){

  for(j=1;j<=5;j++){
  cin>>letras;
  contar(letras,na,ne,ni,no,nu);
  }
 cout<<endl;
}

cout<<"Hay "<<na<<" a,hay "<<ne<<" e,hay "<<ni<<" i,hay "<<no<<" o,hay "<<nu<<" u "<<endl;

}


void contar(char letras,int &na,int &ne,int &ni,int &no,int &nu){

if(letras == 'a'){
na=na+1;
}
else if(letras == 'e'){
ne=ne+1;
}
else if(letras == 'i'){
ni=ni+1;
}
else if(letras == 'o'){
no=no+1;
}
else if(letras == 'u'){
nu=nu+1;
}
}