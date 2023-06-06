#include "donante.h"


cDonante::cDonante(list<registro> Lista_registros, bool enf_sangre, bool tatuaje, bool donacion, string nombre, string fecha_nac, char sexo, string tel_contacto, int edad, float peso)
	:cPaciente(nombre, fecha_nac, sexo, tel_contacto, edad, sexo)
{
	this->Lista_registros = Lista_registros;
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