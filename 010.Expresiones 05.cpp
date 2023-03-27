/*La calificación final de un estudiante es la media ponderada de tres notas: La nota de
practicas que cuenta un 30% del total, la nota teorica que cuenta un 60% y la nota de
participacion que cuenta el 10% restante. Escriba un programa que lea de la entrada
estandar las tres notas de un alumno y escriba en la salida estandar su nota final*/
#include <iostream>
using namespace std;
int main()
{
	float practica, teorica, participacion, nota_final;
	cout<<"Digite la nota de practica: "; cin>>practica;
	cout<<"Digite la nota teorica: "; cin>>teorica;
	cout<<"Digite la nota de participacion: "; cin>>participacion;
	practica *= 0.3;	//practica = practica * 0.3
	teorica *= 0.6;
	participacion *= 0.1;
	nota_final = practica + teorica + participacion;
	cout<<"\nLa nota final es: "<<nota_final<<endl;
	return 0;
}
