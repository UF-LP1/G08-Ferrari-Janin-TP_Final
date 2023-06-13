#include "cds.h"
#include <list>

cCDS::cCDS(string nombre, string direccion, string partido, string provincia, unsigned int telefono) {

	this->nombre = nombre;
	this->direccion = direccion;
	this->partido = partido;
	this->provincia = provincia;
	this->telefono = telefono;

}

cCDS::~cCDS() {
}

bool cCDS::cumple_rdonacion(cDonante* donante_ver) {

	int edad_v = donante_ver->get_edad();
	float peso_v = donante_ver->get_peso();
	bool enfer_v = donante_ver->get_enfsangre();
	bool tat_v = donante_ver->get_tatuaje();
	bool don_v = donante_ver->get_donacion();

	if (18 <= edad_v <= 65 && peso_v > 50 && enfer_v == true && tat_v == true && don_v == true)
		return true;
	else
		return false;
}

void cCDS::agregar_lista(cPaciente* paciente)
{
	if (dynamic_cast<cReceptor*>(paciente) != nullptr)
	{
		cReceptor* aux_r = dynamic_cast<cReceptor*>(paciente);
		//Lista_receptores.push_back(aux_r);
		if (aux_r != nullptr) {
			this->Lista_receptores + aux_r;
		}
	}
	else if (dynamic_cast<cDonante*>(paciente) != nullptr)
	{
		cDonante* aux_d = dynamic_cast<cDonante*>(paciente);
		if (cumple_rdonacion(aux_d) == true)
		{
			this->Lista_donantes + aux_d;
		}
		return;
	}
}

cLista<cDonante*> cCDS::get_lista_donante(){
	return this->Lista_donantes;
}

cLista<cReceptor*> cCDS::get_lista_receptor(){
	return this->Lista_receptores;
}


void cCDS::ordenar_lista() {

	sort(Lista_receptores.begin(), Lista_receptores.end(), miComparacion);
	return;
}

bool cCDS:: miComparacion(cReceptor Left, cReceptor Right) {
	return Left.get_prioridad() < Right.get_prioridad();
}
