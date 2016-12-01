#include <iostream>
using namespace std;

int numero_control(int isbn);

main(){
  
  int isbn,n;
  
  cout<<"Introduce el ISBN: ";
  cin>>isbn;
  n=numero_control(isbn);
  cout<<"El numero de control es "<<n<<endl;
}

//____________________________________________________EJERCICIO____________________________________________________
int numero_control(int isbn){
    
    int n,suma,i;
    
    if(isbn<100000000 || isbn>999999999) n=-1;
    else{
      for(i=9;i>0;i--){
	suma+=(isbn%10)*i;
	isbn=isbn/10;
      }
      n=suma%11;
    }
    
    return(n);
}
//____________________________________________________EJERCICIO____________________________________________________