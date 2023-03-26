/*Escribe un programa que lea de la entrada entandar dos numeros y muestre en la salida
estandar su suma, resta, multiplicacion y division*/
#include <iostream>
using namespace std;
int main()
{
	int num01, num02, suma, resta, multiplicacion, division;
	cout<<"Ingrese un numero entero: ";
	cin>>num01;
	cout<<"\nIngrese un segundo numero entero: ";
	cin>>num02;
	suma = num01 + num02;
	resta = num01 - num02;
	multiplicacion = num01 * num02;
	division = num01 / num02;
	cout<<"\nLa suma de los dos numeros es: "<<suma<<endl;
	cout<<"La resta de los dos numeros es: "<<resta<<endl;
	cout<<"La multiplicacion de los dos numeros es: "<<multiplicacion<<endl;
	cout<<"La division de los dos numeros es: "<<division<<endl;
	return 0;
}
