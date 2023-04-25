#include <fstream>
#include <conio.h>
#include <string.h>
#include <iostream>
using namespace std;
struct ejemplo{
    char nombre[100];
    int numero;
    float sueldo;
};
void mostrarDatos(string nomArchivo)
{
    fstream archivo;
    ejemplo per;
    archivo.open(nomArchivo,ios::in | ios::binary);
    if (!archivo)
    {
        cout<<"Error al ABRIR\n";
    }
    else{
        while (!archivo.eof()){
            archivo.read((char *) (& per),sizeof(ejemplo));
            if (archivo.eof()) break;
            cout<<"Nombre: "<<per.nombre<<endl;
            cout<<"Codigo: "<<per.numero<<endl;
            cout<<"Sueldo: "<<per.sueldo<<endl;
        }
          }
    archivo.close();
}
void ingresarDatos(string nomArchivo)
{
    fstream archivo;
    ejemplo per;
    int opcion;
    string linea;
    archivo.open(nomArchivo,ios::app | ios::binary);
    if (!archivo)
    {
        cout<<"Error al ABRIR\n";
    }
    else{
        do {
            cout<<"Ingresar Nombre:  "; //Coger toda la linea
            getline(cin>>ws,linea);
            strcpy(per.nombre,linea.c_str());
            cout<<"Ingrese el código:  ";
            cin>>per.numero;
            cout<<"Ingrese el Sueldo:  ";
            cin>>per.sueldo;
            archivo.write((char *) (& per),sizeof(ejemplo));
            cout<<"Ingrese 0 para continuar: ";
            cin>>opcion;
        }while(opcion==0);
    }
    archivo.close();
}
void crearNumeros()
{
    fstream arch;
    arch.open("numeros.dat",ios::out |ios::binary);
    for (int indi=1;indi<=100;indi++)
        arch.write((char *) (&indi),sizeof(int));
    arch.close();
}
int valor(int n)
{   int v;
    fstream arch;
    arch.open("numeros.dat",ios::in|ios::binary);
    arch.seekp(sizeof(int)*n);
    arch.read((char *) (&v),sizeof(int));
    return v;
}
int main()
{
    int n = 49;
    //ingresarDatos("ejemplo.txt");
    //mostrarDatos("ejemplo.txt");
    fstream archivo;
    archivo.open("ejemplo.txt",ios::app | ios::binary);
    cout<<"Posicion:\t"<<archivo.tellg();
    fstream arch;
    //crearNumeros();
    valor(50);
    return 0;
}
