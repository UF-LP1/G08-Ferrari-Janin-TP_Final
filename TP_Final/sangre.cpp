#include "sangre.h"

cSangre::cSangre(const int t_sangre,tipo tipo_s, char Rh, time_t fecha_max):cFluido(tipo_s,Rh,fecha_max),t_sangre(42) 
{
}

cSangre::~cSangre() {
}

bool cSangre::fecha_m(time_t fecha_e)
{
	bool cumple = false;
	double segundos;
	int dias;

	time_t ahora;
	time(&ahora);//obtengo el tiempo actual y lo almaceno en mi variable ahora
	tm* f_ac = new tm;
	localtime_s(f_ac, &ahora);//asigno la estructura tm de mi tiempo actual a f_ac

	segundos = difftime(ahora, fecha_e);
	dias = segundos / segsxdia;

	if (dias <= this->t_sangre)
		cumple = true;
	else
		cumple = false;

	delete f_ac;
	return cumple;
}

string cSangre::to_string()
{
	stringstream salida;
	salida << "Tiempo maximo transcurrido:" << this->t_sangre << endl;
	return salida.str();
}

void cSangre::imprimir()
{
	cout << to_string() << endl;
	return;
}
