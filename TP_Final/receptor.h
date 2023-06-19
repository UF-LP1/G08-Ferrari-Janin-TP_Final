#pragma once

#include "libreria.h"
#include "paciente.h"
#include "enumestado.h"

class cReceptor :public cPaciente {

public:
	cReceptor(int prioridad,enum e_estado estado,string nombre, string DNI, string fecha_nac,char sexo, string tel_contacto, int edad, float peso,cFluido* fluidos);
	~cReceptor();
	void pp() {}
	int get_prioridad();
	void set_prioridad(int prioridad_nueva);
	e_estado get_estado();
	void set_estado(e_estado estado_nuevo);
	time_t get_fagr_lespera();
	string to_string(); 
	void imprimir();

private:
	time_t fagr_lespera;//fecha en la que fue agregado a la lista de espera
	int prioridad;
	enum e_estado estado;
};
