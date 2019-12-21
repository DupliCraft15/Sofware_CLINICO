#ifndef CITA_H
#define CITA_H
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <stdlib.h>
#include "Main.h"

void OpcionesCita();

class Tratamiento : public Paciente
{
	private:
	string fecha_;
	string motivo_;

	public:
	Tratamiento(string fecha="",string motivo=""):
	Paciente(dni,nombre,apellidos,edad,direccion)
	{
		fecha=fecha_;
		motivo=motivo_;
	}
	inline void setFecha(string fecha) {fecha=fecha_;};
	inline string getFecha() {return fecha_;};
	inline void setMotivo(string motivo) {motivo=motivo_;};
	inline string getMotivo() {return motivo_;};

	//faltan mostrar agenda y mostrar historial
};









#endif