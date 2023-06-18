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
cPaciente* match(cDonante* don);
bool ProtocolodeTransplante(cDonante* donante, cReceptor* receptor);

private:
	int cant_donaciones;
	cLista<cCDS*> Lista_centrosds;
};

