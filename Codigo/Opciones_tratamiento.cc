#include "Tratamiento.h"
#include "Paciente.h"
#include "Main.h"
#include "Citas.h"
#include <unistd.h>
#include <string>
using namespace std;

void OpcionesTratamiento(list <Paciente> &pacientes_)
{



		bool bandera=false;

			char tecla;

			ifstream fe("tratamiento.txt");
		    if (!fe)
		    {
		    	ofstream ofs("tratamiento.txt");
		    }

			do

			{

		    system("clear");

		        cin.clear();
		        cout << "-----------------------------------" << endl;
		        cout << "  OPCIONES ACERCA DEL TRATAMIENTO  " << endl;
		        cout << "-----------------------------------" << endl << endl;

		        cout << "\t1 .- Añadir tratamiento" << endl;

		        cout << "\t2 .- Consultar tratamiento de un paciente" << endl;

		        cout << "\t3 .- Modificar el tratamiento de un paciente" << endl;

		        cout << "\t4 .- Borrar tratamiento de un paciente" << endl;

		        cout << "\t5 .- Volver al menú principal" << endl;


		        cout << "Elije una opcion: ";



		        cin >> tecla;



				switch(tecla)

				{

					case '1':

						AnadirTratamiento(pacientes_);

					break;

					case '2':

						ConsultarTratamiento(pacientes_);

					break;

					case '3':

						ModificarTratamiento(pacientes_);

					break;


					case '4':

						BorrarTratamiento(pacientes_);


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



void AnadirTratamiento(list <Paciente> &pacientes_){



	string nombre_tratamiento,duracion,dni;

	cout << "DNI del paciente a poner tratamiento: "<< endl;
	cin>>dni;

	list<Paciente>:: iterator i;
    for (i = pacientes_.begin(); i != pacientes_.end(); i++) {
         if(i->getDNI() == dni){
             break;
         }
    }

	if (i != pacientes_.end())

	{
		cout << "Paciente:" << (*i).getNombre()<<" "<< (*i).getApellidos()<< endl;
		cout <<"-------------------------------"<<endl;
		cout << "Rellene los siguientes campos: "<< endl;
		cout <<"\t";
		cout << "Nombre del tratamiento: "; cin >> nombre_tratamiento; cout <<""<<endl;
		cout << "Duración del tratamiento: "; cin >> duracion; cout <<""<<endl;

		Tratamiento t(nombre_tratamiento,duracion);


		i->tratamientos_.push_back(t);
	}
	else
	{
		cout << "Paciente no encontrado\n";
	}

}

void ConsultarTratamiento(list <Paciente> pacientes_){



	string nombre_tratamiento,duracion,dni;

	cout << "DNI del paciente a poner tratamiento: "<< endl;
	cin>>dni;
	
	list<Paciente>:: iterator i;
    for (i = pacientes_.begin(); i != pacientes_.end(); i++) {
         if(i->getDNI() == dni){
             break;
         }
    }

	if (i != pacientes_.end())

	{
		cout << "Paciente:" << (*i).getNombre()<<" "<< (*i).getApellidos()<< endl;
		cout <<"-------------------------------"<<endl;
		cout<< (i->tratamientos_.end()->getNombreTratamiento())<<endl;
		cout<< (i->tratamientos_.end()->getDuracion())<<endl;
	}
	else{cout << "Paciente no encontrado\n";}
}


void ModificarTratamiento(list <Paciente> &pacientes_)
{

	string dni;
	cout << "Introduzca el DNI del paciente : "<< endl;
	cout << "DNI: "; cin >> dni; cout <<"\t";

	list<Paciente>:: iterator i;

	int prueba = 0;

	for(i=pacientes_.begin(); i!=pacientes_.end(); i++)
	{
		prueba = 0;

		if((*i).getDNI() == dni)
		{
			prueba++;
			char tecla;
			string variable_a_cambiar;
			cout << "Seleccione el campo a modificar (Para modificar más de un campo repita la operación)"<< endl;
			cout << "\t1 .- Nombre del Tratamiento" << endl;
			cout << "\t2 .- Duracion" << endl;



				switch(tecla)
				{
					case '1':
					cout<<"Introduzca el Nombre del tratamiento: ";
					cin>> variable_a_cambiar;
					i->tratamientos_.end()->setNombreTratamiento(variable_a_cambiar);

					break;

					case '2':
					cout<<"Introduzca la duración: ";
					cin>> variable_a_cambiar;
					i->tratamientos_.end()->setDuracion(variable_a_cambiar);

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
}
void BorrarTratamiento(list <Paciente> &pacientes_){
	string nombre_tratamiento,duracion,dni;
	cout << "DNI del paciente a poner tratamiento: "<< endl;
	cin>>dni;
	list<Tratamiento>::iterator aux;

	list<Paciente>:: iterator i;
    for (i = pacientes_.begin(); i != pacientes_.end(); i++) {
         if(i->getDNI() == dni){
             break;
         }
    }

	if (i != pacientes_.end())
	{
		i->tratamientos_.pop_back();
	}
	else{cout << "Paciente no encontrado\n";}
}