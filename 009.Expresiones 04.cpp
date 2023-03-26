//Intercambiar los valores de 2 variables
#include <iostream>
using namespace std;
int main()
{
	int x, y, aux;
	cout<<"Ingrese el valor de x: "; cin>>x;
	cout<<"Ingrese el valor de y: "; cin>>y;
	aux = x;
	x = y;
	y = aux;
	cout<<x<<endl;
	cout<<y<<endl;
	return 0;
}
