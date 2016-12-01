#include <iostream>
using namespace std;

//declaracion modulos
void numeroImpar(int &numero, int &calcular);

main(){

int numero;
int calcular=0;

cout<<"Introduce el número: ";
cin>>numero;

numeroImpar(numero,calcular);


cout<<"La suma de los digitos impares es: "<<calcular<<endl;


}

void numeroImpar(int &numero, int &calcular){

int numero2,numero3;

numero2=numero % 10;
numero3=numero2 % 2;



if(numero == 0){
cout<<endl;
}

else{

    if(numero3 == 1){

    calcular=calcular + numero2;
    
    }

    numero=numero/10;
    numeroImpar(numero,calcular);

}


}
