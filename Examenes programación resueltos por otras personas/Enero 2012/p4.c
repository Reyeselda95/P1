#include <iostream>
using namespace std;

//declaracion de modulos
int calcular_codigo_control(int numero);

main(){

int numero;
int codigo_control;

cout<<"Introduce un número entero positivo de como máximo 9 cifras: ";
cin>>numero;

if(numero >= 999999999 || numero <= 99999999){
codigo_control= -1;
}

else if(numero <= 999999999){
codigo_control=calcular_codigo_control(numero);
}

cout<<"El ISBN es: "<<numero<<"- "<<codigo_control<<endl;

}




int calcular_codigo_control(int numero){

int i,total1,total2,n1,n2;
int divisor=10;
int j=9;
total1=0;

n2=numero;

for(i=1;i <= 9;i++){

n1=n2 % 10;
total1=total1 + (n1 * j);

n2=n2 / divisor;
j=j-1;
}

total2=total1 % 11;

return(total2);
}