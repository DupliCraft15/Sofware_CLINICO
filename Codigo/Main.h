#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

#include "Paciente.h"
#include "Tratamiento.h"
#include "Citas.h"

using namespace std;

void pausa();
bool compruebaDNI(string dni);
bool compruebaDia(string dia);
bool compruebaMes(string mes);
bool compruebaAno(string ano);


void OpcionesPaciente(list<Paciente> &pacientes_);
bool AnadirPaciente(list<Paciente> &pacientes_);
void BuscarPaciente(list<Paciente> &pacientes_);
void ModificarPaciente(list<Paciente> &pacientes_);
bool BorrarPaciente(list<Paciente> &pacientes_);
list <Paciente> leerFicheroPacientes (string ruta);
void Calendario(list <Cita> &citas_);



void OpcionesTratamiento(list <Tratamiento> &tratamientos_);
void AnadirTratamiento(list<Tratamiento> &tratamientos_);
void ConsultarTratamiento(list<Tratamiento> &tratamientos_);
void ModificarTratamiento(list<Tratamiento> &tratamientos_);
bool BorrarTratamiento(list<Tratamiento> &tratamientos_);
list <Tratamiento> leerFicheroTratamientos (string ruta);

void OpcionesCita(list <Cita> &citas_);
void AnadirCita(list <Cita> &citas_);
void ModificarCita(list <Cita> &citas_);
void BuscarCita(list <Cita> &citas_);
bool BorrarCita(list <Cita> &citas_);
list <Cita> leerFicheroCitas (string ruta);



#endif



