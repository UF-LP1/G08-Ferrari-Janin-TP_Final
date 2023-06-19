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


void cCDS::ordenar_lista(cLista<cReceptor*>& lista) 
{
	//sort(lista.begin(), lista.end(), miComparacion);
	lista.sort(&cCDS::miComparacion);
	return;
}

bool cCDS:: miComparacion( cReceptor Left,  cReceptor Right) {
	if (Left.get_prioridad() < Right.get_prioridad())
		return true;
	if (Left.get_estado() > Right.get_estado())
		return true;
	if (Left.get_fagr_lespera() > Right.get_fagr_lespera())
		return true;
	return false;
}

cLista<cReceptor*> cCDS::lista_sangre()
{
	cLista<cReceptor*> lista;
	list<cReceptor*>::iterator it = this->Lista_receptores.begin();

	while (it != Lista_receptores.end())
	{
		cFluido* fluido_r = (*it)->get_fluido();
		cFluido* aux = dynamic_cast<cSangre*>((*it)->get_fluido());
		if (aux != nullptr)
		{
			lista + (*it);
		}
	}
	return lista;
}

cLista<cReceptor*> cCDS::lista_plasma() 
{
	cLista<cReceptor*> lista;
	list<cReceptor*>::iterator it = this->Lista_receptores.begin();

	while (it != Lista_receptores.end())
	{
		cFluido* fluido_r = (*it)->get_fluido();
		cFluido* aux = dynamic_cast<cPlasma*>((*it)->get_fluido());
		if (aux != nullptr)
		{
			lista + (*it);
		}
	}
	return lista;
}

cLista<cReceptor*> cCDS::lista_medula() 
{
	cLista<cReceptor*> lista;
	list<cReceptor*>::iterator it = this->Lista_receptores.begin();

	while (it != Lista_receptores.end())
	{
		cFluido* fluido_r = (*it)->get_fluido();
		cFluido* aux = dynamic_cast<cMedula*>((*it)->get_fluido());
		if (aux != nullptr)
		{
			lista + (*it);
		}
	}
	return lista;
}

cLista<cReceptor*> cCDS::get_lista_receptores()
{
	ordenar_lista(Lista_receptores);
	return this->Lista_receptores;
}

cPaciente* cCDS::buscar_paciente(cPaciente* p_buscar)
{
	cReceptor* aux_r = dynamic_cast<cReceptor*>(p_buscar);
	if (aux_r != nullptr) {
		list<cReceptor*>::iterator it = this->Lista_receptores.begin();
		while (it != Lista_receptores.end())
		{
			if (*it == aux_r)
				return *it;
			it++;
		}
	}
	cDonante* aux_d = dynamic_cast<cDonante*>(p_buscar);
	if (aux_d != nullptr) {
		list<cDonante*>::iterator it = this->Lista_donantes.begin();
		while (it != Lista_donantes.end())
		{
			if (*it == aux_d)
				return *it;
			it++;
		}
	}
	return nullptr;
}

int cCDS::buscar_prioridad_r(string DNI_buscar)
{
	list<cReceptor*>::iterator it = Lista_receptores.begin();
	while (it != Lista_receptores.end())
	{
		if ((*it)->get_DNI() == DNI_buscar)
		{
			int aux = (*it)->get_prioridad();
			return aux;
		}
			it++;
	}
	return 0;//como la prioridad de un paciente va del 1 al 5, si devuelve 0, significa 
			//que no se encontro al paciente
}

string cCDS::to_string()
{
	stringstream salida;
	salida << "Nombre:" << this->nombre << ". Direccion:" << this->direccion << ". Partido:" << this->partido <<
		". Provincia:" << this->provincia << ". Telefono:" << this->telefono;
	return salida.str();
}

void cCDS::imprimir()
{
	cout << this->to_string() << endl;
}

string cCDS::get_partido()
{
	return this->partido;
}

string cCDS::get_provincia()
{
	return this->provincia;
}

bool cCDS::realizar_transfusión(cDonante* donante,cReceptor* receptor)
{

	bool se_cumple = (donante->get_fluido())->fecha_m(donante->get_fecha_extraccion());
	if (se_cumple == true)
	{
		srand(time(nullptr));
		int resultado = rand() % 2;//genero un numero aleatorio entre 0 y 1
		if (resultado == 0)//la transufsion fue exitosa
		{
			this->Lista_receptores - receptor;
			return true;
		}
		else if (resultado == 1)//la tranfusion no fue exitosa
		{
			receptor->set_estado(inestable);
			receptor->set_prioridad(1);
			return false;
		}
	}
	else
		return false;
}

void cCDS::imprimir_lista_r()
{
	list<cReceptor*>::iterator it = Lista_receptores.begin();
	while (it != Lista_receptores.end())
	{
		cout << *it << endl;
		it++;
	}
}

void cCDS::imprimir_lista_d()
{
	list<cDonante*>::iterator it = Lista_donantes.begin();
	while (it != Lista_donantes.end())
	{
		cout << *it << endl;
		it++;
	}
}


