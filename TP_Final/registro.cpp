#include "registro.h"

registro::registro(string fluido_donar, string fecha_extr, float volumen, string cds) {

	this->fluido_donar = fluido_donar;
	this->fecha_extr = fecha_extr;
	this->volumen = volumen;
	this->cds = cds;
}

registro::~registro() {
}