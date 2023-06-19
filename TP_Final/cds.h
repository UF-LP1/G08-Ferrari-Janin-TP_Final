#pragma once

#include "libreria.h"
#include "receptor.h"
#include "donante.h"
#include "lista.h"
#include "fluido.h"
#include "sangre.h"
#include "plasma.h"
#include "medula.h"
#include <random>
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
void ordenar_lista(cLista<cReceptor*>& lista);
string get_partido();
string get_provincia();
cLista<cReceptor*> lista_sangre();
cLista<cReceptor*> lista_plasma();
cLista<cReceptor*> lista_medula();
cLista<cReceptor*> get_lista_receptores();
bool miComparacion(cReceptor* left, cReceptor* Right);
cPaciente* buscar_paciente(cPaciente* p_buscar);
int buscar_prioridad_r(string DNI_buscar);//busco al receptor por su dni pq pueden haber dos personas con el 
											//mismo nombre, pero no con el mismo dni
string to_string();
void imprimir();
bool realizar_transfusión(cDonante* donante, cReceptor* receptor);
void imprimir_lista_r();
void imprimir_lista_d();

private:
	string nombre;
	string direccion;
	string partido;
	string provincia;
	unsigned int telefono;
	cLista<cDonante*> Lista_donantes;
	cLista<cReceptor*> Lista_receptores;
};
