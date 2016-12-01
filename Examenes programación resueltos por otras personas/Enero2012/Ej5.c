//________________________________________________a________________________________________________

const MAXnombre=15;
const MAXrecomendadas=5;
const MAXcoordinadas=3;
const MAXasignaturas=45;
const MAXprofesores=60;

typedef char Tnombre[MAXnombre];
typedef int Trecomendadas[MAXrecomendadas];
typedef int Tcoordinadas[MAXcoordinadas];

typedef struct{
  int codigo_asignatura;
  Tnombre nombre_asignatura;
  int cuatrimestre;
  char tipo;					//b(básica), o(obligatoria), x(optativa). 
  int curso;
  int coordinador;
  Trecomendadas recomendadas;
}Tasignaturas;

typedef struct{
  int codigo_profesor;
  Tnombre nombre_profesor;
  Tcoordinadas coordinadas;
}Tprofesor;

typedef Tasignaturas Tcatalogo[MAXasignaturas];
typedef Tprofesor Tprofesorado[MAXprofesores];

//________________________________________________a________________________________________________




//________________________________________________b________________________________________________

void mostrar(Tcatalogo catalogo, int posicion_asignatura){
  
  int i=0;
  
  while(i<posicion_asignatura){
    if(catalogo[i].cuatrimestre==1 && catalogo[i].tipo=='o') cout<<catalogo[i].nombre_asignatura <<" ----- " <<catalogo[i].codigo_asignatura <<endl;
    else i++
  }
}

//________________________________________________b________________________________________________




//________________________________________________c________________________________________________

void coordina(Tcatalogo catalogo, Tprofesorado profesorado, int posicion_asignatura, int posicion_profesor){
  
  int cod, i=0, j, condicion=0, a, b, c;
  
  cout<<"Introduce el código de la asignatura: ";
  cin>>cod;
  cout<<"El profesor que coordina esta asignatura coordina: "<<endl;

  while(i<posicion_asignatura && condicion==0){							//Primero encuentro el código del coordinador.
    if(catalogo[i].codigo_asignatura==cod){
      cod=catalogo[i].coordinador;
      condicion++;
    }
    else i++;
  }
  
  i=0;
  condicion=0;
  
  while(i<posicion_profesor && condicion==0){							//Lugeo encuentro el código de las asignaturas que coordina y las guardo(a, b y c).
    if(profesorado[i].codigo_profesor==cod){
      a=profesorado[i].coordinadas[1];
      b=profesorado[i].coordinadas[2];
      c=profesorado[i].coordinadas[3];
      condicion++;
    }
    else i++;
  }
  
  i=0;
  condicion=0;
  
  while(i<posicion_asignatura && condicion<3){							//Por último, muestro el nombre de esas asignaturas.
    
    if(catalogo[i].codigo_asignatura==a){
      cout<<catalogo[i].nombre_asignatura<<endl;
      condicion++;
      i++;
    }
    
    if(catalogo[i].codigo_asignatura==b){
      cout<<catalogo[i].nombre_asignatura<<endl;
      condicion++;
      i++;
    }
    
    if(catalogo[i].codigo_asignatura==c){
      cout<<catalogo[i].nombre_asignatura<<endl;
      condicion++;
      i++;
    }
    
    else i++;
  }
}

//________________________________________________c________________________________________________
