#include <fstream>
#include <string>
#include <iostream>
struct tfecha{
        int dia,mes,year;
    };

    struct tnotas{
        float notase;
        float notapar;
        float notafi;
    };

    struct testudiantes{
        string nombre;
        string apellido;
        tfecha fecha;
        tnotas notas;
    } ;

using namespace std;

void ingresardatos(){
    string info;
    fstream fich;
    fich.open("estudiantes.txt", ios::out);
    if(!fich){
        cout << "Error al iniciar EJEMPLOS2.txt ";
    } else {
        cout << "Nombre: " << endl;
        getline(cin, testudiantes.nombre);
        cout<<""
        fich << info << endl;

        fich.close();
    }
}

void mostrardatos(){
    string estudiantes;
    ifstream fich;
    fich.open("EJEMPLOS2.txt", ios::in);
    if(!fich){
        cout << "Error al iniciar EJEMPLOS2.txt ";
    } else {
        string linea;
        while(getline(fich, linea)){
            cout << linea << endl;
        }
        fich.close();
    }
}

int main(){

    ingresardatos();
    mostrardatos();
    return 0;
}
