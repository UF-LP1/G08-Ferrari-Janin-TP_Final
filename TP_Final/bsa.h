#pragma once
//hola
#include "libreria.h"
#include "donante.h"
#include "receptor.h"
#include "cds.h"
#include "lista.h"

class cBSA {

public:
	cBSA();
	~cBSA();

	void agregar_centro(cCDS* centro_agregar);
	cReceptor* match(cDonante* don);
	bool ProtocolodeTransplante(cDonante* donante, cReceptor* receptor);
	cLista<cReceptor*> lista_receptores(cDonante* don);
	void imprimir();

private:
	cLista<cCDS*> Lista_centrosds;
	friend class cCDS;
};

