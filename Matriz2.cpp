#include <stdlib.h>
#include <iostream>
#include <windows.h>
#include <locale.h>
using namespace std;
#define tamano 5
void crearMatriz(int m[tamano][tamano], int fil, int col);
void imprimirMatriz(int m[tamano][tamano], int fil, int col);
void eliminarFilaM(int m[tamano][tamano], int fil, int col);
int main()
{   
    int filaT, columnaT, x;
    filaT = tamano;
    int matrizA[tamano][tamano];
    short opcion;
    crearMatriz(matrizA, filaT, columnaT);
    imprimirMatriz(matrizA, filaT, columnaT);
    setlocale(LC_ALL, "");
    do {
            cout<<"\n\nMENU PRINCIPAL\n\n";
            cout<<"1. Eliminar fila X"<<endl;
            cout<<"2. Eliminar columna Y"<<endl;
            cout<<"3. Insertar fila X"<<endl;
            cout<<"4. Insertar columna Y"<<endl;
            cout<<"12. Salir "<<endl;
            cout<<"\n\nSeleccione la opcion:   ";
            cin>>opcion;
            switch (opcion){
                case 1: cout<<"\nIngrese el valor de la fila: ";
                cin>>x;
                if (x > 0 && x <= filaT){
                    eliminarFilaM(matrizA, filaT, columnaT, x);
                }
                else {
                    cout<<"Valor ingresado incorrecto, debe ser mayor que cero y menor "<<filaT;
                }
            }
    } while (opcion != 12);
    return 0;
}

void crearMatriz(int m[tamano][tamano], int fil, int col) {
    for (int i = 0; i < fil; i++)
        {
            for (int j = 0; j < col; j++)
            {
                m[i][j] = rand() % 1000;
            }
        }
}

void imprimirMatriz(int m[tamano][tamano], int fil, int col) {
    for (int i = 0; i < fil; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout<<"\t"<<m[i][j];
            }
            cout<<"\n";
        }
}

void eliminarFilaM(int m[tamano][tamano], int &fil, int col, int filB) {
    if (fil =- filB) {
        fil = fil - 1;
    }
    else {
        for (int f = filB - 1; f < fil; f++) {
            for (int c = 0; c < col, c++;) {
                m[f][c] = m[f + 1][c];
            }
        }
        fil = fil - 1;
        imprimirMatriz(m, fil, col);
    }
}