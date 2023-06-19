#include "receptor.h"

cReceptor::cReceptor( int prioridad, enum e_estado estado,
	string nombre, string DNI, string fecha_nac,char sexo, string tel_contacto, int edad, float peso, cFluido* fluidos)
	:cPaciente(nombre, DNI, fecha_nac,sexo, tel_contacto, edad, sexo, fluidos)
{

	this->prioridad = prioridad;
	this->estado = estado;
}

cReceptor::~cReceptor() {
}


int cReceptor::get_prioridad() {
	return this->prioridad;
}

void cReceptor::set_prioridad(int prioridad_nueva)
{
	this->prioridad = prioridad_nueva;
	return;
}

e_estado cReceptor::get_estado() {
	return this->estado;
}

void cReceptor::set_estado(e_estado estado_nuevo)
{
	this->estado = estado_nuevo;
	return;
}

time_t cReceptor::get_fagr_lespera() {
	return this->fagr_lespera;
}

string cReceptor::to_string()
{
	stringstream salida;
	salida << "Nombre:" << this->nombre << ". DNI:" << this->DNI << ". Sexo:" << this->sexo << ". Telefono de contacto:" << this->tel_contacto << ". Edad:" << this->edad << ". Peso: " << this->peso <<
		". Fluido que dona: " << this->fluidos <<". Fecha agregado a la lista de espera: " << this->fagr_lespera << ". Prioridad: " <<
		this->prioridad << ". Estado:" << this->estado << endl;
	return salida.str();
}

void cReceptor::imprimir()
{
	cout << to_string() << endl;
	return;
}
