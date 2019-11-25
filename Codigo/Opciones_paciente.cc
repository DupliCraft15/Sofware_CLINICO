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

						//AnadirPaciente();

						break;



					case '2':

						//BuscarPaciente();

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




void Paciente::AnadirPaciente(){

	Paciente p;

	paceintes_.clear();






}








