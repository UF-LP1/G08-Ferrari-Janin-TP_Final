#pragma once

#include "plasma.h"
#include "fluido.h"

class cPlasma : public cFluido{

private:
	const int t_plasma;

public: 
	cPlasma(const int t_plasma,tipo tipo_s, char Rh);
	~cPlasma();
	bool fecha_m(time_t fecha_e);
};