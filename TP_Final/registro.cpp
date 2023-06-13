#include "registro.h"

cRegistro::cRegistro(string fluido_donar, time_t fecha_extr, float volumen, string cds) {

	this->fluido_donar = fluido_donar;
	this->fecha_extr = fecha_extr;
	this->volumen = volumen;
	this->cds = cds;
}

cRegistro::~cRegistro() {
}