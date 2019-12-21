#ifndef PACIENTE_H
#define PACIENTE_H
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <list>
#include "Main.h"
#include "Citas.h"
using namespace std;

class Paciente
{

private:
	string dni_,nombre_,apellidos_,direccion_;
	int edad_;



public:


	list <Cita> historial_citas_;
	list <Tratamiento> historial_tratamiento_;

	Paciente(string dni_,string nombre_="",string apellidos_="",int edad_=0,string direccion_="")
	{
		list <Cita> historial_citas_;
		list <Tratamiento> historial_tratamiento_;
	}


		inline	void setDNI       (string dni)       {dni_=dni;};
		inline	void setNombre    (string nombre)    {nombre_=nombre;};
		inline	void setApellidos (string apellidos) {apellidos_=apellidos;};
		inline	void setDireccion (string direccion) {direccion_=direccion;};
		inline	void setEdad      (int    edad)      {edad_=edad;};

		inline	string   getDNI      		 (){return dni_;};
		inline	string   getNombre   		 (){return nombre_;};
		inline	string   getApellidos 		 (){return apellidos_;};
		inline	string   getDireccion		 (){return direccion_;};
		inline  int      getEdad			 (){return edad_;};
	};
	void OpcionesPaciente(list <Paciente> &pacientes_);
	bool AnadirPaciente(list <Paciente> &pacientes_);
	void BuscarPaciente(list <Paciente> &pacientes_);
	void ModificarPaciente(list <Paciente> &pacientes_);

#endif