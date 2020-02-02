#ifndef CITA_H
#define CITA_H
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <list>
using namespace std;

class Cita
{
	private:
	string day_,month_,year_,hora_;
	string motivo_,dni_;


	public:

	Cita(string dni= "", string hora="",string day="",string month="",string year="", string motivo=""){
        dni_=dni;
        hora_=hora;
        day_=day;
        month_=month;
        year_=year;
        motivo_=motivo;
	}



	inline void setDay(string day) {day_=day;};
	inline void setMonth(string month) {month_=month;};
	inline void setYear(string year) {year_=year;};
	inline void setMotivo(string motivo) {motivo_=motivo;};
	inline void setTime(string hora) {hora_=hora;}
	inline	void setDNI(string dni) {dni_=dni;};


	inline string getDay() {return day_;};
	inline string getMonth() {return month_;};
	inline string getYear() {return year_;};
	inline string getTime(){return hora_;};
	inline string getMotivo() {return motivo_;};
	inline string getDNI() {return dni_;};
	};



#endif