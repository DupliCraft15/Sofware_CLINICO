#ifndef TRATAMIENTO_H
#define TRATAMIENTO_H
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <list>
#include "Main.h"
#include "Paciente.h"
using namespace std;

void OpcionesTratamiento();

class Tratamiento:
{
private:
	string nombredeltratamiento_;
	string duracion_;

public:

	Tratamiento(string nombredeltratamiento="",string duracion=""):{}
	inline void setNombredeltratamiento(string nombredeltratamiento) {nombredeltratamiento_=nombredeltratamiento;};
	inline void setDuracion(string duracion) {duracion_=duracion;};

	inline string getDuracion() {return duracion_;};
	inline string getNombredeltratamiento() {return nombredeltratamiento_;};
};









#endif