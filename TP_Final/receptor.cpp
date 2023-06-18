#include "receptor.h"

cReceptor::cReceptor(time_t fagr_lespera, int prioridad, enum e_estado estado,
	string nombre, time_t fecha_nac, char sexo, string tel_contacto, int edad, float peso, cFluido* fluidos)
	:cPaciente(nombre, fecha_nac, sexo, tel_contacto, edad, sexo,fluidos) {


	this->fagr_lespera = fagr_lespera;
	this->prioridad = prioridad;
	this->estado = estado;
}

cReceptor::~cReceptor() {
}


int cReceptor::get_prioridad() {
	return this->prioridad;
}

e_estado cReceptor::get_estado() {
	return this->estado;
}

time_t cReceptor::get_fagr_lespera() {
	return this->fagr_lespera;
}