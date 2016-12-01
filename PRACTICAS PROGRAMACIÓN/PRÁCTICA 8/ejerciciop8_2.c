//ALEJANDRO REYES ALBILLAR 45931406-S//
#include <iostream>
#include <string.h>
using namespace std;

const int KMAX = 50;
const int KCAD = 45;

typedef char TCad[KCAD];

typedef struct{
        TCad animal;
        TCad elemento;
}TSigno;

typedef struct{
        TCad nombre;
        TSigno signo;
}TPersona;

typedef TPersona TPersonas[KMAX];

void animal(int mes, TCad animal){
    
    
}
//modulo para introducir a una nueva persona
void nuevaPersona(TPersonas personas, int n){
     TCad elemento, animal;
     int suma, num, dig, anyo, mes;
     cout << "Introduce el nombre de la persona: ";
     cin >> personas[n].nombre;
     do{
        cout << "Introduce el mes de nacimiento de " << personas[n].nombre << ": ";
        cin >> mes;
     }while(mes < 1 && mes > 12);
     cout << "Introduce el año de nacimiento de " << personas[n].nombre << ": ";
     cin >> anyo;
     
     //Aqui se calcula el animal
      if(mes%3==0)
        strcpy(animal,"Mandril");
     else if(mes%3 == 2 || mes == 2)
        strcpy(animal,"Dragon");
     else if(mes%3 == 1 || mes == 1)
        strcpy(animal,"Rata");
     
     //Aqui se calcula el elemento
     suma = 0;
     dig=anyo;
     do{
        num=dig%10;
        dig=dig/10;
        suma=suma+num;
     }while(dig>=10);
     suma=suma+dig;
     if(suma%2==0)
        strcpy(elemento,"Fuego");
     else
        strcpy(elemento,"Agua");
             
     strcpy(personas[n].signo.animal, animal);
     strcpy(personas[n].signo.elemento, elemento);
}
//Modulo que imprime una lista de personas
void imprimePersonas(TPersonas personas, int i , int n, TCad elemento){
     int suma;
     suma=0;
     for(i=0; i<n; i++){
        cout << personas[i].nombre << " - " << personas[i].signo.animal << " - " << personas[i].signo.elemento << endl;
        cout << "-----------------------------------------------------------------------------" << endl;
        if(strcmp(elemento, personas[i].signo.elemento) == 0)
           suma=suma+1;
     }
     cout << "Hay " << suma << " amigos a los que les corresponde el elemento " << elemento << endl;
}

void menu (int n){
     TPersonas personas;
     int opcion, i;
     TCad elemento;
     do{
       
       cout << "\n1. Introduce datos de nueva persona.";
       cout << "\n2. Imprime el listado de personas.";
       cout << "\n3. Salir." << endl;
       do{
          cout << "Introduce tu opción: ";
          cin >> opcion;
          if(opcion < 1 || opcion > 3)
             cout << "ERROR: OPCIÓN INCORRECTA" << endl;
       }while(opcion < 1 || opcion > 3);
 
       switch(opcion){
           case 1: 
             if(n>= KMAX)
               cout << "No se pueden introducir más datos, para ello debes finalizar el programa.";
             else{ 
               nuevaPersona(personas, n);
               n+=1;
               cout << "\nHay " << n << " personas introducidas en el registro." << endl;
             }
             break;
           case 2:
               cout << "Introduce el elemento(Agua/Fuego): ";
               cin >> elemento;
               imprimePersonas(personas, i, n, elemento);
               
               break;
           case 3:
                cout << "FIN DEL PROGRAMA" << endl;
                break;
       }
    }while(opcion != 3 && opcion >= 1 && opcion <3);
}

main(){
    int n;
    n=0;
    cout << "*****Bienvenido al horóscopo chino*****";
    menu(n);
}
