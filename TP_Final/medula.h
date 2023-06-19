#pragma once

#include "libreria.h"
#include "fluido.h"

class cMedula : public cFluido {

public:
	cMedula(bool HLA_compatible, const int t_medula, tipo tipo_s, char Rh);
	~cMedula();
	bool fecha_m(time_t fecha_e);
	string to_string();
	void imprimir();

private:
	bool HLA_compatible;
	const int t_medula;
};
