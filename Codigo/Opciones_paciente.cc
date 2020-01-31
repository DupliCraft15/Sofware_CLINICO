#include "Paciente.h"
#include "Tratamiento.h"
#include "Main.h"
#include <unistd.h>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void OpcionesPaciente(list <Paciente> &pacientes_){


	bool bandera=false;

	ifstream fe("pacientes.txt");
    if (!fe){ofstream ofs("pacientes.txt");}

	char tecla;

		do
			{
				system("clear");
				cin.clear();
				cout << "----------------------------------" << endl;
				cout << "   OPCIONES ACERCA DEL PACIENTE   " << endl;
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
						if(AnadirPaciente(pacientes_)==true){
							cout<<"Paciente guardado con exito, pulse una tecla para continuar"<<endl;
						}
						else{
							cout<< "El paciente introducido ya existente, pulse una tecla para continuar"<<endl;
						}

                        cin.ignore();
                        cin.get();

						break;



				case '2':

					BuscarPaciente(pacientes_);

					cin.ignore();
					cin.get();

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

						cout << "Opcion no valida" << endl;

				break;

				}

		    }while(bandera!=true);
		}

bool AnadirPaciente(list <Paciente> &pacientes_)
{
    //Creamos un paciente
	string dni,nombre,apellidos,direccion;
	string edad;

	cout << "A continuación introduzca los datos del paciente a añadir sin espacios)"<< endl;
	cout <<"\t";
	cout << "DNI: "; cin >> dni; cout <<"\t";

	//Buscamos el paciente
    list<Paciente>:: iterator i;
	
	
    for (i = pacientes_.begin(); i != pacientes_.end(); i++) {
         if(i->getDNI() == dni){
         	 return false;
         	 
            
         }
    }


	cout << "Nombre: "; cin >> nombre; cout <<"\t";
	cout << "Apellidos: "; cin >> apellidos; cout <<"\t";
	cout << "Edad: "; cin >> edad; cout <<"\t";
	cout << "Direccion: "; cin >> direccion; cout <<"\t";

	Paciente p(dni,nombre,apellidos,edad,direccion);
   
	//De haber llegado a este punto simplemente podemos proceder a añadir el paciente a la lista	
		pacientes_.push_back(p);

    //Actualizamos el archivo
	fstream fichero ("pacientes.txt",ios::app);
	fichero << p.getDNI() << "," << p.getNombre() << "," << p.getApellidos() << "," << p.getEdad() << "," << p.getDireccion()<<endl;
	
	fichero.close();
	return true;

}


void BuscarPaciente(list <Paciente> &pacientes_)

{
	
	string dnibuscado,dni,nombre,apellidos,direccion;
	string edad;
	size_t sz;
	cout << "Introduzca el DNI del paciente a buscar: "<< endl;
	cout << "DNI: "; cin >> dnibuscado; cout <<"\t";

	pacientes_.clear();
	ifstream fichero("pacientes.txt");

	while(!fichero.eof())
	{


		getline(fichero,dni,',');
		getline(fichero,nombre,',');
		getline(fichero,apellidos,',');
		getline(fichero,edad,',');
		getline(fichero,direccion,'\n');

		Paciente p(dni,nombre,apellidos,edad,direccion);
		pacientes_.push_back(p);

	}

	fichero.close();

	list<Paciente>:: iterator i;
	bool encontrado = false;
    for (i = pacientes_.begin(); i != pacientes_.end(); i++) {
         if(i->getDNI() == dnibuscado){
         	encontrado  = true;
            
         }
    }

	if (encontrado)
	{

		cout<<"_____________________________"<<endl;
	    cout<<"DNI: "<<i->getDNI()<<endl;
	    cout<<"Nombre: "<<i->getNombre()<<endl;
	    cout<<"Apellidos: "<<i->getApellidos()<<endl;
	    cout<<"Edad: "<<i->getEdad()<<endl;
	    cout<<"Direccción: "<<i->getDireccion()<<endl;
	    cout<<"_____________________________"<<endl;
	    cout<<"Pulse una tecla para continuar"<<endl;
	}
	else {
		cout << "Paciente no encontrado\n";
    }

}
//Revisar
void ModificarPaciente(list <Paciente> &pacientes_)
{

	string dni;
	cout << "Introduzca el DNI del paciente a modificar: "<< endl;
	cout << "DNI: "; cin >> dni; cout <<"\t";

	list<Paciente>:: iterator i;

	int prueba = 0;

	for(i=pacientes_.begin(); i!=pacientes_.end(); i++)
	{

		if(i->getDNI() == dni)
		{

			prueba++;
			char tecla;
			string edad;
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
		fichero << (*aux).getDNI() << "," << (*aux).getNombre() << "," << (*aux).getApellidos();
		fichero << "," << (*aux).getEdad() << "," << (*aux).getDireccion() << endl;
	}
	fichero.close();
	sleep(3);

}



int BorrarPaciente(list <Paciente> &pacientes_)
{
	string dni;
	cout << "Introduzca el DNI del paciente a borrar: "<< endl;
	cout << "DNI: "; cin >> dni; cout <<"\t";

	list<Paciente>:: iterator i;
	bool encontrado = false;
    for (i = pacientes_.begin(); i != pacientes_.end(); i++) {
         if(i->getDNI() == dni){
         	encontrado  = true;
            break;
         }
    }

	if (encontrado)
	{
	   pacientes_.erase(i);
	   cout<<"Paciente borrado"<<endl;
	   cin.ignore();
	   cin.get();
	}
	else {
		cout << "Paciente no encontrado\n";
    }
    ofstream fichero("pacientes.txt");

	list <Paciente> :: iterator aux;
	for(aux=pacientes_.begin() ; aux!=pacientes_.end() ; aux++)
	{
		fichero << (*aux).getDNI() << "," << (*aux).getNombre() << "," << (*aux).getApellidos(); 
		fichero << "," << (*aux).getEdad() << "," << (*aux).getDireccion() << endl;
	}
	fichero.close();
	return true;
}