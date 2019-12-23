#include "Paciente.h"
#include "Tratamiento.h"
#include "Main.h"
#include "Citas.h"
#include <unistd.h>
#include <fstream>
#include <string>
using namespace std;

void OpcionesCita(list <Cita> &citas_)
{
	bool bandera=false;

	ifstream fe("citas.txt");
	if (!fe)
	{
		ofstream ofs("citas.txt");
	}

	char tecla;

		do
			{
				system("clear");
				cin.clear();

				cout << "----------------------------------" << endl;
				cout << "   OPCIONES ACERCA DE LAS CITAS   " << endl;
		        cout << "----------------------------------" << endl << endl;

		        cout << "\t1 .- Añadir nueva cita" << endl;

		        cout << "\t2 .- Mostrar las citas de un dia concreto" << endl;

		        cout << "\t3 .- Modificar una cita" << endl;

		        cout << "\t4 .- Cancelar una cita" << endl;

		        cout << "\t5 .- Volver al menú principal" << endl;

		        cout << "Elije una opcion: ";

		    cin >> tecla;
			
			switch(tecla)

			{

				case '1':

					AnadirCita(citas_);

				break;



				case '2':

					BuscarCita(citas_);

				break;

				case '3':

					ModificarCita(citas_);

				break;


				case '4':

					if(BorrarCita(citas_)==1)
					{
						cout << "Se ha borrado o no se a encontrado" << endl;
					}
					else
					{
						cout << "Aun no hay ningun paciente" << endl;
					}

				break;

				case '5':

						bandera=true;
				break;

				default:

						cout << "Opcion no valida"  << endl;

				break;

				}

		    }while(bandera!=true);
}


int BorrarCita(list <Cita> &citas_)
{
	int hora,dia,mes,ano;
	string motivo;
	cout << "Introduzca los datos de la cita a borrar: "<< endl;
	cout << "Hora: "; cin >> hora; cout <<"\t";
	cout << "Dia: "; cin >> dia; cout <<"\t";
	cout << "Mes: "; cin >> mes; cout <<"\t";
	cout << "Año: "; cin >> ano; cout <<"\t";


	if (citas_.empty()==1)
	{
		return -1;
	}




	else
	{
		for(auto i=citas_.begin(); i!=citas_.end(); i++)
		{

			if((*i).getTime()==hora && (*i).getDay()==dia && (*i).getMonth()==mes && (*i).getYear()==ano)
			{
				citas_.erase(i);
				return 1;
			}
		}

		ofstream fichero("Citas.txt");
		list <Cita> :: iterator aux;

		for(aux=citas_.begin() ; aux!=citas_.end() ; aux++)
		{
			fichero << (*aux).getTime() << "," << (*aux).getDay() << "," << (*aux).getMonth() << "," << (*aux).getYear() << (*aux).getMotivo() << endl;
		}
		fichero.close();

	}

	return 1;

}

void AnadirCita(list <Cita> &citas_)

{
	int hora,dia,mes,ano;
	string motivo, dni;
	cout << "Introduzca los datos de la cita"<< endl;
	cout <<"\t";
	cout << "DNI: "; cin >> dni; cout <<"\t";
	cout << "Hora: "; cin >> hora; cout <<"\t";
	cout << "Día: "; cin >> dia; cout <<"\t";
	cout << "Mes: "; cin >> mes; cout <<"\t";
	cout << "Año: "; cin >> ano; cout <<"\t";
	cout << "Motivo de la cita: "; cin >> motivo; cout <<"\t";
	Cita c(dni,hora,dia,mes,ano,motivo);
	citas_.push_back(c);

	ofstream fichero("citas.txt");
	list<Cita>::iterator aux;

	for(aux=citas_.begin() ; aux!=citas_.end() ; aux++)
	{
		fichero << (*aux).getTime() << "," << (*aux).getDay() << "," << (*aux).getMonth() << "," << (*aux).getYear() << (*aux).getMotivo() << endl;
	}
	fichero.close();
}

void ModificarCita(list <Cita> &citas_)
{
	int dia,mes,ano,hora;
	string motivo;
	cout << "Introduzca los datos de la cita que quiere modificar"<< endl; cout <<"\t";
	cout << "Hora: "; cin >> hora; cout <<"\t";
	cout << "Día: "; cin >> dia; cout <<"\t";
	cout << "Mes: "; cin >> mes; cout <<"\t";
	cout << "Año: "; cin >> ano; cout <<"\t";

	Cita d("", hora,dia,mes,ano, "");

	for(auto i=citas_.begin(); i!=citas_.end(); i++)
	{
		if((*i).getDay() == dia && (*i).getMonth() == mes && (*i).getYear() == ano && (*i).getTime() == hora)
		{
			cout << "Introduzca los nuevos datos de la cita"<< endl;
			cout <<"\t";
			cout << "Hora: "; cin >> hora; cout <<"\t";
			cout << "Día: "; cin >> dia; cout <<"\t";
			cout << "Mes: "; cin >> mes; cout <<"\t";
			cout << "Año: "; cin >> ano; cout <<"\t";
			cout << "Motivo: "; cin >> motivo; cout <<"\t";
			(*i).setDay(dia);
			(*i).setMonth(mes);
			(*i).setYear(ano);
			(*i).setMotivo(motivo);
			(*i).setTime(hora);
		}
	}

	ofstream fichero("citas.txt");

	for(auto aux=citas_.begin() ; aux!=citas_.end() ; aux++)
	{
		fichero << (*aux).getDNI() << "," << (*aux).getTime() << "," << (*aux).getMonth() << "," << (*aux).getYear() << "," << (*aux).getDay() << "," << (*aux).getMotivo() << endl;
	}
	fichero.close();
	sleep(3);
}

void BuscarCita(list<Cita> &citas_)
{
	int dia,mes,ano;
	string motivo;
	cout << "Introduzca los datos de la cita que quieras buscar"<< endl;
	cout <<"\t";
	cout << "Día: "; cin >> dia; cout <<"\t";
	cout << "Mes: "; cin >> mes; cout <<"\t";
	cout << "Año: "; cin >> ano; cout <<"\t";


	cout << "Las citas que tiene para este dia es" << endl;
	int contador = 0;

	for(auto i=citas_.begin(); i!=citas_.end(); i++)
	{
		contador++;
		if((*i).getDay() == dia && (*i).getMonth() == mes && (*i).getYear() == ano)
		{
			cout << (*i).getDNI() << "," << (*i).getTime() << "," << (*i).getMonth() << "," << (*i).getYear() << "," << (*i).getDay() << "," << (*i).getMotivo() << endl;
		}
	}

	if(contador == 0)
	{
		cout << "No se a encontrado dicha cita" <<endl;
	}

	sleep(5);
}