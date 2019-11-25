#include "Tratamiento.h"
#include "Paciente.h"
#include "Main.h"
#include <unistd.h>


using namespace std;


void OpcionesTratamiento()
{



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


						break;



					case '2':

						//ConsultarTratamiento();

						break;



					case '3':

						//ModificarTratamiento();


						break;



					case '4':

						//BorrarTratamiento();


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