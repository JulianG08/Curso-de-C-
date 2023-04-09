/*Realice un programa que solicite de la entrada estandar un entero del 1 al 10 y muestre
en la salida estandar su tabla de multiplicar*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int num;
	do{
	
		cout<<"Por favor ingrese un numero entre 1 y 10: "; cin>>num;
	}while ((num < 1) || (num > 10));
	cout<<"La tabla de multiplicar del numero "<<num<<" es: "<<endl;
	for (int i = 1; i <= 10; i++)
	{
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}
	system("pause");
	return 0;
}
