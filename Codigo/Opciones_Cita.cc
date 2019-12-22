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


		        cout << "\t1 .- Añadir cita" << endl;

		        cout << "\t1 .- Añadir nueva cita" << endl;

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


int BorrarCita(list <Cita> &citas_)
{
	int hora,dia,mes,ano;
	cout << "Introduzca los datos de la cita a borrar: "<< endl;
	cout << "Hora: "; cin >> hora; cout <<"\t";
	cout << "Dia: "; cin >> dia; cout <<"\t";
	cout << "Mes: "; cin >> mes; cout <<"\t";
	cout << "Año: "; cin >> ano; cout <<"\t";

	list<Paciente>:: iterator i;



	if (citas_.empty()==1)
	{
		return -1;
	}




	else
	{
		for(i=citas_.begin(); i!=citas_.end(); i++)
		{

			if((*i).getTime()==hora && (*i).getDay()==dia && (*i).getMonth()==mes && (*i).getYear()==ano)
			{
				pacientes_.erase(i);
				return 1;
			}
		}

		ofstream fichero("CITAS.txt");
		list <Cita> :: iterator aux;

		for(aux=citas_.begin() ; aux!=citas_.end() ; aux++)
		{
			fichero << (*aux).getTime() << "," << (*aux).getDay() << "," << (*aux).getMonth() << "," << (*aux).getYear();
		}
		fichero.close();
		sleep(2);

	}

}

void AnadirCita(list <Cita> &citas_)

{
	int hora,dia,mes,año;
	string motivo;
	cout << "Introduzca los datos de la cita"<< endl;
	cout <<"\t";
	cout << "Hora: "; cin >> hora; cout <<"\t";
	cout << "Día: "; cin >> dia; cout <<"\t";
	cout << "Mes: "; cin >> mes; cout <<"\t";
	cout << "Año: "; cin >> año; cout <<"\t";
	cout << "Motivo de la cita: "; cin >> motivo; cout <<"\t";
	Cita c(hora,dia,mes,año,motivo);
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

