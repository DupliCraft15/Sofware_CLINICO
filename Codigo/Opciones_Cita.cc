#include "Citas.h"
#include "Main.h"

#include <unistd.h>
#include <fstream>
#include <string>
#include <iostream>
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

					system("clear");

					AnadirCita(citas_);

					cin.ignore();
                    cin.get();
				break;



				case '2':

					system("clear");

					BuscarCita(citas_);

					cin.ignore();
                    cin.get();

				break;

				case '3':

					system("clear");

					ModificarCita(citas_);
				

					cin.ignore();
                    cin.get();

				break;


				case '4':

					system("clear");

					if(BorrarCita(citas_)==true)
					{
						cout<<"Eliminada correctamente, pulse una tecla para continuar"<<endl;
					}
					else
					{
						cout<<"Cita no encontrada o no ha sido posible eliminarla"<<endl;
					}



					cin.ignore();
                    cin.get();

				break;

				case '5':

						bandera=true;
						system("clear");
				break;

				default:

						cout << "Opcion no valida"  << endl;

				break;

				}

		    }while(bandera!=true);
}


bool BorrarCita(list <Cita> &citas_)
{
	string dni;
	cout << "Introduzca el DNI del paciente a borrar su cita: "<< endl;
	cout << "DNI: "; cin >> dni; cout <<"\t";
	while(compruebaDNI(dni)!=true)
	{
		cout<<"Por favor, introduzca un Dni válido: ";
		cin >> dni; cout <<"\t";
	}

	citas_.clear();


	citas_=leerFicheroCitas("citas.txt");
	list<Cita>:: iterator i;


	bool comprobar=false;

    for (i = citas_.begin(); i!= citas_.end(); i++) {
         if(i->getDNI() == dni){

			comprobar=true;
			
		   	citas_.erase(i);
		   	break;
		   	
		   	

        }
    }

    
    
    if (comprobar==true)
    {
	    if(citas_.empty())
	    {
	    	ofstream fichero("citas.txt");
	    	fichero <<" ";
	    	fichero.close();
	    }

	    else
	    {
	    	ofstream fichero("citas.txt");
			list<Cita>:: iterator aux;

			for(aux=citas_.begin() ; aux!=citas_.end() ; aux++)
			{
				if(aux->getDNI()!=""&&aux->getTime()!=""&&aux->getDay()!=""&&aux->getMonth()!=""&&aux->getYear()!=""&&aux->getMotivo()!="")
				{fichero << aux->getDNI() << "," << aux->getTime() << "," << aux->getDay() << "," << aux->getMonth() << "," << aux->getYear()<< "," << aux->getMotivo()<<endl;
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

void AnadirCita(list <Cita> &citas_)

{
	string hora,dia,mes,ano,aux,dni,motivo;
	char i[200];
	cout << "Introduzca los datos de la cita"<< endl;
	cout <<"\t";
	cout << "DNI: "; cin >> dni; cout <<"\t";
	while(compruebaDNI(dni)!=true)
	{
		cout<<"Por favor, introduzca un Dni válido: ";
		cin >> dni; cout <<"\t";
	}
	
	cout<<"Hora: "<<endl;cout <<"\t";
	cout<<"(Por favor siga el formato 'hh:mm' ej:18:30)"<<endl;cout <<"\t";
	cin>>hora; cout <<"\t";


	cout<<"Fecha: "<<endl;cout <<"\t";
	cout<<"(Por favor siga el formato 'dd/mm/yy' ej:01/02/2020)"<<endl;cout <<"\t";
	cin>>aux; cout <<"\t";
	dia=aux.substr(0,2);
	mes=aux.substr(3,2);
	ano=aux.substr(6,9);

	cout<<"Motivo: "<<endl;cout <<"\t";
	cin.ignore();
	cin.getline(i,200); 
	motivo+=i;




	Cita c(dni,hora,dia,mes,ano,motivo);
	citas_.push_back(c);

	fstream fichero ("citas.txt",ios::app);
	fichero << c.getDNI() << "," << c.getTime() << "," << c.getDay() << "," << c.getMonth()<< "," << c.getYear() << "," << c.getMotivo()<<endl;
	
	fichero.close();
	cout<<"Cita añadida con exito a su calendario!"<<endl;
	cout<<"Pulse una tecla para continuar..."<<endl;
	
}




void ModificarCita(list <Cita> &citas_)
{
	string dni,aux;

	cout << "Introduzca el DNI del paciente a modificar su cita: "<< endl;
	cout << "DNI: "; cin >> dni; cout <<"\t";
	while(compruebaDNI(dni)!=true)
	{
		cout<<"Por favor, introduzca un Dni válido: ";
		cin >> dni; cout <<"\t";
	}

	citas_.clear();
	citas_=leerFicheroCitas("citas.txt");

	
	list<Cita>::iterator i;

	int prueba=0;
	
	for (i = citas_.begin(); i != citas_.end(); i++) 
	{
		   if(i->getDNI()==dni)
		   {

		   	prueba++;
		   	char tecla;
		   	string variable_a_cambiar;
		        
			cout << "Seleccione el campo a modificar (Para modificar más de un campo repita la operación)"<< endl;
			cout << "\t1 .- Hora" << endl;
			cout << "\t2 .- Fecha" << endl;
			cout << "\t3 .- Motivo" << endl;

			cin>>tecla;

				switch(tecla)
				{
					case '1':
					cout<<"Introduzca la hora: ";
					cin>> variable_a_cambiar;
					(*i).setTime(variable_a_cambiar);
					

					break;

					case '2':
					cout<<"Introduzca la Fecha: "<<endl;
					cout<<"(Por favor siga el formato 'dd/mm/yy' ej:01/02/2020)"<<endl;cout <<"\t";
					cin>>variable_a_cambiar; cout <<"\t";

					aux=variable_a_cambiar.substr(0,2);
					(*i).setDay(aux);

					aux=variable_a_cambiar.substr(3,2);
					(*i).setMonth(aux);

					aux=variable_a_cambiar.substr(6,9);
					(*i).setYear(aux);
					

					break;


					case '3':
					cout<<"Introduzca el motivo: ";
					cin>>variable_a_cambiar;
					(*i).setMotivo(variable_a_cambiar);
					
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
	
		cout << "Dni no encontrado"<< endl;
	
	}
	if(citas_.empty())
	    {
	    	ofstream fichero("citas.txt");
	    	fichero <<" ";
	    	fichero.close();
	    }

	    else
	    {
	    	ofstream fichero("citas.txt");
			list<Cita>:: iterator aux;

			for(aux=citas_.begin() ; aux!=citas_.end() ; aux++)
			{
				if(aux->getDNI()!=""&&aux->getTime()!=""&&aux->getDay()!=""&&aux->getMonth()!=""&&aux->getYear()!=""&&aux->getMotivo()!="")
				{fichero << aux->getDNI() << "," << aux->getTime() << "," << aux->getDay() << "," << aux->getMonth() << "," << aux->getYear()<< "," << aux->getMotivo()<<endl;
				}

			}
			fichero.close();
			
	    }

}

void BuscarCita(list<Cita> &citas_)
{
	string dia,mes,ano,aux;

	int vacio=0;

	cout<<"Introduzca la fecha concreta que desee consultar sus citas: "<<endl;cout <<"\t";
	cout<<"(Por favor siga el formato 'dd/mm/yy' ej:01/02/2020)"<<endl;cout <<"\t";
	cin>>aux; cout <<"\t";
	dia=aux.substr(0,2);
	mes=aux.substr(3,2);
	ano=aux.substr(6,9);


	citas_.clear();
	citas_=leerFicheroCitas("citas.txt");

	list<Cita>:: iterator i;
	cout << "Las citas que tiene para este dia son" << endl;
	for (i = citas_.begin(); i != citas_.end(); i++) 
	{
		   if(i->getDay() == dia && i->getMonth()==mes && i->getYear()==ano)
		   {
		   		
		        cout<<""<<endl;
		        cout<<"_____________________________"<<endl;
			    cout<<"DNI: "<<i->getDNI()<<endl;
			    cout<<i->getDay()<<"/"<<i->getMonth()<<"/"<<i->getYear()<<endl;
			    cout<<"Con motivo: "<<i->getMotivo()<<endl;
			    cout<<"_____________________________"<<endl;
			    
			   
		        
		        vacio++;
		   }

	}

	if (vacio==0)
	{
		cout << "No hay citas para ese dia\n";
	}

	cout<<"Pulse una tecla para continuar..."<<endl;
}