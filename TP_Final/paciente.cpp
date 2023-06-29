#include "paciente.h"

cPaciente::cPaciente(string nombre, string DNI, string fecha_nac, char sexo, string tel_contacto, int edad, float peso, cFluido* fluidos) {

	this->nombre = nombre;
	this->DNI = DNI;
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

string cPaciente::get_DNI()
{
	return this->DNI;
}

bool cPaciente::operator==(cPaciente* p_verificar)
{
	if (this->nombre == p_verificar->nombre && this->DNI == p_verificar->DNI)
		return true;
	else
		return false;
}







