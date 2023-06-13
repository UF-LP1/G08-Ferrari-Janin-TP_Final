#pragma once

#include "libreria.h"

class cRegistro {

public:
	cRegistro(string fluido_donar,time_t fecha_extr,float volumen, string cds);
	~cRegistro();

private:
	string fluido_donar;
	time_t fecha_extr;
	float volumen;
	string cds;
};