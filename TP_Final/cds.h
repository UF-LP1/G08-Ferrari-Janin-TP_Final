#pragma once

#include "libreria.h"
#include "receptor.h"
#include "donante.h"
#include "lista.h"
#include "fluido.h"
#include "sangre.h"
#include "plasma.h"
#include "medula.h"
#include <list>

class cCDS {

public: 
	cCDS(string nombre,string direccion,string partido,string provincia,unsigned int telefono);
	~cCDS();

bool cumple_rdonacion(cDonante* donante_ver);//funcion que verifica si un donador
											//cumple los requisitos para ser donador
void agregar_lista(cPaciente* paciente);
//agregar la parte de donante que verifica si cumple los requisitos para ser donante

cLista<cDonante*> get_lista_donante();
cLista<cReceptor*> get_lista_receptor();
void ordenar_lista();
bool miComparacion(cReceptor left, cReceptor Right);
cLista<cReceptor*> lista_sangre();
cLista<cReceptor*> lista_plasma();
cLista<cReceptor*> lista_medula();
cLista<cReceptor*> get_lista_receptores();
cPaciente* buscar_paciente(cPaciente* p_buscar);


private:
	string nombre;
	string direccion;
	string partido;
	string provincia;
	unsigned int telefono;
	cLista<cDonante*> Lista_donantes;
	cLista<cReceptor*> Lista_receptores;
};
