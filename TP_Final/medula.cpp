#include "medula.h"

cMedula::cMedula (bool HLA_compatible, string tipo, char Rh, time_t fecha_max):cFluido(tipo,Rh,fecha_max)
{
	this->HLA_compatible = HLA_compatible;
}

cMedula::~cMedula() {
}

void cMedula::fecha_m()
{
}
