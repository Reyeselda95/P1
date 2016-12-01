//ALEJANDRO REYES ALBILLAR 45931406-S//
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
//Apuesta del usuario arreglada
char apuestaUsuario(){
  char apU;
  cout << "\nPIEDRA (p)" << endl;
  cout << "PAPEL (a)" << endl;
  cout << "TIJERA (t)" << endl;
  do{
    cout << "\nEscoge tu apuesta: ";
    cin >> apU;
  }while(apU != 'p' && apU != 'P' && apU != 'A' && apU != 'a' && apU != 'T' && apU != 't');
  return(apU);
}
//Esta nunca estuvo mal desde un principio, aunque el srand no iba dentro del main, creo
int piedraPapelTijera(){
  srand(time(0));
  int apM;
  int apuesta;
  apM = rand() %3+1;
  switch(apM){
    case 1:
      apuesta = 1;
      cout << "Piedra" << endl;;
      break;
    case 2:
      apuesta = 2;
      cout << "Papel" << endl;
      break;
    case 3:
      apuesta = 3;
      cout << "Tijeras" << endl;
  }
  return (apuesta);
}

void comprobar (char n1, int n2, int &cont1, int &cont2, int &fin){
  int ganas, pierdes;
    switch(n1){
      case 'p':
	if(n2==1)
	  cout << "Es un empate." << endl;
	else if(n2==2){
	  cout << "Gana la máquina." << endl;
	  pierdes=1;
	}
	else if(n2==3){
	  cout << "Tu ganas." << endl;
	  ganas=1;
	}
	break;
      case 'a':
	if(n2==1){
	  cout << "Tu ganas." << endl;
	  ganas=1;
	}
	else if(n2==2)
	  cout << "Es un empate." << endl;
	else if(n2==3){
	  cout << "Gana la máquina." << endl;
	  pierdes=1;
	}
	break;
      case 't':
	if(n2==1){
	  cout << "Gana la máquina." << endl;
	  pierdes=1;
	}
	else if(n2==2){
	  cout << "Tu ganas." << endl;
	  ganas=1;
	}
	else if(n2==3)
	  cout << "Es un empate." << endl;
	break; 
      case 'P':
	if(n2==1)
	  cout << "Es un empate." << endl;
	else if(n2==2){
	  cout << "Gana la máquina." << endl;
	  pierdes=1;
	}
	else if(n2==3){
	  cout << "Tu ganas." << endl;
	  ganas=1;
	}
	break;
      case 'A':
	if(n2==1){
	  cout << "Tu ganas." << endl;
	  ganas=1;
	}
	else if(n2==2)
	  cout << "Es un empate." << endl;
	else if(n2==3){
	  cout << "Gana la máquina." << endl;
	  pierdes=1;
	}
	break;
      case 'T':
	if(n2==1){
	  cout << "Gana la máquina." << endl;
	  pierdes=1;
	}
	else if(n2==2){
	  cout << "Tu ganas." << endl;
	  ganas=1;
	}
	else if(n2==3)
	  cout << "Es un empate." << endl;
	break; 
    }
//Esto cuenta y muestra el resultado 
  if (ganas==1)
    cont1=cont1+1;
  else if(pierdes==1)
    cont2=cont2+1;
  
  cout << "\nRondas ganadas:"<< endl;
  cout << "Maquina: " << cont2 << endl;
  cout << "Usuario: " << cont1 << endl;
 
  if(cont2==2){
    cout << "Has perdido." << endl;
    fin=1;
  }
  else if(cont1==2){
    cout << "Has ganado." << endl;
    fin=1;
  }
}
//El main funciona ahora correctamente
int main(){
  
  char jueg, ap1;
  int ap2, fin, cont1, cont2;
  cont1=0;
  cont2=0;
  fin=0;
    
  cout << "*#*BIENVENIDO AL MAGNIFICO JUEGO DEL PIEDRA PAPEL O TIJERA*#*" << endl;
  cout << "¿Desea entrar en el juego? (s/n): ";
  cin >> jueg;
  switch(jueg){
    case 's':
      do{
	ap1 = apuestaUsuario();
	ap2 = piedraPapelTijera();
	comprobar(ap1, ap2, cont1, cont2, fin);
      }while(fin!=1);
      break;
    case 'n':
      cout << "SE TERMINO LA DIVERSIÓN." << endl;
      cout << "Si quieres volver a jugar reinicia el programa \(^-^)/. Adios." << endl;
      break;
  }
}
