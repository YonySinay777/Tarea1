#include "Empleado.cpp"
#include <iostream>

using namespace std;
class Datos_Empleado : Empleado{
	
	public:
	 
		Datos_Empleado(){
		}
		Datos_Empleado(int codE, string pue, string sue) : Empleado(sue,pue,codE){
		}
		
	void setCodEmpleado(int codE){codigo_empleado = codE;}
	void setPuesto(string pue){puesto = pue;}
	void setSueldo(string sue){sueldo = sue;}


	int getoCodEmpleado(){return codigo_empleado;}
	string getPuesto(){return puesto;}
	string getSueldo(){return sueldo;}
	
	void mostrar(){

		cout<<"__________________"<<endl;
		cout<<"Codigo de empleado: "<<codigo_empleado<<"\n puesto: "<<puesto<<"\n Sueldo: "<<sueldo<<endl;
		}
};

