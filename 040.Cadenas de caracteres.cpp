#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
	char palabra[] = "Julian";
	char palabra2[] = {'J','u','l','i','a','n'};
	char nombre[30];
	cout<<"Digite su nombre: ";
	cin.getline(nombre,20,'\n');
	cout<<nombre<<endl;
	getch();
	return 0;
}
