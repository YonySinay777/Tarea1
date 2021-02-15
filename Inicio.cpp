#include "Datos_Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string puesto,sueldo;
	int codigo_empleado;
	
	cout<<"Ingrese codigo de empleado: " ;
	cin>>codigo_empleado;
	cout<<"Ingrese puesto: ";
	cin>>puesto;
	cout<<"Ingrese sueldo: ";
	cin>>sueldo;
	
	Datos_Empleado obj = Datos_Empleado(codigo_empleado, puesto, sueldo);
	obj.mostrar();	
	
	
}
