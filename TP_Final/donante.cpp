#include "donante.h"


cDonante::cDonante(time_t fecha_extraccion, bool enf_sangre, bool tatuaje, bool donacion, string nombre, string DNI, string fecha_nac, char sexo, string tel_contacto, int edad, float peso, cFluido* fluidos)
	:cPaciente(nombre, DNI, fecha_nac, sexo, tel_contacto, edad, sexo, fluidos)
{
	this->fecha_extraccion = fecha_extraccion;
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

bool cDonante::get_enfsangre() {
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
	cout << "Nombre:" << this->nombre << ". DNI:" << this->DNI << ". Sexo:" << this->sexo << ". Telefono de contacto:" << this->tel_contacto << ". Edad:" << this->edad << ". Peso: " << this->peso <<
		". Fluido que dona: " << this->fluidos << ". Posee enfermedades que sean trandsmitadas por sangre:" << this->enf_sangre << ". Se ha relizado un tatuaje hace menos de dos meses:" <<
		this->tatuaje << ". Ha realizado donaciones hace menos de dos meses: " << this->donacion << endl;
	return salida.str();
}

void cDonante::imprimir()
{
	cout << this->to_string() << endl;
	return;
}

