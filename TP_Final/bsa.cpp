#include "bsa.h"
#include <list>

cBSA::cBSA(int cant_donaciones){
}

cBSA::~cBSA() {
}

void cBSA::set_cant_donaciones(int n_cant_donaciones) {
	cant_donaciones = n_cant_donaciones;
	return;
}

cPaciente* cBSA::match(cDonante* don)
{
	cFluido* aux = dynamic_cast<cSangre*>(don->get_fluido());
	if (aux != nullptr)
	{

	}
}

bool cBSA::ProtocolodeTransplante(cDonante* donante,cReceptor* receptor)
{

}


