#pragma once

#include "libreria.h"
#include "fluido.h"

class cMedula: public cFluido {

public: 
	cMedula(bool HLA_compatible, string tipo, char Rh, time_t fecha_max);
	~cMedula();
	void fecha_m();

private:
	bool HLA_compatible;
}
