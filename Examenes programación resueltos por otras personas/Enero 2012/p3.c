#include <iostream>
using namespace std;

//declaracion de modulos
void division(int &n1,int n2,int &i);

main(){

int n1,n2,i;
i=1;

do{
cout<<"Introduce dos numeros: ";
cin>>n1;
cin>>n2;
}while(n1 < n2);


division(n1,n2,i);

if(n1 != 0){
i=i-1;
}

cout<<"El cociente es: "<<i<<endl;

}

void division(int &n1,int n2, int &i){

if(n1<=n2){
cout<<endl;
n1=n1-n2;
}

else{
n1=n1-n2;
i=i+1;

division(n1,n2,i);

}

}