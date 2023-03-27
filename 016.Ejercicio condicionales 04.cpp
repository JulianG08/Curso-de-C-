#include <iostream>
using namespace std;
int main()
{
	int edad;
	cout<<"Digite su edad: "; cin>>edad;
	
	if ((edad >= 18) && (edad <= 25))
	{
		cout<<"\nSu edad esta en el rango de 18 a 25"<<endl;
	}
	else
	{
		cout<<"\nSu edad no esta en el rango especificado"<<endl;
	}
	return 0;
}
