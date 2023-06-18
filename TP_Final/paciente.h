#pragma once
 
#include "libreria.h"
#include "fluido.h"

class cPaciente {

public:
	cPaciente(string nombre, time_t fecha_nac, char sexo,string tel_contacto,int edad,float peso,cFluido* fluidos);
	~cPaciente();
	virtual void pp() = 0;
	cFluido* get_fluido();

protected:
	string nombre;
	time_t fecha_nac;
	char sexo;
	string tel_contacto;
	int edad;
	float peso;
	cFluido* fluidos;
};