/*Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. La
estructura debe tener tres campos: horas, minutos y segundos. Escriba un programa que dado
n etapas calcula el tiempo total empleado en correr todas las etapas*/
#include <iostream>
#include <conio.h>
using namespace std;

struct Etapas
{
	int horas, minutos, segundos;
}et[100];

int main()
{
	int n_etapas, horasT = 0, minutosT = 0, segundosT = 0;
	cout<<"Digite el numero de etapas: "; cin>>n_etapas;
	for(int i = 0; i < n_etapas; i++)
	{
		cout<<"Horas: "; cin>>et[i].horas;
		cout<<"Minuetos: "; cin>>et[i].minutos;
		cout<<"Segundos: "; cin>>et[i].segundos;
		horasT += et[i].horas;
		minutosT += et[i].minutos;
		if(minutosT >= 60)
		{
			minutosT -= 60;
			horasT++;
		}
		segundosT += et[i].segundos;
		if(segundosT >= 60)
		{
			segundosT -= 60;
			minutosT++;
		}
		cout<<"\n";
	}
	cout<<"\nTiempo total empleado"<<endl;
	cout<<"Horas: "<<horasT<<endl;
	cout<<"Minutos: "<<minutosT<<endl;
	cout<<"Segundos: "<<segundosT<<endl;
	getch();
	return 0;
}
