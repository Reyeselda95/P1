#include <iostream>
using namespace std;

const int KTAMCAD = 45;
const int KALUMNOS = 30;

//Estructura fecha
typedef struct{
   int dia, mes, anyo;
}TFecha;

//Estructura de los alumnos
typedef struct{
   char nombre [KTAMCAD];
   TFecha fechaNac;
   TFecha fechaIngreso;
   int notaMedia;
}TFichaAlumno;

//Declaración del tipo TAlumnos. Será un array de fichas de alumnos
typedef TFichaAlumno TAlumnos[KALUMNOS];

//Cabecera de las funciones.
void leeAlumnos(TAlumnos alumnos);

//Programa principal
main(){
   //Alumnos será el array de fichas de alumnos
   TAlumnos alumnos;
       
   leeAlumnos(alumnos);
}

//Función que nos permite limpiar el buffer de entrada.
//Lo utilizaremos después de leer un número entero para evitar que quede el retorno de carro en el buffer.
void limpiarBuffer(){
     while(cin.get() != '\n');
}

//Función para leer una fecha
void leeFecha(TFecha &fecha){
     cout << "Introduzca el día: ";
     cin >> fecha.dia;
     cout << "Introduzca el mes: ";
     cin >> fecha.mes;
     cout << "Introduzca el año: ";
     cin >> fecha.anyo;
     limpiarBuffer();
}

//Función para leer la ficha de un alumno.
void leeFichaAlumno(TFichaAlumno &fichaAlumno){
     cout << "Introduzca el nombre del alumno: ";
     cin.getline(fichaAlumno.nombre, KTAMCAD);
     cout << "Introduzca la fecha de nacimiento\n";
     leeFecha(fichaAlumno.fechaNac);
     cout << "Introduzca la fecha de Ingreso\n";
     leeFecha(fichaAlumno.fechaIngreso);
     cout << "Introduzca la nota del alumno: ";
     cin >> fichaAlumno.notaMedia;
     limpiarBuffer();
}

//Función para leer los datos de todos los alumnos
void leeAlumnos(TAlumnos alumnos){
     int i;
     for(i=0; i< KALUMNOS; i++){
        cout << "Introduzca datos del alumno " << i << "\n";
        leeFichaAlumno(alumnos[i]);
     }
} 
