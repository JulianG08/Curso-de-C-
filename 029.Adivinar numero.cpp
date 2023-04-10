/*Realice un programa que solicite al usuario que piense un numero entero entre el 1 y el
100. El ptrograma debe generar un numero aleatorio en ese mismo rango [1-100], e indicarle
al usuario si el numero que digito es menor o mayor al numero aleatorio, así hasta que lo
adivine y por ultimo mostrarle el numero de intentos que le llevo*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	int num, dato, intentos;
	srand(time(NULL));	//Generar numero aleatorio
	dato = 1 + rand() % (100);
	do
	{
		cout<<"Digite un numero: "; cin>>num;
		if (num > dato)
		{
			cout<<"\nDigite un numero menor"<<endl;
		}
		if (num < dato)
		{
			cout<<"\nDigite un numero mayor"<<endl;
		}
		intentos++;
	}while (num != dato);
	cout<<"\nFELICIDADES ADIVINASTE EL NUMERO"<<endl;
	cout<<"Numero de intentos: "<<intentos<<endl;
	system("pause");
	return 0;
}
