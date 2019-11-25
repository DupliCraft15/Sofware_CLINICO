#include "Tratamiento.h"



using namespace std;


void OpcionesTratamiento(){



		bool bandera=false;

			char tecla;



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

						//AnadirTratamiento();

						pausa();

						break;



					case '2':

						//ConsultarTratamiento();

						pausa();

						break;



					case '3':

						//ModificarTratamiento();

						pausa();

						break;



					case '4':

						//BorrarTratamiento();

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