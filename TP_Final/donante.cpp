#include "donante.h"


cDonante::cDonante( bool enf_sangre, bool tatuaje, bool donacion, string nombre, string DNI, char sexo, string tel_contacto, int edad, float peso, cFluido* fluidos)
	:cPaciente (nombre, DNI,fecha_nac, sexo, tel_contacto, edad, sexo, fluidos)
{
	this->enf_sangre = enf_sangre;
	this->tatuaje = tatuaje;
	this->donacion = donacion;
}

cDonante::~cDonante() {
}

int cDonante::get_edad() {
	return this->edad;
}

float cDonante::get_peso() {
	return this->peso;
}

bool cDonante:: get_enfsangre() {
	return this->enf_sangre;
}

bool cDonante::get_tatuaje() {
	return this->tatuaje;
}

bool cDonante::get_donacion() {
	return this->donacion;
}

time_t cDonante::get_fecha_extraccion()
{
	return this->fecha_extraccion;
}

string cDonante::to_string()
{
	stringstream salida;
	cout << "Posee enfermedades que sean trandsmitadas por sangre:" << this->enf_sangre << ". Se ha relizado un tatuaje hace menos de dos meses:"
		<< this->tatuaje << ". Ha realizado donaciones hace menos de dos meses: " << this->donacion;
	return salida.str();
}

void cDonante::imprimir()
{
	cout << to_string() << endl;
	return;
}

