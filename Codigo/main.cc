#include "Tratamiento.h"
#include "Paciente.h"
#include "Citas.h"
#include "Main.h"
#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include <string>
using namespace std;


void pausa();

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

list <Cita> leerFicheroCitas (string ruta) {
	ifstream f(ruta);
	list<Cita> citas;
	string aux;
	if  (f) {
		while(!f.eof()){
			Cita c;
			getline(f,aux,',');
			c.setTime(stoi(aux));
			getline(f,aux,',');
			c.setDay(stoi(aux));
			getline(f,aux,',');
			c.setMonth(stoi(aux));
			getline(f,aux,',');
			c.setYear(stoi(aux));
			getline(f,aux, ',');
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
	int contador = 0;

	for(auto i=citas_.begin(); i!=citas_.end(); i++)
	{
		cout << "El paciente "<< (*i).getDNI() <<" tiene como hora " << (*i).getTime() << " dia "<< (*i).getDay() << " mes " << (*i).getMonth() <<" año " << (*i).getYear() <<" y motivo: " << (*i).getMotivo() << endl;
	}

	cout << "Ya no hay mas citas programada \n" << endl;

	sleep(3);
}


int main()
{

	bool bandera=false;

	char tecla;

	list <Paciente> pacientes_  = leerFicheroPacientes("pacientes.txt");
	list <Cita> citas_;

	//Inicializar las listas
	//Llamar a funciones que lean los ficheros


	do

    {
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



		switch(tecla)

		{

			case '1':

				OpcionesPaciente(pacientes_);

			break;

			case '2':

				OpcionesTratamiento(pacientes_);

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
