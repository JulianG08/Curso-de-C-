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
void mostrarDatos(string nombreAr2){
    fstream archivo;
    ejemplo per;
    cout<<"Escriba el nombre del archivo: ";
    getline(cin,nombreAr2);
    archivo.open(nombreAr2, ios::in | ios::binary);
    archivo.read((char *)(&per),sizeof(ejemplo));
    cout<<"\nNombre:\t"<<per.nombre;
    cout<<"\nCodigo:\t"<<per.numero;
    cout<<"\nSueldo:\t"<<per.sueldo;
    archivo.close();
}

void ingresarDatos(string nombreAr){
    int opcion;
    fstream archivo;
    string aux;
    ejemplo per;
    cout<<"Escriba el nombre del archivo: ";
    getline(cin,nombreAr);
    archivo.open(nombreAr, ios::app | ios::binary);
    if (!archivo)
    {
        cout<<"Error al abrir\n";
    }
    else{
        do{
            cout<<"Ingresar Nombre: ";
            getline(cin>>ws,aux);
            strcpy(per.nombre,aux.c_str());
            cout<<"Ingresar el codigo: ";
            cin>>per.numero;
            cout<<"Ingresar el sueldo: ";
            cin>>per.sueldo;
            archivo.write((char *)(& per),sizeof(ejemplo));
            cout<<"Ingrese 0 para continuar: ";
            cin>>opcion;
        }while(opcion==0);
    }
    archivo.close();
}
int main()
{
    ejemplo per;
    ingresarDatos("ejemplo.txt");
    mostrarDatos("ejemplo.txt");
    getch();
    return 0;
}
