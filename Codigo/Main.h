#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

#include "Paciente.h"
#include "Tratamiento.h"

using namespace std;

void pausa();

void OpcionesPaciente(list<Paciente> &pacientes_);
bool AnadirPaciente(list<Paciente> &pacientes_);
void BuscarPaciente(list<Paciente> &pacientes_);
void ModificarPaciente(list<Paciente> &pacientes_);
int BorrarPaciente(list<Paciente> &pacientes_);
list <Paciente> leerFicheroPacientes (string ruta);


void OpcionesTratamiento(list <Paciente> &pacientes_);
void AnadirTratamiento(list<Paciente> &pacientes_);
void ConsultarTratamiento(list<Paciente> pacientes_);
void ModificarTratamiento(list<Paciente> &pacientes_);
void BorrarTratamiento(list<Paciente> &pacientes_);
#endif



