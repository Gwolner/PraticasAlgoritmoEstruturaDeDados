#include <iostream>
#include <cstring>


#ifndef FUNCOES_H_
#define FUNCOES_H_

namespace funcoes {
template <class T>
void trocar(T & a, T & b) {
	T aux =a;
	a =b;
	b =aux;

}

template <class T>
T maximo(const T a, const T b) {

	if(a>b)return a;
	return b;
}

template<>
char* maximo<char*>(char * a,  char* b) {

	if(strcmp(a,b)>0)return b;
	return a;
}


template <class T>
T minimo(const T a, const T b) {

	if(a<b) return a;
	return b;
}


template<>
char* minimo<char*>(char * a,  char* b) {

	if(strcmp(a,b)<0)return b;
	return a;
}

}
#endif /* FUNCOES_H_ */
