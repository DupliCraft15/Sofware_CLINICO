#include "Paciente.h"
//#include "Tratamiento.h"
#include "Main.h"
#include <cstdlib>
#include <iostream>
#include <unistd.h>
using namespace std;


void pausa();

int main()
{

	bool bandera=false;

	char tecla;

	list <Paciente> pacientes_;



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

			break;
			case '2':
			//OpcionesTratamiento();
			break;
			case '3':

			break;

			case '4':
			break;

			case '5':

				bandera=true;

				exit(1);

				break;

			default:

				cout << "Opcion no valida.(Espere 3 segundos hasta que se cierre la ventana)\a\n";

				sleep(3);
				break;

		}

    }while(bandera!=true);
    return 0;

};



