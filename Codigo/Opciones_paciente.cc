#include "Paciente.h"
#include "Tratamiento.h"
#include "Main.h"
#include <unistd.h>

using namespace std;

void OpcionesPaciente(){


	bool bandera=false;


	char tecla;

		do
			{
				system("clear");
		        cin.clear();
		        cout << "----------------------------------" << endl << endl;

		        cout << "OPCIONES ACERCA DEL PACIENTE______" << endl;

		        cout << "----------------------------------" << endl << endl;

		        cout << "\t1 .- Añadir nuevo paciente" << endl;

		        cout << "\t2 .- Realizar búsqueda de un paciente" << endl;

		        cout << "\t3 .- Modificar datos de un paciente" << endl;

		        cout << "\t4 .- Borrar datos de un paciente" << endl;

		        cout << "\t5 .- Volver al menú principal" << endl;


		        cout << "Elije una opcion: ";

			cin >> tecla;
			switch(tecla)

			{

				case '1':
						AnadirPaciente();

						if(AnadirPaciente()==true){
							cout<<"Paciente guardado con exito"<<endl;
						}
						else{
							cout<< "El paciente introducido ya existente"
						}

						break;



					case '2':

						BuscarPaciente();
						Mostrarpaciente();

						break;



					case '3':

						//ModificarPaciente();

						break;



					case '4':

						//BorrarPaciente();


						break;

					case '5':

						bandera=true;
						break;

					default:

						cout << "Opcion no valida.(Espere 3 segundos hasta que se cierre la ventana)\a\n";

						sleep(3);

						break;

				}

		    }while(bandera!=true);


}




bool Paciente::AnadirPaciente(){

	string dni,nombre,apellidos,direccion;
	int edad;

	cout << "A continuación introduzca los datos del paciente a añadir: "<< endl;
	cout << "DNI: "; cin >> dni; cout <<"\t";
	cout << "Nombre: "; cin >> nombre; cout <<"\t";
	cout << "Apellidos: "; cin >> apellidos; cout <<"\t";
	cout << "Edad: "; cin >> edad; cout <<"\t";
	cout << "Direcccion: "; cin >> direccion; cout <<"\t";


	Paciente p(dni,nombre,apellidos,edad,direccion);


	list<Pacientes>:: iterator i;
	for(i=pacientes_.begin(); i!=pacientes_.end(); i++)
	{

		if((*i).getDNI() == p.getDNI())
			return false;
	}

	pacientes_.push_back(p);
	string nombrefichero="JUGADORES.txt";
	fstream fichero(nombrefichero.c_str(), ios::in);
	if(!fichero)
	{
			fichero.close();
			fichero.open(nombrefichero.c_str(), ios::out);
			fichero.close();
			return true;
		}
	else
		{
			fichero.close();
		}
}


void Paciente::BuscarPaciente()
{
	string dni;
	cout << "Introduzca el DNI del paciente a buscar: "<< endl;
	cout << "DNI: "; cin >> dni; cout <<"\t";
	list<Pacientes>:: iterator i;

	for(i=pacientes_.begin(); i!=pacientes_.end(); i++)
	{

		if((*i).getDNI() == dni)
		{
			cout<<(i*).getDNI()<<endl;
			cout<<(i*).getNombre()<<endl;
			cout<<(i*).getApellidos()<<endl;
			cout<<(i*).getEdad()<<endl;
			cout<<(i*).getDireccion()<<endl;

		}
		else{cout<<"Paciente no encontrado";}
}










