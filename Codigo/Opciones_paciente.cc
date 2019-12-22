#include "Paciente.h"
#include "Tratamiento.h"
#include "Main.h"
#include <unistd.h>
#include <fstream>

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

	if (ifstream fe("Paciente.txt")= true)
	{
		if (comprobarlista(p)=true)
		{
			
		}
		else
		{
			cout<<"Ya existe este paciente"<<endl;
		}
	}
	else
	{
		ofstream fs("Paciente.txt");
		/*string dni;
		string nombre;
		string apellido;
		string direccion;
		int edad;*/

		cin>>p.dni;
		cin>>p.nombre;
		cin>>p.apellido;
		cin>>p.direccion;
		cin>>p.edad;

		setDNI(p.dni);
		setNombre(p.nombre);
		setApellidos(p.apellidos);
		setDireccion(p.direccion);
		setEdad(p.edad);

		fe>>p;


	}
	fs.close();

}

void comprobarlista(Paciente p)
{
	ifstream fe("Paciente.txt");
	while(getline(fe)==true)
	{
		if(fe=!p)
		{
			return true;
		}

	}
	return false;
}







