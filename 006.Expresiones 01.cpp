#include <iostream>
using namespace std;
int main()
{
	float a, b, resultado;
	cout<<"Digite el valor de a: "; cin>>a;
	cout<<"Digite el valor de b: "; cin>>b;
	resultado = (a / b) + 1;
	cout.precision(2);	//de esta forma se trabaja con 2 digitos
	cout<<"\nEl resultado es: "<<resultado<<endl;
	return 0;
}
