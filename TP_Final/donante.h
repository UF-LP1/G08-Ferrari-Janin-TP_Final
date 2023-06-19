#pragma once

#include "libreria.h"
#include "paciente.h"
#include "registro.h"
#include "fluido.h"

class cDonante: public cPaciente {

public:
	cDonante( bool enf_sangre, bool tatuaje, bool donacion,
		string nombre, string DNI, char sexo, string tel_contacto, int edad, float peso,cFluido* fluidos);
	~cDonante();

int get_edad();
float get_peso();
bool get_enfsangre();
bool get_tatuaje();
bool get_donacion();
time_t get_fecha_extraccion();
void imprimir() {}
string to_string();
void pp(){}

private:
	time_t fecha_extraccion;
	bool enf_sangre;
	bool tatuaje; //true si no se hizo tatuajes hace menos de dos meses
				  //false si se hizo tatuajes hace menos de dos meses
	bool donacion;//true si no se realizo donaciones hace menos de dos meses
				  //false si realizo donaciones hace menos de dos meses
};
