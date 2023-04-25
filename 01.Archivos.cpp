#include<fstream>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    fstream fitch;
    fitch.open("Archivos1.txt", ios::in);
    string ch;
    while(!fitch.eof()) {
        fitch>>ch;
        cout<<ch<<"\t";
    }
    fitch.close();
    return 0;
}
