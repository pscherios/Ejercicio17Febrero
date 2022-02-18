#include <iostream>
using namespace std;
class Persona{
	protected:string nombres,apellidos,direccion,nacimiento;
				int telefono;
	protected:
			Persona(){
			}
			Persona(string nom,string ape,string dir,int tel,string nac){
				nombres=nom;
				apellidos=ape;
				direccion=dir;
				telefono=tel;
				nacimiento=nac;
			}
	void mostrar();
};
