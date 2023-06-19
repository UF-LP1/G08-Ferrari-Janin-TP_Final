#include "registro.h"

cRegistro::cRegistro(cFluido* fluido_donar, time_t fecha_extr, float volumen) {

	this->fluido_donar = fluido_donar;
	this->fecha_extr = fecha_extr;
	this->volumen = volumen;
}

cRegistro::~cRegistro() {
}

string cRegistro::to_string()
{
	stringstream salida;
	salida << "Fluido que dona: " << this->fluido_donar << ". Fecha de extraccion: " << this->fecha_extr <<
		". Volumen extraido: " << this->volumen << endl;
	return salida.str();
}

void cRegistro::imprimir()
{
	cout << to_string() << endl;
	return;
}
