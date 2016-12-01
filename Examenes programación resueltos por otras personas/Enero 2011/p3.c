#include <iostream>
using namespace std;


//Declaracion modulos
void funcion(int numero, int ser_par, int ser_impar);
void que_soy( int ser_par, int ser_impar, int numero);

main(){

int numero;
int ser_impar,ser_par;

cout<<"Introduce un número entero positivo"<<endl;
cin>>numero;

funcion(numero,ser_par,ser_impar);


}


void funcion(int numero,int ser_par, int ser_impar){

int n1,n2,n3,n4,n5,n6,n7,n8,ppar,pimpar;



if(numero <=100){
n1=numero/10;
n2=numero%10;

pimpar=n1;
ppar= n2;

}

else if(numero <=1000){
n1=numero%10;
n2=(numero/10) % 10;
n3=((numero/10) / 10); 

pimpar=n1+n3;
ppar=n2;
}

else if(numero <=10000){
n1=numero%10;
n2=(numero/10) % 10;
n3=((numero/10) / 10) %10;
n4=(((numero/10) / 10) /10);

pimpar=n1+n3;
ppar=n2+n4;
}

else if(numero <=100000){
n1=numero%10;
n2=(numero/10) % 10;
n3=((numero/10) / 10) %10;
n4=(((numero/10) / 10) /10) %10;
n5=((((numero/10) / 10) /10) /10);

pimpar=n1+n3+n5;
ppar=n2+n4;
}

else if(numero <=1000000){
n1=numero%10;
n2=(numero/10) % 10;
n3=((numero/10) / 10) %10;
n4=(((numero/10) / 10) /10) %10;
n5=((((numero/10) / 10) /10) /10)%10;
n6=((((numero/10) / 10) /10) /10)/10;

pimpar=n1+n3+n5;
ppar=n2+n4+n6;
}

else if(numero <=10000000){
n1=numero%10;
n2=(numero/10) % 10;
n3=((numero/10) / 10) %10;
n4=(((numero/10) / 10) /10) %10;
n5=((((numero/10) / 10) /10) /10)%10;
n6=(((((numero/10) / 10) /10) /10)/10)%10;
n7=(((((numero/10) / 10) /10) /10)/10)/10;

pimpar=n1+n3+n5+n7;
ppar=n2+n4+n6;
}

else if(numero <=100000000){
n1=numero%10;
n2=(numero/10) % 10;
n3=((numero/10) / 10) %10;
n4=(((numero/10) / 10) /10) %10;
n5=((((numero/10) / 10) /10) /10)%10;
n6=(((((numero/10) / 10) /10) /10)/10)%10;
n7=((((((numero/10) / 10) /10) /10)/10)/10) % 10;
n8=((((((numero/10) / 10) /10) /10)/10)/10)/10;

pimpar=n1+n3+n5+n7;
ppar=n2+n4+n6+n8;
}

ser_impar=pimpar % 2;
ser_par=ppar % 2;

que_soy(ser_par,ser_impar,numero);

}


void que_soy( int ser_par, int ser_impar, int numero){

if(numero <10){

cout<<"Falta un número, minimo 2 números"<<endl;

}

else if(ser_par == 0 && ser_impar != 0){

cout<<"estrambótico"<<endl;

}

else if(ser_par != 0 && ser_impar == 0){

cout<<"antiestrambótico"<<endl;

}

else if(ser_par == 0 && ser_impar == 0){

cout<<"ordinario"<<endl;

}
}