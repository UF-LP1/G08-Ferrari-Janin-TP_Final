#include "paciente.h"

cPaciente::cPaciente(string nombre, time_t fecha_nac, char sexo, string tel_contacto, int edad, float peso) {

	this->nombre = nombre;
	this->fecha_nac = fecha_nac;
	this->sexo = sexo;
	this->tel_contacto = tel_contacto;
	this->edad = edad;
	this->peso = peso;
};

cPaciente::~cPaciente() {
};


