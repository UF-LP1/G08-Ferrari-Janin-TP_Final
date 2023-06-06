#include "receptor.h"

cReceptor::cReceptor(string fluido_recibir, string fagr_lespera, int prioridad, enum e_estado estado,
	string nombre, string fecha_nac, char sexo, string tel_contacto, int edad, float peso)
	:cPaciente(nombre, fecha_nac, sexo, tel_contacto, edad, sexo) {

	this->fluido_recibir = fluido_recibir;
	this->fagr_lespera = fagr_lespera;
	this->prioridad = prioridad;
	this->estado = estado;
}

cReceptor::~cReceptor() {
}