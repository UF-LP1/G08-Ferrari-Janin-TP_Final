#pragma once

#include "plasma.h"
#include "fluido.h"

class cPlasma : public cFluido{

private:
	bool HLA_compatible;

public: 
	cPlasma(string tipo, char Rh, time_t fecha_max);
	~cPlasma();
	void fecha_m();
};