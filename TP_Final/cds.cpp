#include "cds.h"

cCDS::cCDS(string nombre, string direccion, string partido, string provincia, unsigned int telefono) {

	this->nombre = nombre;
	this->direccion = direccion;
	this->partido = partido;
	this->provincia = provincia;
	this->telefono = telefono;

}

cCDS::~cCDS() {
}