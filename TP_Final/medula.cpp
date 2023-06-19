#include "medula.h"

cMedula::cMedula (bool HLA_compatible, const int t_medula,tipo tipo_s, char Rh, time_t fecha_max) : cFluido(tipo_s, Rh, fecha_max), t_medula(1)
{
	this->HLA_compatible = HLA_compatible;
}

cMedula::~cMedula() {
}

bool cMedula::fecha_m(time_t fecha_e)
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

	if (dias <= this->t_medula)
		cumple = true;
	else
		cumple = false;

	delete f_ac;
	return cumple;
}

string cMedula::to_string()
{
	stringstream salida;
	salida << "HLA compatible:" << this->HLA_compatible << ". Tiempo maximo transcurrido: " << this->t_medula << endl;
	return salida.str();
}

void cMedula::imprimir()
{
	cout << to_string() << endl;
}