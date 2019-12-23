#ifndef PACIENTE_H
#define PACIENTE_H
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <list>
#include "Tratamiento.h"
using namespace std;

class Paciente
{

private:
	string dni_,nombre_,apellidos_,direccion_;
	int edad_;

public:
	list<Tratamiento> tratamientos_;

	Paciente(string dni="",string nombre="",string apellidos="",int edad=0,string direccion=""){
		dni_ = dni;
		nombre_  = nombre;
		apellidos_ = apellidos;
		edad_ = edad;
		direccion_ = direccion;
	}


		inline	void setDNI       (string dni)       {dni_=dni;};
		inline	void setNombre    (string nombre)    {nombre_=nombre;};
		inline	void setApellidos (string apellidos) {apellidos_=apellidos;};
		inline	void setDireccion (string direccion) {direccion_=direccion;};
		inline	void setEdad      (int    edad)      {edad_=edad;};
		inline	string   getDNI      		 () const {return dni_;};
		inline	string   getNombre   		 () const {return nombre_;};
		inline	string   getApellidos 		 () const {return apellidos_;};
		inline	string   getDireccion		 () const {return direccion_;};
		inline  int      getEdad			 () const {return edad_;};
};

#endif