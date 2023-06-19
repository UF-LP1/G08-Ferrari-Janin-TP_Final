#include "plasma.h"

cPlasma::cPlasma(const int t_plasma, tipo tipo_s, char Rh) :cFluido(tipo_s, Rh), t_plasma(365)
{
}

cPlasma::~cPlasma() {
}

bool cPlasma::fecha_m(time_t fecha_e) {
	bool cumple = false;
	double segundos;
	int dias;

	time_t ahora;
	time(&ahora);//obtengo el tiempo actual y lo almaceno en mi variable ahora
	tm* f_ac = new tm;
	localtime_s(f_ac, &ahora);//asigno la estructura tm de mi tiempo actual a f_ac

	segundos = difftime(ahora, fecha_e);
	dias = segundos / segsxdia;

	if (dias <= this->t_plasma)
		cumple = true;
	else
		cumple = false;

	delete f_ac;
	return cumple;
}