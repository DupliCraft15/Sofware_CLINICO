#include "Tratamiento.h"
#include "Paciente.h"
#include "Citas.h"
#include "Main.h"
#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include <string>
#include <cctype>
using namespace std;


void pausa();

bool compruebaDia(string dia){

	int aux=stoi(dia);
	if(aux>=1 and aux<=30){
		return true;
	}
	return false;
}

bool compruebaMes(string mes){

	int aux=stoi(mes);
	if(aux>=1 and aux<=12){
		return true;
	}
	return false;
}


bool compruebaAno(string ano){

	int aux=stoi(ano);
	if(aux>=2000 and aux<=3000){
		return true;
	}
	return false;
}

bool esNumero(const string &str)
{
    auto it = str.begin();
    if (*it == '-') { it++; }
    while (it != str.end() && std::isdigit(*it)) ++it;
    return !str.empty() && it == str.end();
}

bool compruebaDNI(string dni){

        if (dni.size() != 9) {
            cout<<"ERROR: DNI no valido"<<endl;
            return false;
        }

        string numeros = dni.substr(0, 8);
        if (!esNumero(numeros)) {
            cout<<"ERROR: DNI no valido"<<endl;
            return false;
        }

        dni[8] = toupper(dni[8]);
        char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
        char letra = letras[stoi(dni) % 23];
        if (dni[8] != letra) {
            cout<<"ERROR: DNI no valido"<<endl;
            return false;
        }
        return true;
}


list <Paciente> leerFicheroPacientes (string ruta) {
	ifstream f(ruta);
	list<Paciente> pacientes;
	string aux;
	if  (f) {
		while(!f.eof()){
			Paciente p;
			getline(f,aux,',');
			p.setDNI(aux);
			getline(f,aux,',');
			p.setNombre(aux);
			getline(f,aux,',');
			p.setApellidos(aux);
			getline(f,aux,',');
			p.setEdad(aux);
			getline(f,aux, '\n');
			p.setDireccion(aux);

			pacientes.push_back(p);
		}
	}
	else {
		cout << "ERROR: No se pudo abrir el archivo " << ruta << endl;
	}

	return pacientes;
}

list <Tratamiento> leerFicheroTratamientos (string ruta) {
	ifstream f(ruta);
	list<Tratamiento> tratamientos;
	string aux;
	if  (f) {
		while(!f.eof()){
			Tratamiento t;
			getline(f,aux,',');
			t.setDNI(aux);
			getline(f,aux,',');
			t.setNombreTratamiento(aux);
			getline(f,aux,',');
			t.setDuracion(aux);
			getline(f,aux, '\n');


			tratamientos.push_back(t);
		}
	}
	else {
		cout << "ERROR: No se pudo abrir el archivo " << ruta << endl;
	}

	return tratamientos;
}

list <Cita> leerFicheroCitas (string ruta) {
	ifstream f(ruta);
	list<Cita> citas;
	string aux;
	if  (f) {
		while(!f.eof()){
			Cita c;
			getline(f,aux,',');
			c.setDNI(aux);

			getline(f,aux,',');
			c.setTime(aux);

			getline(f,aux,',');
			c.setDay(aux);

			getline(f,aux,',');
			c.setMonth(aux);

			getline(f,aux, ',');
			c.setYear(aux);

			getline(f,aux, '\n');
			c.setMotivo(aux);

			citas.push_back(c);
		}
	}
	else {
		cout << "ERROR: No se pudo abrir el archivo " << ruta << endl;
	}

	return citas;
}



void Calendario(list <Cita> &citas_)
{

	cout << "Tus citas son: \t" << endl;
	bool comprobar=true;
	list <Cita>::iterator i;

	citas_.clear();
	citas_=leerFicheroCitas("citas.txt");


	for( i=citas_.begin(); i!=citas_.end(); i++)
	{
		
		if(i->getDNI()=="" and i->getDay()=="" and i->getMonth()=="" and i->getYear()=="" and i->getTime()=="")
		{
			comprobar=false;
			cout<<"No hay citas en la base de datos"<<endl;
		}

		if(comprobar==true)
		{

			cout<<""<<endl;
	        cout<<"_____________________________"<<endl;
		    cout<<"DNI: "<<i->getDNI()<<endl;
		    cout<<i->getDay()<<"/"<<i->getMonth()<<"/"<<i->getYear()<<endl;
		    cout<<"Hora: "<<i->getTime()<<endl;
		    cout<<"Con motivo: "<<i->getMotivo()<<endl;
		}
	}
	cout<<"Pulsa una tecla para salir"<<endl;
	cin.ignore();
	cin.get();
}


int main()
{
	

	bool bandera=false;

	char tecla;

	list <Paciente> pacientes_  = leerFicheroPacientes("pacientes.txt");
	list <Cita> citas_=leerFicheroCitas("citas.txt");
	list <Tratamiento> tratamientos_=leerFicheroTratamientos("tratamientos.txt");

	//Inicializar las listas
	//Llamar a funciones que lean los ficheros


	do

    {
    	system("clear");
        cin.clear();
        cout << "----------------------------------" << endl;
        cout << "             CLINICA              " << endl;
        cout << "----------------------------------" << endl << endl;

        cout << "\t1 .- Opciones acerca del paciente" << endl;

        cout << "\t2 .- Opciones acerca de los tratamientos" << endl;

        cout << "\t3 .- Opciones acerca de las citas" << endl;

        cout << "\t4 .- Calendario" << endl;

        cout << "\t5 .- Cerrar programa" << endl << endl;

        cout << "Elije una opcion: ";



        cin >> tecla;
         system("clear");



		switch(tecla)

		{

			case '1':

				OpcionesPaciente(pacientes_);

			break;

			case '2':

				OpcionesTratamiento(tratamientos_);

			break;

			case '3':

				OpcionesCita(citas_);

			break;

			case '4':


				Calendario(citas_);

			break;

			case '5':

				bandera=true;

				exit(1);

				break;

			default:

				cout << "Opcion no valida" << endl;

				break;

		}

    }while(bandera!=true);
    return 0;

};
