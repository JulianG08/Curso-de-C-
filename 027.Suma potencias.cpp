//Escriba un programa que calcule el valor de 2^1+2^2+2^3+...+2^n
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
	int suma, potencia, n;
	cout<<"Digite el numero de elementos a sumar: "; cin>>n;
	for (int i = 1; i<=n; i++)
	{
		potencia = pow(2, i);
		suma += potencia;
	}
	cout<<"\nLa suma total es: "<<suma<<endl;
	system("pause");
	return 0;
}
