#include "Tratamiento.h"
#include "Main.h"
#include <unistd.h>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void OpcionesTratamiento(list <Tratamiento> &tratamientos_)
{

		bool bandera=false;

			ifstream fe("tratamiento.txt");
		    if (!fe){ofstream ofs("tratamiento.txt");}

		    char tecla;

			do

			{

		    system("clear");
		    cin.clear();

		        cin.clear();
		        cout << "-----------------------------------" << endl;
		        cout << "  OPCIONES ACERCA DEL TRATAMIENTO  " << endl;
		        cout << "-----------------------------------" << endl << endl;

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
						system("clear");

						AnadirTratamiento(tratamientos_);

						cin.ignore();
						cin.get();
						

					break;

					case '2':
						system("clear");
						
						ConsultarTratamiento(tratamientos_);


						cin.ignore();
						cin.get();
						
					break;

					case '3':
						system("clear");
						
						ModificarTratamiento(tratamientos_);


						cin.ignore();
						cin.get();
						
					break;


					case '4':
						system("clear");
						
						BorrarTratamiento(tratamientos_);

						cin.ignore();
						cin.get();

						


					break;

					case '5':

						bandera=true;

						break;

					default:

						cout << "Opcion no valida" << endl;
						break;

				}

		    }while(bandera!=true);

}



bool BorrarTratamiento(list <Tratamiento> &tratamientos_)
{
	string dni;
	cout << "Introduzca el DNI del paciente a borrar su tratamiento: "<< endl;
	cout << "DNI: "; cin >> dni; cout <<"\t";
	while(compruebaDNI(dni)!=true)
	{
		cout<<"Por favor, introduzca un Dni válido: ";
		cin >> dni; cout <<"\t";
	}

	tratamientos_.clear();


	tratamientos_=leerFicheroTratamientos("tratamientos.txt");
	list<Tratamiento>:: iterator i;


	bool comprobar=false;

    for (i = tratamientos_.begin(); i!= tratamientos_.end(); i++) {
         if(i->getDNI() == dni){

			comprobar=true;
			
		   	tratamientos_.erase(i);
		   	break;
		   	
		   	

        }
    }

    
    
    if (comprobar==true)
    {
	    if(tratamientos_.empty())
	    {
	    	ofstream fichero("tratamientos.txt");
	    	fichero <<" ";
	    	fichero.close();
	    }

	    else
	    {
	    	ofstream fichero("tratamientos.txt");
			list<Tratamiento>:: iterator aux;

			for(aux=tratamientos_.begin() ; aux!=tratamientos_.end() ; aux++)
			{
				if(aux->getDNI()!=""&&aux->getNombreTratamiento()!=""&&aux->getDuracion()!="")
				{fichero << aux->getDNI() << "," << aux->getNombreTratamiento() << "," << aux->getDuracion() <<<<endl;
				}

			}
			fichero.close();
			return true;
	    }
		
    }
    else{
    	
		return false;    	
    }

}

void AnadirTratamiento(list <Tratamiento> &tratamientos_)

{
	string dni, nombre, duracion;
	char i[800];
	cout << "Rellene los siguientes campos"<< endl;
	cout <<"\t";
	cout << "DNI: "; cin >> dni; cout <<"\t";
	while(compruebaDNI(dni)!=true)
	{
		cout<<"Por favor, introduzca un Dni válido: ";
		cin >> dni; cout <<"\t";
	}
	
	cout<<"Nombre del tratamiento: "<<endl;cout <<"\t";
	cin.ignore();
	cin.getline(i,800); 
	nombre+=i;

	cout<<"Duración del Tratamiento: "<<endl;cout <<"\t";
	cin.getline(i,800); 
	duracion+=i;




	Tratamiento t(dni,nombre,duracion);
	tratamientos_.push_back(t);

	fstream fichero ("tratamientos.txt",ios::app);
	fichero << t.getDNI() << "," << t.getNombreTratamiento() << "," << t.getDuracion() <<endl;
	
	fichero.close();
	cout<<"Tratamiento añadido con éxito"<<endl;
	cout<<"Pulse una tecla para continuar..."<<endl;
	
}




void ModificarTratamiento(list <Tratamiento> &tratamientos_)
{
	string dni,aux;
	char j[800];
	

	cout << "Introduzca el DNI del paciente a modificar su cita: "<< endl;
	cout << "DNI: "; cin >> dni; cout <<"\t";
	while(compruebaDNI(dni)!=true)
	{
		cout<<"Por favor, introduzca un Dni válido: ";
		cin >> dni; cout <<"\t";
	}

	tratamientos_.clear();
	tratamientos_=leerFicheroTratamientos("tratamientos.txt");

	
	list<Cita>::iterator i;

	int prueba=0;
	
	for (i = tratamientos_.begin(); i != tratamientos_.end(); i++) 
	{
		   if(i->getDNI()==dni)
		   {

		   	prueba++;
		   	char tecla;
		   	string variable_a_cambiar;
		        
			cout << "Seleccione el campo a modificar (Para modificar más de un campo repita la operación)"<< endl;
			cout << "\t1 .- Nombre del tratamiento" << endl;
			cout << "\t2 .- Duración" << endl;

			cin>>tecla;

				switch(tecla)
				{
					case '1':
					cout<<"Introduzca el nombre del tratamiento: ";

					cin.ignore();
					cin.getline(j,800); 
					variable_a_cambiar+=j;
					(*i).setNombreTratamiento(variable_a_cambiar);
					

					break;

					case '2':
					cout<<"Introduzca la duracion: ";
					cin.ignore();
					cin.getline(j,800); 
					variable_a_cambiar+=j;
					(*i).setDuracion(variable_a_cambiar);
					

					break;


					default:

					cout<<"Opción incorrecta"<<endl;
					
					break;

					
				}
				cout<<"Variable cambiada correctamente, pulse una tecla para volver"<<endl;
				
				sleep(1);
				break;    
		   }
	}

	if(prueba==0)
	{
	
		cout << "No encontrado"<< endl;
	
	}
	if(tratamientos_.empty())
	    {
	    	ofstream fichero("tratamientos.txt");
	    	fichero <<" ";
	    	fichero.close();
	    }

	    else
	    {
	    	ofstream fichero("tratamientos.txt");
			list<Tratamiento>:: iterator aux;

			for(aux=tratamientos_.begin() ; aux!=tratamientos_.end() ; aux++)
			{
				if(aux->getDNI()!=""&&aux->getNombreTratamiento()!=""&&aux->getDuracion()!="")
				{fichero << aux->getDNI() << "," << aux->getNombreTratamiento() << "," << aux->getDuracion() <<<<endl;
				}
			}
			fichero.close();
			
	    }

}

void BuscarTratamiento(list <Tratamiento> &tratamientos_)

{

	string dnibuscado,dni,nombre,duracion;
	
	cout << "Introduzca el DNI del paciente a buscar su tratamiento: "<< endl;
	cout << "DNI: "; cin >> dnibuscado; cout <<"\t";

	while(compruebaDNI(dnibuscado)!=true)
	{
		cout<<"Por favor, introduzca un Dni válido: ";
		cin >> dnibuscado; cout <<"\t";
	}
	
	ifstream fichero("tratamientos.txt");

	if(!fichero.eof()){

		tratamientos_.clear();
		tratamientos_=leerFicheroTratamientos("tratamientos.txt");
		list<Tratamiento>:: iterator i;
		bool encontrado = false;
		for (i = tratamientos_.begin(); i != tratamientos_.end(); i++) 
		{
			   if(i->getDNI() == dnibuscado)
			   {
			        cout<<""<<endl;
			        cout<<"_____________________________"<<endl;
				    cout<<"DNI: "<<i->getDNI()<<endl;
				    cout<<"Nombre del tratamiento: "<<i->getNombreTratamiento()<<endl;
				    cout<<"Duración: "<<i->getDuracion()<<endl;
				    cout<<"_____________________________"<<endl;
				    cout<<"Pulse una tecla para continuar"<<endl;
			         	encontrado  = true;
			            
			   }
		}

		if (!encontrado)
		{

			cout << "No encontrado\n";
		}

	}
	else{
		cout<<"Base de datos de tratamientos vacía"<<endl;
	}
}