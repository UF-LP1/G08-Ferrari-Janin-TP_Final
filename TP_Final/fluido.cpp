#include "fluido.h"


cFluido::cFluido(tipo tipo_s, char Rh)
{
	this->tipo_s = tipo_s;
	this->Rh = Rh;
}

cFluido::~cFluido() {
}

tipo cFluido::get_tipo()
{
	return this->tipo_s;
}

bool cFluido:: operator==(cFluido* fluido) {
	bool flag = false;
	switch(this->tipo_s)
	{
	case A:
		if (this->Rh == '+')
		{
			if (fluido->get_tipo() == A && fluido->Rh == '+' || fluido->get_tipo() == A && fluido->Rh == '-' ||
				fluido->get_tipo() == O && fluido->Rh == '+' || fluido->get_tipo() == O && fluido->Rh == '-')
				flag = true;
			else
				flag = false;
		}
		else if (this->Rh == '-')
		{
			if (fluido->get_tipo() == A && fluido->Rh == '-' || fluido->get_tipo() == O && fluido->Rh == '-')
				flag = true;
			else
				flag = false;
		}
		break;
	case AB:
		if (this->Rh == '+')
			flag = true;
		if (this->Rh == '-')
		{
			if (fluido->get_tipo() == A && fluido->Rh == '-' || fluido->get_tipo() == B && fluido->Rh == '-' ||
				fluido->get_tipo() == O && fluido->Rh == '-' || fluido->get_tipo() == AB && fluido->Rh == '-')
				flag = true;
			else
				flag = false;
		}
		break;
	case B:
		if (this->Rh == '+')
		{
			if (fluido->get_tipo() == B && fluido->Rh == '+' || fluido->get_tipo() == B && fluido->Rh == '-' ||
				fluido->get_tipo() == O && fluido->Rh == '+' || fluido->get_tipo() == O && fluido->Rh == '-')
				flag = true;
			else
				flag = false;
		}
		else if (this->Rh == '-')
		{
			if (fluido->get_tipo() == B && fluido->Rh == '-' || fluido->get_tipo() == O && fluido->Rh == '-')
				flag = true;
			else
				flag = false;
		}
		break;
	case O:
		if (this->Rh == '+')
		{
			if (fluido->get_tipo() == O && fluido->Rh == '+' || fluido->get_tipo() == O && fluido->Rh == '-')
				flag = true;
			else
				flag = false;
		}
		else if (this->Rh = '-')
		{
			if (fluido->get_tipo() == O && fluido->Rh == '-')
				flag = true;
			else
				flag = false;
		}
		break;
	}
	return flag;
}

string cFluido::to_string()
{
	stringstream salida;
	salida << "Tipo de sangre:" << this->tipo_s << ". Rh:" << this->Rh <<endl;
	return salida.str();
}

void cFluido::imprimir()
{
	cout << to_string() << endl;
}