#include <iostream>
#include "arranjo.h"

using namespace std;

#ifndef ALUNO_H_
#define ALUNO_H_

class Aluno {
	private:
		string nome;
		string mat;
	public:
		Aluno() {}
		Aluno(const char * nome, const char * mat) : nome(nome), mat(mat) {}
		friend class Arranjo<Aluno>;
};

template<>
void Arranjo<Aluno>::set(int idx, const Aluno & aluno) {
	// atribua nome e mat do item do array a partir de aluno
	items[idx].nome= aluno.nome;
	items[idx].mat= aluno.mat;
}

template<>
void Arranjo<Aluno>::exibir() {
	// exiba cada aluno do array no formato "idx : mat = nome"
	for (int i=0 ; i<tamanho; i++){
		cout << "idx: " << i << " mat: " << items[i].mat << " = nome: " << items[i].nome << endl;
	}
}

//desafio 1, passo 5, parte 4
//Aluno & operator=(const Aluno & aluno) {
//	items[idx].nome= aluno.nome;
//	items[idx].mat= aluno.mat;
//	return Aluno(items[idx].nome,items[idx].mat);
//}

#endif /* ALUNO_H_ */
