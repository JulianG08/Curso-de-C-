#include <iostream>
using namespace std;
int main()
{
	int opc, saldo_inicial = 1000;
	float extra, saldo, retiro;
	cout<<"\tBienvenido a su Cajero Virtual"<<endl;
	cout<<"1. Ingresar dinero a la cuenta"<<endl;
	cout<<"2. Retirar dinero de la cuenta"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion: "; cin>>opc;
	
	switch (opc)
	{
		case 1:
			cout<<"\nDigite la cantidad de dinero a ingresar: "; cin>>extra;
			saldo = saldo_inicial + extra;
			cout<<"\nDinero en cuenta: "<<saldo; break;
		case 2:
			cout<<"\nDigite la cantidad de dinero que va a retirar: "; cin>>retiro;
			if (retiro > saldo_inicial)
			{
				cout<<"\nSaldo insuficiente"<<endl;
			}
			else
			{
				saldo = saldo_inicial - retiro;
				cout<<"\nDinero en cuenta: "<<saldo<<endl;
			}
		case 3: break;
	}
	return 0;
}
