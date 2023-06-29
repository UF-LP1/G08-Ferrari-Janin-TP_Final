#pragma once

#include "libreria.h"
#include "fluido.h"

class cRegistro {

public:
	cRegistro(cFluido* fluido_donar, time_t fecha_extr, float volumen);
	~cRegistro();
	string to_string();
	void imprimir();

private:
	cFluido* fluido_donar;
	time_t fecha_extr;
	float volumen;
};