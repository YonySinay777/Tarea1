//main
#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	// instanciar
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	
}
