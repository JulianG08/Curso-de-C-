#include<fstream>
#include<string>
#include<iostream>
using namespace std;
void mostrarDatos()
{
    string estudiantes;
    fstream archEstudiantes;
    archEstudiantes.open("ejemplo1.txt", ios::in);
    if (!archEstudiantes)
    {
        cout<<"Error al abrir ejemplo1.txt"<<endl;
    }else
    {
        while (!archEstudiantes.eof())
        {
            archEstudiantes>>estudiantes;
            cout<<estudiantes<<"\n";
        }
        archEstudiantes.close();
    }
}
void escribirDatos()
{

    string estudiantes;
    fstream archEstudiantes;
    archEstudiantes.open("ejemplo1.txt", ios::app);
    if (!archEstudiantes)
    {
        cout<<"Error al abrir ejemplo1.txt"<<endl;
    }
    else
    {
        cout<<"Ingrese un nuevo dato: "<<endl;
        getline(cin, info);
        archEstudiantes.close();
    }
}
int main()
{
    escribirDatos();
    mostrarDatos();
    return 0;
}
