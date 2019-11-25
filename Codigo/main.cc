#include "Paciente.h"
#include "Tratamiento.h"
#include "Main.h"
#include <cstdlib>
#include <iostream>


using namespace std;


void pausa();

int main()
{

	bool bandera=false;

	char tecla;



	do

    {

        cin.clear();

        cout << "Clinica ______" << endl;

        cout << "----------------------------------" << endl << endl;

        cout << "\t1 .- Opciones acerca del paciente" << endl;

        cout << "\t2 .- Opciones acerca de los tratamientos" << endl;

        cout << "\t3 .- Opciones acerca de las citas" << endl;

        cout << "\t4 .- Calendario" << endl;

        cout << "\t5 .- Cerrar programa" << endl << endl;

        cout << "Elije una opcion: ";



        cin >> tecla;



		switch(tecla)

		{

			case '1':

				OpcionesPaciente();

				pausa();

			break;

			case '2':

				OpcionesTratamiento();

				pausa();

			break;

			case '3':

				pausa();
				break;

			case '4':

				pausa();
				break;

			case '5':

			bandera=true;

			exit(1);

			break;

			default:

				pausa();

				break;

		}

    }while(bandera!=true);
    return 0;

};

void pausa()

{

    cout << "Pulsa una tecla para continuar...\n";

    getwchar();

    getwchar();

}


