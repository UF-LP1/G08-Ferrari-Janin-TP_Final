#pragma once
#include <list>
#include <iostream>
using namespace std;

template <typename T>
class cLista: public list<T>{
public:
	void operator+(T& element);
	void operator-(T& element);
	void operator==(T& element);
	void operator[](T& element);
	friend ostream& operator<<(ostream& out, const T& element);
};

template<typename T>
inline void cLista<T>::operator+(T& element)
{
	this->push_back(element);
}

template<typename T>
inline void cLista<T>::operator-(T& element)
{
	this->erase(element);
}

template<typename T>
inline void cLista<T>::operator==(T& element)
{

}

template<typename T>
inline void cLista<T>::operator[](T& element)
{
	td::list<plato>::iterator aux = this->begin();

	while (aux != this->end()) {
		if ((*aux).get_nombre() == PlatoInteres) {
			return &(aux._Ptr->_Myval);
		}
		aux++;
	}
	return nullptr;
}
