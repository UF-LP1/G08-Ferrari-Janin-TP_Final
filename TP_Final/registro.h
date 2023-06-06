#pragma once

#include "libreria.h"

class registro {

public:
	registro(string fluido_donar,string fecha_extr,float volumen, string cds);
	~registro();

private:
	string fluido_donar;
	string fecha_extr;
	float volumen;
	string cds;
};