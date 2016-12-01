#include <iostream>
using namespace std;

//declaracion modulos


main(){

int n,i,k,j,l,ascendente,mediana;
int numero[50];

do{
cout<<"Introduce el valor de n (impar e inferior a 50): ";
cin>>n;
}while(n > 50 || ( n % 2 ) == 0);

cout<<"Introduce los números: ";

for(i=0; n > i;i++){

cin>>numero[i];

}


for(j=0; n > j;j++){
  for(k=0; n-1 > k;k++){

    if(numero[k] >= numero[k+1]){
    ascendente=numero[k];
    numero[k]=numero[k+1];
    numero[k+1]=ascendente;

    }
    
  }
}


cout<<"Para los números: ";

for(l=0; n > l;l++){
cout<<numero[l]<<"  ";
}

cout<<endl<<"La mediana es: "<<numero[(n/2)]<<endl<<endl;
}