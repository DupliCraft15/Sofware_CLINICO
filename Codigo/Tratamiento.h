#ifndef TRATAMIENTO_H
#define TRATAMIENTO_H
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <list>
#include "Main.h"
using namespace std;

void OpcionesTratamiento();

class Tratamiento : public Paciente
{
	private:
	string nombredeltratamiento_;
	string duracion_;

	public:
	Tratamiento(string nombredeltratamiento="",string duracion=""):
	Paciente(dni,nombre,apellidos,edad,direccion)
	{
		nombredeltratamiento=nombredeltratamiento_;
		duracion=duracion_;
	}
	inline void setNombredeltratamiento(string nombredeltratamiento) {nombredeltratamiento=nombredeltratamiento_;};
	inline string getNombredeltratamiento() {return nombredeltratamiento_;};
	inline void setDuracion(string duracion) {duracion=duracion_;};
	inline string getDuracion() {return duracion_;};
};









#endif