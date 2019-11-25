#ifndef PACIENTE_H
#define PACIENTE_H
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <stdlib.h>
#include "Main.h"

void OpcionesPaciente();


class Paciente
{

private:
	string dni_,nombre_,apellidos_,direccion_;
	int edad_;
	list <pacientes>paciente_;


public:
	Paciente(string dni,string nombre="",string apellidos="",edad=0,string direccion="")
	{

			dni_=dni;
			nombre_=nombre;
			apellidos_=apellidos;
			direccion_=direccion;
			edad_=edad;

		}

		inline	void setDNI       (string dni)       {dni=dni_;};
		inline	void setNombre    (string nombre)    {nombre=nombre_;};
		inline	void setApellidos (string apellidos) {apellidos=apellidos_;};
		inline	void setDireccion (string direccion) {direccion=direccion_;};
		inline	bool setEdad      (int    edad)      {edad_=edad;};

		inline	string   getDNI      		 (){return dni_;};
		inline	string   getNombre   		 (){return nombre_;};
		inline	string   getApellidos 		 (){return apellidos_;};
		inline	string   getDireccion		 (){return direccion_;};
		inline  int      getEdad			 (){return edad_;};
		inline list<pacientes> getListaPacientes(){return pacientes_;};
};

#endif