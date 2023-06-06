#pragma once

#include "libreria.h"
#include "paciente.h"
#include "registro.h"

class cDonante: public cPaciente {

public:
	cDonante(list<registro> Lista_registros, bool enf_sangre, bool tatuaje, bool donacion, 
		string nombre, string fecha_nac, char sexo, string tel_contacto, int edad, float peso);
	~cDonante();

int get_edad();
float get_peso();
bool get_enfsangre();
bool get_tatuaje();
bool get_donacion();

private:
	list<registro> Lista_registros; //lista de registros de las donaciones que realiza
	bool enf_sangre;
	bool tatuaje; //true si no se hizo tatuajes hace menos de dos meses
				  //false si se hizo tatuajes hace menos de dos meses
	bool donacion;//true si no se realizo donaciones hace menos de dos meses
				  //false si realizo donaciones hace menos de dos meses
};
