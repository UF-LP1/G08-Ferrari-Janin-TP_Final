#pragma once
#include <list>
#include <iostream>
using namespace std;

template <typename T>
class cLista : public list<T> {
public:
	void operator+(T& element);
	void operator-(T& element);
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
	typename list<T>::iterator it = this->begin();
	while (it != this->end())
	{
		if (*it == element)
		{
				it=this->erase(it);
		}
		it++;
	}
}







