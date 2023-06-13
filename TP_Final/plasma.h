#pragma once

#include "plasma.h"
#include "fluido.h"

class cPlasma : public cFluido{

private:
	bool HLA_compatible;

public: 
	cPlasma(bool HLA_compatible);
	~cPlasma();
};