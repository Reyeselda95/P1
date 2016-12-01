//ALEJANDRO REYES ALBILLAR 45931406-S
#include <iostream>
using namespace std;

void pideFecha(int &dia, int&mes, int&anyo);
int sumaFecha (int dia, int mes, int anyo);
void muestra(int res);

//El módulo pide la fecha al usuario
void pideFecha(int &dia, int&mes, int&anyo){
  //Esta parte pide el dia
  do{
    cout << "Introduce el día en que naciste: ";
    cin >> dia;
  }while(dia<1 || dia>31);
  do{
    cout << "Introduce el mes en que naciste: ";
    cin >> mes;
  }while(mes<1 || mes>12);
  do{
    cout << "Introduce el año en que naciste: ";
    cin >> anyo;
  }while(anyo<1900);
  if(mes==2 && dia>28){
    do{
      cout << "Introduce nuevamente el día en que naciste, parece que te has equivocado: ";
      cin >> dia;
    }while(dia<1 || dia>28);
  }
}

//Este módulo suma los digitos de la fecha y devuelve el resto de la divisiñon entre 3
int sumaFecha (int dia, int mes, int anyo){
  int suma, res, n1dia, n2dia, n1mes, n2mes, n1anyo, n2anyo, n3anyo, n4anyo;
  //Esta parte extrae cada número del dia para sumarlo luego
  if(dia<10)
    n1dia=dia;
  else if(dia>=10){
    n1dia=dia/10;
    n2dia=dia%10;
  }
  //Esta parte extrae cada número del mes para sumarlo luego
  if(mes<10)
    n1mes=mes;
  else if(mes>=10){
    n1mes=mes/10;
    n2mes=mes%10;
  }
  //Esta parte extrae cada número del año para sumarlo luego
  if(anyo>1999)
    n1anyo=2;
  else if(anyo<1999)
    n1anyo=1;
  if(n1anyo==1)
    n2anyo=9;
  else if(n1anyo==2)
    n2anyo=((anyo-2000)/10)/10;
  if(anyo>=1900 && anyo<2000)
    n3anyo=(anyo-1900)/10;
  else if(anyo>=2000)
    n3anyo=(anyo-2000-(n2anyo*100))/10;
  n4anyo=anyo-(n1anyo*1000)-(n2anyo*100)-(n3anyo*10);
  //Aqui se suman los números y se extrae el resto de la suma entre 3
  suma=n1dia+n2dia+n1mes+n2mes+n1anyo+n2anyo+n3anyo+n4anyo;
  res=suma%3;
  return(res);
}

//Este módulo muestra el mensaje correspondiente
void muestra(int res){
  switch(res){
    case 0:
      cout << "Tu color es el violeta." << endl;
      break;
    case 1:
      cout << "Tu color es el rojo." << endl;
      break;
    case 2:
      cout << "Tu color es el azul." << endl;
      break;
    case 3:
      cout << "Tu color es el amarillo." << endl;
      break;
  }
}

//Aqui se llama al main
int main(){
  int dia, mes, anyo, res, vi, ro, az, am;
  char cont;
  vi=0;
  ro=0;
  az=0;
  am=0;
  
  do{
    pideFecha(dia, mes, anyo);
    res=sumaFecha(dia, mes, anyo);
    muestra(res);
    if(res==0)
      vi++;
    else if(res==1)
      ro++;
    else if(res==2)
      az++;
    else if(res==3)
      am++;
    cout << " ¿Deseas continuar? (s/n)";
    cin >> cont;
  }while(cont=='s');
  if (vi>ro && vi>az && vi>am)
    cout << "El color que más se repite es el violeta." << endl;
  else if (ro>vi && ro>az && ro>am)
    cout << "El color que más se repite es el rojo." << endl;
  else if (az>vi && az>ro && az>am)
    cout << "El color que más se repite es el azul." << endl;
  else if (am>vi && am>ro && am>az)
    cout << "El color que más se repite es el amarillo." << endl;  
  //Desde aqui es cuando hay más de uno igual
  else if (ro==vi && ro==az && ro==am)
    cout << "Los colores se repiten por igual." << endl;
  else if (ro==vi && ro==az && ro>am)
    cout << "Los colores que más se repiten son el rojo, el azul y el violeta." << endl;
  else if (ro=vi && ro==am && ro>az)
    cout << "Los colores que más se repiten son el rojo, el amarillo y el violeta." << endl;
  else if (ro>vi && ro==am && ro==az)
    cout << "Los colores que más se repiten son el rojo, el amarillo y el azul." << endl;
  else if (ro>vi && ro==az && ro>am)
    cout << "Los colores que más se repiten son el rojo y el azul." << endl;
  else if (ro==vi && ro>az && ro>am)
    cout << "Los colores que más se repiten son el rojo y el violeta." << endl;
  else if (ro>vi && ro>az && ro==am)
    cout << "Los colores que más se repiten son el rojo y el amarillo." << endl;
  else if (vi>ro && vi==az && vi>am)
    cout << "Los colores que más se repiten son el violeta y el azul." << endl;
  else if (vi>ro && vi==az && vi==am)
    cout << "Los colores que más se repiten son el violeta, el amarillo y el azul." << endl;
  else if (vi==ro && vi==az && vi>am)
    cout << "Los colores que más se repiten son el violeta, el rojo y el azul." << endl;
  else if (vi==ro && vi>az && vi==am)
    cout << "Los colores que más se repiten son el violeta, el rojo y el amarillo." << endl;
  else if (vi>ro && vi>az && vi==am)
    cout << "Los colores que más se repiten son el violeta y el amarillo." << endl;
  else if (az>vi && az>ro && az==am)
    cout << "Los colores que más se repiten son el azul y el amarillo." << endl;
  else if (az>vi && az>ro && az>am)
    cout << "Los colores que más se repiten son el azul y el amarillo." << endl;
  else if (az>vi && az>ro && az==am)
    cout << "Los colores que más se repiten son el azul y el amarillo." << endl;
  
 
}