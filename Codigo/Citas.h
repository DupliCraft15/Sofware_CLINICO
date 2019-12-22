#ifndef CITA_H
#define CITA_H
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <stdlib.h>
#include "Main.h"
#include "Paciente.h"
#include "Tratamiento.h"


class Cita
{
	private:
	int day_,month_,year_,hora_;
	string motivo_,dni_;


	public:

	Cita(string dni_= "", int hora_=0,int day_=0,month_=0,year_=0, string motivo_=""){}

	inline void setDay(string day) {day_=day;};
	inline void setMonth(string month) {month_=month;};
	inline void setYear(string year) {year_=year;};
	inline void setMotivo(string motivo) {motivo_=motivo;};
	inline void setTime(string hora) {hora_=hora;}
	inline	void setDNI(string dni) {dni_=dni;};


	inline int getDay() {return day_;};
	inline int getMonth() {return month_;};
	inline int getYear() {return year_;};
	inline int getTime(){return time_;};
	inline string getMotivo() {return motivo_;};
	inline	string getDNI() {return dni_;};
	};


	void MostrarHistorialCitas();






#endif