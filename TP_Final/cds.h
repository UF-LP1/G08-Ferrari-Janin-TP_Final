#pragma once

#include "libreria.h"

class cCDS {

public: 
	cCDS(string nombre,string direccion,string partido,string provincia,unsigned int telefono);
	~cCDS();

private:
	string nombre;
	string direccion;
	string partido;
	string provincia;
	unsigned int telefono;
};
