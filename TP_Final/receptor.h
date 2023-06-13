#pragma once

#include "libreria.h"
#include "paciente.h"
#include "enumestado.h"

class cReceptor :public cPaciente {

public:
	cReceptor(string fluido_recibir,time_t fagr_lespera,int prioridad,enum e_estado estado,
		string nombre, time_t fecha_nac, char sexo, string tel_contacto, int edad, float peso);
	~cReceptor();
	void pp() {}
	string get_fluido_recibir();
	int get_prioridad();
	e_estado get_estado();
	time_t get_fagr_lespera();

private:
	string fluido_recibir;
	time_t fagr_lespera;//fecha en la que fue agregado a la lista de espera
	int prioridad;
	enum e_estado estado;
};
