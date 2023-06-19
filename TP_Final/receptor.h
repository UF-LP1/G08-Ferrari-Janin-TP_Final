#pragma once

#include "libreria.h"
#include "paciente.h"
#include "enumestado.h"

class cReceptor :public cPaciente {

public:
	cReceptor(time_t fagr_lespera,int prioridad,enum e_estado estado,
		string nombre, string DNI,time_t fecha_nac, char sexo, string tel_contacto, int edad, float peso,cFluido* fluidos);
	~cReceptor();
	void pp() {}
	int get_prioridad();
	e_estado get_estado();
	time_t get_fagr_lespera();
	string to_string(); 
	void imprimir();

private:
	time_t fagr_lespera;//fecha en la que fue agregado a la lista de espera
	int prioridad;
	enum e_estado estado;
};
