#pragma once

#include "libreria.h"
#include "paciente.h"

class cReceptor :public cPaciente {

public:
	cReceptor() {}
	cReceptor(string fluido_recibir,string fagr_lespera,int prioridad,enum e_estado estado,
		string nombre, string fecha_nac, char sexo, string tel_contacto, int edad, float peso);
	~cReceptor();

private:
	string fluido_recibir;
	string fagr_lespera;//fecha en la que fue agregado a la lista de espera
	int prioridad;
	enum e_estado estado;
};
