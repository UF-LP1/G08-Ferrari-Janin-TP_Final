#include "bsa.h"

cBSA::cBSA(int cant_donaciones, list<cReceptor*> Lista_receptores, list<cDonante*> Lista_donantes, list<cCDS*> Lista_centrosds) {
	this->cant_donaciones = cant_donaciones;
}

cBSA::~cBSA() {
}

void cBSA::set_cant_donaciones(int n_cant_donaciones) {
	cant_donaciones = n_cant_donaciones;
	return;
}

bool cBSA::cumple_rdonacion(cDonante donante_ver) {

	int edad_v = donante_ver.get_edad();
	float peso_v = donante_ver.get_peso();
	bool enfer_v = donante_ver.get_enfsangre();
	bool tat_v = donante_ver.get_tatuaje();
	bool don_v = donante_ver.get_donacion();

	if (18 <= edad_v <= 65 && peso_v > 50 && enfer_v == true && tat_v == true && don_v == true)
		return true;
	else
		return false;
}

void cBSA::agregar_lista(cPaciente* paciente, list<cReceptor*> Lista_receptores, list<cDonante*> Lista_donantes) {
	
	if (dynamic_cast<cReceptor*>(paciente) != nullptr)
	{
		cReceptor* aux_r = dynamic_cast<cReceptor*>(paciente);
		Lista_receptores.push_back(aux_r);
	}
	else if (dynamic_cast<cDonante*>(paciente) != nullptr)
	{
		cDonante* aux_d = dynamic_cast<cDonante*>(paciente);
		Lista_donantes.push_back(aux_d);
	}
	return;
};