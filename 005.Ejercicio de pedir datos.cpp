/*Realice un programa que lea de la entrada estandar los siguientes datos de una persona:
Edad: Dato de tipo entero
Sexo: Dato de tipo caracter
Altura en metros: Dato de tipo real

Tras leer los datos, el programa debe mostrarlos en la salida estandar*/
#include <iostream>
using namespace std;
int main()
{
	int edad;
	char sexo[10];	//De esta forma el char puede almanecar 10 caracteres
	float altura;
	cout<<"Cual es su edad?: ";
	cin>>edad;
	cout<<"\nCual es su genero?: ";
	cin>>sexo;
	cout<<"\nCual es su altura en metros?: ";
	cin>>altura;
	cout<<"\nSu edad es: "<<edad<<endl;
	cout<<"Su genero es: "<<sexo<<endl;
	cout<<"Su altura es: "<<altura<<endl;
	return 0;
}
