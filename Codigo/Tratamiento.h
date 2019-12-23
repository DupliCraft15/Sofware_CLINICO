#ifndef TRATAMIENTO_H
#define TRATAMIENTO_H
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <list>
using namespace std;

void OpcionesTratamiento();

class Tratamiento
{
private:
	string nombreTratamiento_;
	string duracion_;

public:

	Tratamiento(string nombreTratamiento="",string duracion=""){
        nombreTratamiento_=nombreTratamiento;
        duracion_=duracion;
	}
	inline void setNombreTratamiento(string nombreTratamiento) {nombreTratamiento_=nombreTratamiento;};
	inline void setDuracion(string duracion) {duracion_=duracion;};

	inline string getDuracion() {return duracion_;};
	inline string getNombreTratamiento() {return nombreTratamiento_;};
};








#endif