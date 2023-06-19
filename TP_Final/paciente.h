#pragma once
 
#include "libreria.h"
#include "fluido.h"

class cPaciente {

public:
	cPaciente(string nombre, string DNI, string fecha_nac, char sexo, string tel_contacto, int edad, float peso, cFluido* fluidos);
	~cPaciente();
	virtual void pp() = 0;
	cFluido* get_fluido();
	string get_DNI();
	

protected:
	string nombre;
	string DNI;
	string fecha_nac;
	char sexo;
	string tel_contacto;
	int edad;
	float peso;
	cFluido* fluidos;
};