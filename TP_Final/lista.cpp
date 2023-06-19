#include "lista.h"
template <class T>
ostream& operator<<(ostream& out, const T& element) //cLista<T>&
{
	out << element << endl;
	return out;
}
