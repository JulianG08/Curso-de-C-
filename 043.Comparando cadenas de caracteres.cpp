#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
	char palabra1[] = "Hola";
	char palabra2[] = "hola";
	char palabra3[] = "becerro";
	char palabra4[] = "avion";
	if(strcmp(palabra1, palabra2) != 0)
	{
		cout<<"Ambas cadenas son diferentes"<<endl;
	}
	if(strcmp(palabra3, palabra4) > 0)
	{
		cout<<palabra3<<" esta despues alfabeticamente"<<endl;
	}
	getch();
	return 0;
}
