#include "Paciente.h"
#include "Tratamiento.h"
#include "Main.h"
#include <unistd.h>
#include <fstream>
#include <string>
using namespace std;

void OpcionesPaciente(list <Paciente> &pacientes_){


	bool bandera=false;

	ifstream fe("Pacientes.txt");
    if (!fe){ofstream ofs("Pacientes.txt");}

	char tecla;

		do
			{
				system("clear");
				cin.clear();
				cout << "----------------------------------" << endl << endl;
				cout << "OPCIONES ACERCA DEL PACIENTE______" << endl;
		        cout << "----------------------------------" << endl << endl;

		        cout << "\t1 .- Añadir nuevo paciente" << endl;

		        cout << "\t2 .- Mostrar datos paciente" << endl;

		        cout << "\t3 .- Modificar datos de un paciente" << endl;

		        cout << "\t4 .- Borrar datos de un paciente" << endl;

		        cout << "\t5 .- Volver al menú principal" << endl;

		        cout << "Elije una opcion: ";

		    cin >> tecla;

		    switch(tecla)

			{

				case '1':
						AnadirPaciente(pacientes_);

						if(AnadirPaciente(pacientes_)==true){
							cout<<"Paciente guardado con exito"<<endl;
						}
						else{
							cout<< "El paciente introducido ya existente"<<endl;
						}

						break;



				case '2':

					BuscarPaciente(pacientes_);

				break;

				case '3':

					ModificarPaciente(pacientes_);


				break;



				case '4':

					BorrarPaciente(pacientes_);


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

bool AnadirPaciente(list <Paciente> &pacientes_){

	string dni,nombre,apellidos,direccion;
	int edad;

	cout << "A continuación introduzca los datos del paciente a añadir: (ATENCIÓN el DNI del paciente no se podrá modificar en caso de introducirlo incorrectamente)"<< endl;
	cout <<"\t";
	cout << "DNI: "; cin >> dni; cout <<"\t";
	cout << "Nombre: "; cin >> nombre; cout <<"\t";
	cout << "Apellidos: "; cin >> apellidos; cout <<"\t";
	cout << "Edad: "; cin >> edad; cout <<"\t";
	cout << "Direcccion: "; cin >> direccion; cout <<"\t";

	Paciente p(dni,nombre,apellidos,edad,direccion);

	list<Paciente>:: iterator i;

	for(i=pacientes_.begin(); i!=pacientes_.end(); i++)
	{
			if((*i).getDNI() == p.getDNI())
			return false;
	}

	pacientes_.push_back(p);
	string nombrefichero="pacientes.txt";
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


void BuscarPaciente(list <Paciente> &pacientes_)
{
	string dni;
	cout << "Introduzca el DNI del paciente a buscar: "<< endl;
	cout << "DNI: "; cin >> dni; cout <<"\t";
	list<Paciente>:: iterator i;

	for(i=pacientes_.begin(); i!=pacientes_.end(); i++)
	{

		if((*i).getDNI() == dni)
		{
			cout<<i->getDNI()<<endl;
			cout<<i->getNombre()<<endl;
			cout<<i->getApellidos()<<endl;
			cout<<i->getEdad()<<endl;
			cout<<i->getDireccion()<<endl;

		}
		else{cout<<"Paciente no encontrado";}
	}
	sleep(3);
}

void ModificarPaciente(list <Paciente> &pacientes_)
{

	string dni;
	cout << "Introduzca el DNI del paciente a modificar: "<< endl;
	cout << "DNI: "; cin >> dni; cout <<"\t";

	list<Paciente>:: iterator i;


	for(i=pacientes_.begin(); i!=pacientes_.end(); i++)
	{
		int prueba = 0;

		if((*i).getDNI() == dni)
		{

			prueba++;
			char tecla;
			int edad;
			string variable_a_cambiar;


			cout << "Seleccione el campo a modificar (Para modificar más de un campo repita la operación)"<< endl;
			cout << "\t1 .- Nombre" << endl;
			cout << "\t2 .- Apellidos" << endl;
			cout << "\t3 .- Edad" << endl;
			cout << "\t4 .- Direccción" << endl;


				switch(tecla)
				{
					case '1':
					cout<<"Introduzca el Nombre: ";
					cin>> variable_a_cambiar;
					(*i).setNombre(variable_a_cambiar);

					break;

					case '2':
					cout<<"Introduzca los apellidos: ";
					cin>> variable_a_cambiar;
					(*i).setApellidos(variable_a_cambiar);

					break;

					case '3':
					cout<<"Introduzca la Edad: ";
					cin>> edad;
					(*i).setEdad(edad);
					break;
					
					case '4':
					cout<<"Introduzca la Dirección: ";
					cin>> variable_a_cambiar;
					(*i).setDireccion(variable_a_cambiar);
					break;

					default:

					cout<<"Opción incorrecta"<<endl;

					break;
				}
			}
	}

	if(prueba==0)
	{
	
		cout << "Paciente no encontrado"<< endl;
	
	}

	ofstream fichero("pacientes.txt");
	list <Paciente> :: iterator aux;

	for(aux=pacientes_.begin() ; aux!=pacientes_.end() ; aux++)
	{
		fichero << (*aux).getNombre() << "," << (*aux).getApellidos();
		fichero << "," << (*aux).getEdad() << "," << (*aux).getDireccion();
	}
	fichero.close();
	sleep(3);

}

void comprobarlista(Paciente p)
{
	ifstream fe("Paciente.txt");
	while(getline(fe)==true)
	{
		if(fe=!p)
		{
			return true;
		}

	}
	return false;
}

int BorrarPaciente(list <Paciente> &pacientes_)
{
	string dni;
	cout << "Introduzca el DNI del paciente a borrar: "<< endl;
	cout << "DNI: "; cin >> dni; cout <<"\t";

	list<Paciente>:: iterator i;



	if (pacientes_.empty()==1)
	{
		return -1;
	}




	else
	{
		for(i=pacientes_.begin(); i!=pacientes_.end(); i++)
		{

			if((*i).getDNI() == dni)
			{
				pacientes_.erase(i);
				return 1;
			}
		}

		ofstream fichero("PACIENTES.txt");
		list <Paciente> :: iterator aux;

		for(aux=pacientes_.begin() ; aux!=pacientes_.end() ; aux++)
		{
			fichero << (*aux).getNombre() << "," << (*aux).getApellidos();
			fichero << "," << (*aux).getEdad() << "," << (*aux).getDireccion();
		}
		fichero.close();
		sleep(2);

	}

}