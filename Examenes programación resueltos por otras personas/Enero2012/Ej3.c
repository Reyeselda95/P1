#include <iostream>
using namespace std;

void division(int n1, int n2, int cont);

int main(){
  
  int n1, n2, cont=0;
  
  cout<<"Divisiones!"<<endl;
  do{
    cout<<"Introduce el primer número: ";
    cin>>n1;
    cout<<"Introduce el segundo número: ";
    cin>>n2;
    if(n1<n2)cout<<"El primer número debe ser mayor o igual que el segundo."<<endl;
  }while(n1<n2);
  
  division(n1,n2,cont);
}

void division(int n1, int n2, int cont){
  if(n1-n2>=n2){
    cont+=1;
    division(n1-n2,n2,cont);
  }
  else{
    cont+=1;
    cout<<cont<<endl;
  }
}