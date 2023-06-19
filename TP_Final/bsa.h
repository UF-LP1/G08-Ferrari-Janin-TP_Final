#pragma once

#include "libreria.h"
#include "donante.h"
#include "receptor.h"
#include "cds.h"
#include "lista.h"

class cBSA {

public:
	cBSA();
	~cBSA();

cPaciente* match(cDonante* don);
bool ProtocolodeTransplante(cDonante* donante, cReceptor* receptor);
cLista<cReceptor*> lista_receptores(cDonante* don);
void imprimir();

private:
	cLista<cCDS*> Lista_centrosds;
};

