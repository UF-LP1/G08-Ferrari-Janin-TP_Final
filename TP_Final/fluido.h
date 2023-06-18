#pragma once

#include "libreria.h"

class cFluido {

private:
	string tipo;
	char Rh;
	time_t fecha_max;
public: 
	cFluido(string tipo, char Rh, time_t fecha_max);
	~cFluido();
	virtual void fecha_m() = 0;
};
