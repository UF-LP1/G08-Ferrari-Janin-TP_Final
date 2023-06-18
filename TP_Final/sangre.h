#pragma once

#include "libreria.h"
#include "fluido.h"

class cSangre : public cFluido{

public:
	cSangre(string tipo, char Rh, time_t fecha_max);
	~cSangre();
	void fecha_m();
};