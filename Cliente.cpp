#include "Persona.cpp"
#include <iostream>
using namespace std;
class Cliente:Persona{
	//declarando atributos
	private:string nit,cui;
	//constructores
	public:cliente(){
	}
	Cliente(string nom, string ape, string dir,int tel,string nac,string n,string cu):Persona(nom,ape,dir,tel,nac){
		nit=n;
	}
	//metodos
	//set(modificar) y get(mostrar)
	void setNit(string n){nit=n;}
	void setNombres(string nom){nombres=nom;}
	void setApellidos(string ape){apellidos=ape;}
	void setDireccion(string dir){direccion=dir;}
	void setTelefono(int tel){telefono=tel;}
	void setNacimiento(string nac){nacimiento=nac;}
	void setCUI(string cu){cui=cu;}
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getNacimiento(){return nacimiento;}
	string getCUI(){return cui;}
	int getTelefono(){return telefono;}
	void mostrar(){
		cout<<"_________________"<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<nacimiento<<","<<cui<<endl;
		
	}
};
