#include "Paciente.h"
#include "Tratamiento.h"
#include "Main.h"
#include "Citas.h"
#include <unistd.h>
#include <fstream>
#include <string>
using namespace std;

void OpcionesCita()
{
	bool bandera=false;

	ifstream fe("Citas.txt");
	if (!fe)
	{
		ofstream ofs("Citas.txt");
	}

	char tecla;

		do
			{
				system("clear");
				cin.clear();

				cout << "----------------------------------" << endl << endl;
				cout << "OPCIONES ACERCA DE LAS CITAS______" << endl;
		        cout << "----------------------------------" << endl << endl;

<<<<<<< HEAD
		        cout << "\t1 .- Añadir cita" << endl;
=======
		        cout << "\t1 .- Añadir nueva cita" << endl;
>>>>>>> d7fd2b4f7dcc3f496e19a449482977414d6a8fbc

		        cout << "\t2 .- Mostrar la siguiente cita" << endl;

		        cout << "\t3 .- Modificar una cita" << endl;

		        cout << "\t4 .- Cancelar una cita" << endl;

		        cout << "\t5 .- Volver al menú principal" << endl;

		        cout << "Elije una opcion: ";

		    cin >> tecla;
			
			switch(tecla)

			{

				case '1':

					AnadirCita();

				break;



				case '2':

					BuscarCita();

				break;

				case '3':

					ModificarCita();


				break;



				case '4':

					BorrarCita();


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


int BorrarCita(list <cita> &pacientes_)
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

void AnadirCita(list <Cita> &citas_)

{
	int dia,mes,año;
	string motivo;
	cout << "Introduzca los datos de la cita"<< endl;
	cout <<"\t";
	cout << "Día: "; cin >> dia; cout <<"\t";
	cout << "Mes: "; cin >> mes; cout <<"\t";
	cout << "Año: "; cin >> año; cout <<"\t";
	cout << "Motivo de la cita: "; cin >> motivo; cout <<"\t";
	Cita c(dia,mes,año,motivo);
	list<Cita>:: iterator i;
	((i*).historial_citas_.push_back(c));
	citas_.push_back(c);
	string nombrefichero="citas.txt";

	fstream fichero(nombrefichero.c_str(), ios::in);
	if(!fichero)
	{
			fichero.open(nombrefichero.c_str(), ios::out);
			fichero.close();
			return true;
	}
	else
	{
			fichero.close();
	}
}

