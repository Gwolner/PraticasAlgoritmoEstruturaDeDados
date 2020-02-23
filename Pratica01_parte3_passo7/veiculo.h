#ifndef VEICULO_H_
#define VEICULO_H_

#include <iostream>

using namespace std;

class Veiculo{

	private:
		string nome;
		int num_rodas;
	public:
		Veiculo(const char * nome){
			this->nome = string(nome);
			this->num_rodas = 0;
			cout << "O veículo "+this->nome+" foi criado." << endl;
		}

		~Veiculo(){
			cout << "O veículo "+this->nome+" foi destruido" << endl;
		};

		void setNumRodas(int numRodas);

		int getNumRodas();
};


#endif /* VEICULO_H_ */
