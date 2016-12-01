#include <iostream>
using namespace std;

const KFIL = 4;
const KCOL = 5;

int Matriz [KFIL][KCOL];

void sustituye(int Matriz[KFIL][KCOL]){
     int i, j, k, l;
     int mayor;
     
     for (i=0; i<KFIL; i++){
        for (j=0; j<KCOL; j++){
           if (Matriz[i][j]==0){
              mayor=0;
              for (k=i-1; k<=i+1; k++){
                 for (l=j-1; l<=j+1, l++){
                     if(k>=0 && k<KFIL && l>=0 && l< KCOL)
                     {
                       if(mayor<Matriz[k][l])
                         mayor=Matriz[k][l]; 
                     }
                 }
              }
              Matriz[i][j]=mayor;
           }
        }
     }
}     

main(){
  int Matriz[KFIL][KCOL];
  int i, j;
  
  for(i=0; i<KFIL; i++){
           for(j=0; j<KCOL; j++){
                    cout << "Introduce el elemento(" << i << "," << j << "): ";
                    cin >> Matriz[i][j];
           }
  }
  sustituye(Matriz[i][j]);
}
                    
