#pragma once

#include "libreria.h"
#define segsxdia 86400
enum tipo { A, B, AB, O };

class cFluido {

private:
	tipo tipo_s;//tipo de sangre
	char Rh;
	time_t fecha_max;

public:
	cFluido(tipo tipo_s, char Rh, time_t fecha_max);
	~cFluido();
	virtual bool fecha_m(time_t fecha_e) = 0;
	tipo get_tipo();
	bool operator==(cFluido* fluido);
	string to_string();
	void imprimir();
};
