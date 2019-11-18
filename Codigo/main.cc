#include <iostream>

#include <cstdlib>


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

				cout << "Has elejido Opciones acerca del paciente.\n";

				pausa();

				break;



			case '2':

				cout << "Has elejido Opciones acerca de los tratamientos.\n";

				pausa();

				break;



			case '3':

				cout << "Has elejido Opciones acerca de las citas.\n";

				pausa();

				break;



			case '4':

				cout << "Has elejido Calendario.\n";

				pausa();

				break;



			case '5':

				cout << "Gracias por utilizar nuestro programa.\n";

				bandera=true;

				exit(1);

				break;



			default:

				cout << "Opcion no valida.\a\n";

				pausa();

				break;

		}

    }while(bandera!=true);



    return 0;

}



void pausa()

{

    cout << "Pulsa una tecla para continuar...\n";

    getwchar();

    getwchar();

}