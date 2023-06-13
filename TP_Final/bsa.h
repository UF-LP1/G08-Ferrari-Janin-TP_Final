#pragma once

#include "libreria.h"
#include "donante.h"
#include "receptor.h"
#include "cds.h"
#include "lista.h"

class cBSA {

public:
	cBSA(int cant_donaciones);
	~cBSA();

void set_cant_donaciones(int n_cant_don);

private:
	int cant_donaciones;
	//list<cReceptor*> Lista_receptores;
	cLista<cCDS*> Lista_centrosds;
};

