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
	string fecha_;
	string motivo_;

	public:

	Cita(string fecha_="",string motivo_=""){}

	inline void setFecha(string fecha) {fecha_=fecha;};
	inline void setMotivo(string motivo) {motivo_=motivo;};
	inline string getFecha() {return fecha_;};
	inline string getMotivo() {return motivo_;};
	};


	void MostrarHistorialCitas();






#endif