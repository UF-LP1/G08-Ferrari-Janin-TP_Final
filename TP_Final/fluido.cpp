#include "fluido.h"


cFluido::cFluido(string tipo, char Rh, time_t fecha_max)
{
	this->tipo = tipo;
	this->Rh = Rh;
	this->fecha_max = fecha_max;
}

cFluido::~cFluido() {
}