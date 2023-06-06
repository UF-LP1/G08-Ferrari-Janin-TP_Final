#pragma once
 
#include "libreria.h"

class cPaciente {

public:
	cPaciente(string nombre, string fecha_nac, char sexo,string tel_contacto,int edad,float peso);
	~cPaciente();

protected:
	string nombre;
	string fecha_nac;
	char sexo;
	string tel_contacto;
	int edad;
	float peso;

};