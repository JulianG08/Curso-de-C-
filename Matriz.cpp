#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
#define filas 5
#define columnas 5
void crearMatriz(int m[filas][columnas], int fil, int col);
int main()
{
    
}
void crearMatriz(int m[filas][columnas], int fil, int col) {

    for (int i = 0; i < fil; i++)
        {
            for (int j = 0; j < col; j++)
            {
                m[i][j] = rand();
            }
        }
}