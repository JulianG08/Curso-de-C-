#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int matriz[100][100], nFilas, nColumnas;
	cout<<"Cuantas filas va a tener su matriz?: "; cin>>nFilas;
	cout<<"\nCuantas columnas va a tener su matriz?: "; cin>>nColumnas;
	for (int i = 0; i < nFilas; i++)
	{
		for (int j = 0; j < nColumnas; j++)
		{
			cout<<"\nIngrese un numero para la posicion "<<"["<<i<<"]"<<"["<<j<<"]: "; cin>>matriz[i][j];
		}
	}
	for (int i = 0; i < nFilas; i++)
	{
		for (int j = 0; j < nColumnas; j++)
		{
			if (i == j)
			{
				cout<<matriz[i][j];
			}else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
