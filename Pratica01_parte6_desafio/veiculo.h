#ifndef VEICULO_H_
#define VEICULO_H_

#include <iostream>

using namespace std;

class Roda{

	public:
		Roda(){
			cout << "Roda construida" << endl;
		};

		~Roda(){
			cout << "Roda destruida!" << endl;
		};
};

class Veiculo{

	private:
		string nome;
		Roda * rodas;
		int num_rodas;
	public:
		Veiculo(const char * nome){
			this->nome = string(nome);
			this->rodas = NULL;
			this->num_rodas = 0; // Preciso do THIS?
			cout << "O ve�culo "+this->nome+" foi criado." << endl;
		};

		~Veiculo(){
			delete [] rodas;
			cout << "O ve�culo "+this->nome+" foi destruido" << endl;
			cout << "INLINE" << endl;
//			cout << "OUTLINE" << endl;
		};

		void setNumRodas(int numRodas);

		int getNumRodas();
};

void inline Veiculo :: setNumRodas(int numRodas){
	this->num_rodas = numRodas;
	this->rodas = new Roda[numRodas];
}

int inline Veiculo :: getNumRodas(){
	return this->num_rodas;
}



#endif /* VEICULO_H_ */



