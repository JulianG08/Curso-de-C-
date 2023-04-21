/*Desarrollar un programa que determine si una matriz es simetrica o no. Una matriz es
simetrica si es cuadrada y si es igual a su matriz transpuesta*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int numero[100][100], filas, columnas;
	char band = 'F';
	cout<<"Digite el numero de filas: "; cin>>filas;
	cout<<"\nDigite el numero de columnas: "; cin>>columnas;
	for(int i = 0; i < filas; i++)
	{
		for(int j = 0; j < columnas; j++)
		{
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; cin>>numero[i][j];
		}
	}
	if (filas == columnas)
	{
		for (int i = 0; i < filas; i++)
		{
			for (int j = 0; j < columnas; j++)
			{
				if (numero[i][j] == numero[j][i])
				{
					band = 'V';
				}
			}
		}
	}
	if (band == 'V')
	{
		cout<<"\nLa matriz es simetrica"<<endl;
	}
	else
	{
		cout<<"La matriz no es simetrica"<<endl;
	}
	getch();
	return 0;
}
