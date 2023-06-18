#include "paciente.h"

cPaciente::cPaciente(string nombre, time_t fecha_nac, char sexo, string tel_contacto, int edad, float peso, cFluido* fluidos) {

	this->nombre = nombre;
	this->fecha_nac = fecha_nac;
	this->sexo = sexo;
	this->tel_contacto = tel_contacto;
	this->edad = edad;
	this->peso = peso;
	this->fluidos = fluidos;
};

cPaciente::~cPaciente() {
}

cFluido* cPaciente::get_fluido()
{
	return this->fluidos;
}


