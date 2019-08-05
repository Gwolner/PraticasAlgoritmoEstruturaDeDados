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
			cout << "O veículo "+this->nome+" foi criado." << endl;
		};

		~Veiculo(){
			delete [] rodas;
			cout << "O veículo "+this->nome+" foi destruido" << endl;

		};

		void setNumRodas(int numRodas);

		int getNumRodas();
};



#endif /* VEICULO_H_ */


