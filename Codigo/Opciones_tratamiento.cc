#include "Tratamiento.h"
#include "Paciente.h"
#include "Main.h"
#include <unistd.h>
#include <string>
using namespace std;

void OpcionesTratamiento()
{



		bool bandera=false;

			char tecla;

			ifstream fe("Tratamiento.txt");
		    if (!fe)
		    {
		    	ofstream ofs("Tratamiento.txt");
		    }

			do

			{

		    system("clear");

		        cin.clear();
		        cout << "----------------------------------" << endl << endl;

		        cout << "OPCIONES ACERCA DEL TRATAMIENTO______" << endl;

		        cout << "----------------------------------" << endl << endl;

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

						AnadirTratamiento();

					break;

					case '2':

						ConsultarTratamiento();

					break;

					case '3':

						ModificarTratamiento();

					break;


					case '4':

						BorrarTratamiento();


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



void AnadirTratamiento(list <Paciente> pacientes_){



	string nombre_tratamiento,duracion,dni;

	cout << "DNI del paciente a poner tratamiento: "<< endl;
	cin>>dni;
	list<Paciente>::iterator i;

	i= find (pacientes_.begin(), pacientes_.end(), dni);

	if (i != pacientes_.end())

	{
		cout << "Paciente:" << (*i).getNombre()<<" "<< (*i).getApellidos()<< endl;
		cout <<"-------------------------------"<<endl;
		cout << "Rellene los siguientes campos: "<< endl;
		cout <<"\t";
		cout << "Nombre del tratamiento: "; cin >> nombre_tratamiento; cout <<""<<endl;
		cout << "Duración del tratamiento: "; cin >> duracion; cout <<""<<endl;

		Tratamiento t(nombre_tratamiento,duracion);


		i->tratamientos_.pushback(t);
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
	list<Paciente>::iterator i;

	i= find (pacientes_.begin(), pacientes_.end(), dni);

	if (i != pacientes_.end())

	{
		cout << "Paciente:" << (*i).getNombre()<<" "<< (*i).getApellidos()<< endl;
		cout <<"-------------------------------"<<endl;
		cout<< (i->tratamientos_.end().getNombreTratamiento())<<endl;
		cout<< (i->tratamientos_.end().getDuracion())<<endl;
	}
	else{cout << "Paciente no encontrado\n";}
}


void ModificarTratamiento(list <Paciente> &pacientes_)
{

	string dni;
	cout << "Introduzca el DNI del paciente : "<< endl;
	cout << "DNI: "; cin >> dni; cout <<"\t";

	list<Paciente>:: iterator i;


	for(i=pacientes_.begin(); i!=pacientes_.end(); i++)
	{
		int prueba = 0;

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
					i->tratamientos_.end().setNombreTratamiento(variable_a_cambiar);

					break;

					case '2':
					cout<<"Introduzca la duración: ";
					cin>> variable_a_cambiar;
					i->tratamientos_.end().setDuracion(variable_a_cambiar);

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
void BorrarTratamiento(list <Paciente> pacientes_){
	string nombre_tratamiento,duracion,dni;
	cout << "DNI del paciente a poner tratamiento: "<< endl;
	cin>>dni;
	list<Paciente>::iterator i;
	list<Tratamiento>::iterator aux;


	i= find (pacientes_.begin(), pacientes_.end(), dni);

	if (i != pacientes_.end())
	{
		i->tratamientos_.popback();
	}
	else{cout << "Paciente no encontrado\n";}
}