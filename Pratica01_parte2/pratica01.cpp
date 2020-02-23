#include <iostream>

using namespace std;

class Veiculo{

	private:
		string nome;

	public:
		Veiculo(const char * nome){
			this->nome = string(nome);
			cout << "O veículo "+this->nome+" foi criado." << endl;
		}

		~Veiculo(){
			cout << "O veículo "+this->nome+" foi destruido" << endl;
		};

};

int main(){

	//Passo 5 - Objeto criado e destruido automaticamente
//	Veiculo veiculo1("v1");
//	{
//		Veiculo veiculo2("v2");
//		{
//			Veiculo veiculo3("v3");
//		}
//	}

	//Passo 6 - Objeto criado e destruido explicitamente
	Veiculo * veiculo1 = new Veiculo("v1");
	{
		Veiculo * veiculo2 = new Veiculo("v2");
		{
			Veiculo * veiculo3 = new Veiculo("v3");
			delete veiculo3;
		}
		delete veiculo2;
	}
	delete veiculo1;

	return 0;
}
