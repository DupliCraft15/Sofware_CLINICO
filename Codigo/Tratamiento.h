#ifndef TRATAMIENTO_H
#define TRATAMIENTO_H
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <list>
using namespace std;

class Tratamiento
{
private:
	string dni_,nombreTratamiento_;
	string duracion_;

public:

	Tratamiento(string dni="", string nombreTratamiento="",string duracion=""){
        dni_=dni;
        nombreTratamiento_=nombreTratamiento;
        duracion_=duracion;
	}
	inline void setNombreTratamiento(string nombreTratamiento) {nombreTratamiento_=nombreTratamiento;};
	inline void setDuracion(string duracion) {duracion_=duracion;};
	inline void setDNI       (string dni)       {dni_=dni;};

	inline string getDNI     () const {return dni_;};
	inline string getDuracion() const{return duracion_;};
	inline string getNombreTratamiento() const{return nombreTratamiento_;};
};


#endif