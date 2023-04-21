#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int matriz1[3][3];
	int matriz2[3][3];
	int matriz3[3][3];
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; cin>>matriz1[i][j];
		}
	}
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; cin>>matriz2[i][j];
		}
	}
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
		}
	}
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout<<matriz3[i][j]<<" ";
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
