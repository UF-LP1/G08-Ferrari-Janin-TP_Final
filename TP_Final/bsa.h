#pragma once

#include "libreria.h"
#include "donante.h"
#include "receptor.h"
#include "cds.h"

class cBSA {

public:
	cBSA(int cant_donaciones);
	~cBSA();

void set_cant_donaciones(int n_cant_don);
bool cumple_rdonacion(cDonante donante_ver);//funcion que verifica si un donador
											//cumple los requisitos para ser donador


private:
	int cant_donaciones;
	list<cReceptor> Lista_receptores;
	list<cDonante> Lista_donantes;
	list<cCDS> Lista_centrosds;
};

