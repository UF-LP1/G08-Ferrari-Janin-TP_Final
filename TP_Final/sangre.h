#pragma once

#include "libreria.h"
#include "fluido.h"

class cSangre : public cFluido{
private:
	const int t_sangre;


public:
	cSangre(const int t_sangre,tipo tipo_s, char Rh);
	~cSangre();
	bool fecha_m(time_t fecha_e);
	string to_string();
	void imprimir();
};