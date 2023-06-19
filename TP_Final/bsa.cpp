#include "bsa.h"
#include <list>

cBSA::cBSA(){
}

cBSA::~cBSA() {
}

void cBSA::agregar_centro(cCDS* centro_agregar)
{
	Lista_centrosds + centro_agregar;
	return;
}

bool cBSA::ProtocolodeTransplante(cDonante* donante, cReceptor* receptor)
{
	cCDS* centro_aux_don = nullptr;
	cCDS* centro_aux_rec = nullptr;
	bool d, r = false;
	list<cCDS*>::iterator it = Lista_centrosds.begin();
	while (it != Lista_centrosds.end() && d == false && r == false)//el while va a terminar cuando se encuentre
		//los centros de salud tanto del donante como del recpetor o cuando termina
		//termine la lista de centor de salud
	{
		if ((*it)->buscar_paciente(donante) != nullptr)//busco en que centro de salud esta el donante
		{
			centro_aux_don = *it;
			d = true;
		}
		else if ((*it)->buscar_paciente(receptor) != nullptr)
		{
			centro_aux_rec = *it;
			r = true;
		}

		it++;
	}
	if (centro_aux_don->get_partido() == centro_aux_rec->get_partido() &&
		centro_aux_don->get_provincia() == centro_aux_rec->get_provincia())
		return true;
	else
		return false;
}

cLista<cReceptor*> cBSA::lista_receptores(cDonante* don)
{
	cLista<cReceptor*> lista_r;
	cFluido* fluido_aux;
	list<cCDS*>::iterator it1 = Lista_centrosds.begin();
	while (it1 != Lista_centrosds.end())
	{
		if ((*it1)->buscar_paciente(don) != nullptr)
		{
			fluido_aux = dynamic_cast<cSangre*>(don->get_fluido());
			if (fluido_aux != nullptr)
			{
				lista_r = (*it1)->lista_sangre();
				(*it1)->ordenar_lista(lista_r);
			}
			fluido_aux = dynamic_cast<cPlasma*>(don->get_fluido());
			if (fluido_aux != nullptr)
			{
				lista_r = (*it1)->lista_plasma();
				(*it1)->ordenar_lista(lista_r);
			}
			fluido_aux = dynamic_cast<cMedula*>(don->get_fluido());
			if (fluido_aux != nullptr)
			{
				lista_r = (*it1)->lista_medula();
				(*it1)->ordenar_lista(lista_r);
			}
		}
		it1++;
	}
	return lista_r;
}

void cBSA::imprimir()
{
		list<cCDS*>::iterator it = this->Lista_centrosds.begin();
		while (it != Lista_centrosds.end())
		{
			cout << *it; //*(*it)
			it++;
		}
}

cReceptor* cBSA::match(cDonante* don)
{
	cReceptor* receptor_aux;
	bool cumple_protocolo;
	cLista<cReceptor*> lista = lista_receptores(don);
	list<cReceptor*>::iterator it = lista.begin();
	while (it != lista.end())// como la lista ya esta ordenada, solo tengo que recorrerla hasta que 
							//aparezca un receptor que cumpla el protocolo de transplante
	{
		receptor_aux = *it;
		cumple_protocolo = ProtocolodeTransplante(don, receptor_aux);
		if (cumple_protocolo == true)
			return receptor_aux;
		it++;
	}
	return nullptr;
}





