
#include <iostream>
using namespace std;
int main() {

int ventas=0;//ventas que voy a ingresar
float N;//valor de las ventas
int a=0;//menores o iguales a 500
int b=0;//mayores a 500 y menores o iguales a 1000 
int c=0;//mayores a 1000

float sumaTotal=0;
float sumaA=0;
float sumaB=0;
float sumaC=0;

int numVentas=0;
int opcion=0;
  
cout<<"Ingrese el numero de ventas que desea ingresar:";
cin>>ventas;
cout<<"\n\tINGRESO DE DATOS\n"<<endl;

//Uso la sentencia FOR para la repeticion hasta que cumpla que i es igual a ventas
for(int i=1;i<=ventas;i++){

cout<<"Ingrese el valor de la venta "<<i<<": ";
cin>>N;
sumaTotal=sumaTotal+N; //contador para sumar el monto total

if(N<=1000){
if(N<=500){
a++;
sumaA=sumaA+N; //contador para sumar las ventas menores o iguales a 500
}else if(N>500 && N<=1000){
b++;
sumaB=sumaB+N;//contador apra sumar todas las ventas mayores a 500 y menores o iguales a 1000
}
}else{
c++;
sumaC=sumaC+N; //contador para sumar las ventas mayores a 1000 
}

}

cout<<"\n\tRESULTADOS DATOS INGRESADOS\n"<<endl;

cout<<"Numero de ventas totales = "<<ventas<<endl;
cout<<"Monto de todas las ventas= "<<sumaTotal<<"$"<<endl;

cout<<"\nventas menores o iguales a 500 = "<<a<<endl;
cout<<"Monto de todas las ventas menores o iguales a 500= "<<sumaA<<"$"<<endl;

cout<<"\nventas mayores a 500 y menores o iguales a 1000 = "<<b<<endl;
cout<<"Monto de todas las ventas mayores a 500 y menores o iguales a 1000 = "<<sumaB<<"$"<<endl;

cout<<"\nventas mayores a 1000 = "<<c<<endl;
cout<<"Monto de todas las ventas mayores a 1000  = "<<sumaC<<"$"<<endl;

return 0;
}
