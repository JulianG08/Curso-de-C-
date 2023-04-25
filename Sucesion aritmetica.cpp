#include <iostream>
#include<fstream>
#include<string>
using namespace std;
void generarSucesion()
{
    int n, suma = 3;
    string sucesion;
    fstream archSucesion;
    archSucesion.open("sucesion3.txt", ios::app);
    if (!archSucesion)
    {
        cout<<"Error al abrir el archivo";
    }else
    {
        cout<<"Cuantos numeros desea mostrar?: "; cin>>n;
        for (int i = 0; i <= n - 1; i++)
        {
            archSucesion<<suma<<"\t";
            suma += 3;
        }
        archSucesion.close();
    }
}
int main()
{
    generarSucesion();
    return 0;
}
