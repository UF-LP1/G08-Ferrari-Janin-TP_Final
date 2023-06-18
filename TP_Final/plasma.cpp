#include "plasma.h"

cPlasma::cPlasma(string tipo, char Rh, time_t fecha_max):cFluido(tipo, Rh, fecha_max) {
}

cPlasma::~cPlasma() {
}

void cPlasma::fecha_m() {
	return;
}