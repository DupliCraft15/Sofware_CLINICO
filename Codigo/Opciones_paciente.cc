#include "Paciente.h"




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

						pausa();

						break;



					case '2':

						//BuscarPaciente();

						pausa();

						break;



					case '3':

						//ModificarPaciente();

						pausa();

						break;



					case '4':

						//BorrarPaciente();

						pausa();

						break;

					case '5':
					pausa();
					break;

					default:

						cout << "Opcion no valida.\a\n";

						pausa();

						break;

				}

		    }while(bandera!=true);





}







