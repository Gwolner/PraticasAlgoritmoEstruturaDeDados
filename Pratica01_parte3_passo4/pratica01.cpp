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

void Veiculo :: setNumRodas(int numRodas){
	this->num_rodas = numRodas;
}

int Veiculo :: getNumRodas(){
	return this->num_rodas;
}



int main(){

	//Passo 4 - Testando métodos get e set
	Veiculo * v1 = new Veiculo("Lamborghini");

	cout << "O veículo criado possui: " << v1->getNumRodas() << " rodas." << endl;

	v1->setNumRodas(3);

	cout << "O veículo criado passou a ter: " << v1->getNumRodas() << " rodas." << endl;

	delete v1;


	return 0;
}
