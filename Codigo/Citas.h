#ifndef CITA_H
#define CITA_H
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <stdlib.h>
#include "Main.h"
#include "Paciente.h"
#include "Tratamiento.h"

void OpcionesCita();

class Cita
{
	private:
	int day,month,year,identificador;
	string motivo_;


	public:

	Cita(int day_=0,month_=0,year_=0,string motivo_=""){}

	inline void setDay(string day) {day_=fecha;};
	inline void setMonth(string moth) {month_=fecha;};
	inline void setYear(string year) {year_=fecha;};
	inline void setMotivo(string motivo) {motivo_=motivo;};

	void setIdentificador() {
		identificador=rand()%100;
		identificador_=identificador;
	}


	inline int geDay() {return day_;};
	inline int getMonth() {return month_;};
	inline int getYear() {return year_;};
	inline int getIdentificador(){return identificador_;};
	inline string getMotivo() {return motivo_;};
	};


	void MostrarHistorialCitas();






#endif