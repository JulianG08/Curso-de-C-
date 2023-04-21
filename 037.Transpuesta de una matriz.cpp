/*Realice un programa que lea una matriz de 3x3 y cree su matriz transpuesta. La matriz
transpuesta es aquella en la que la columna i era la fila i de la matriz original*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int numeros[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; cin>>numeros[i][j];
		}
	}
	cout<<"Matriz original: "<<endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	cout<<"Matriz transpuesta: "<<endl;
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
