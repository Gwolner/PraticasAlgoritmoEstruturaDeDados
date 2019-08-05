#include <iostream>
#include "veiculo.h"

using namespace std;

//class Veiculo{
//
//	private:
//		string nome;
//		int num_rodas;
//	public:
//		Veiculo(const char * nome){
//			this->nome = string(nome);
//			this->num_rodas = 0;
//			cout << "O veículo "+this->nome+" foi criado." << endl;
//		}
//
//		~Veiculo(){
//			cout << "O veículo "+this->nome+" foi destruido" << endl;
//		};
//
//		void setNumRodas(int numRodas);
//
//		int getNumRodas();
//};
//
//void Veiculo :: setNumRodas(int numRodas){
//	this->num_rodas = numRodas;
//}
//
//int Veiculo :: getNumRodas(){
//	return this->num_rodas;
//}

int main(){

//	//Parte 1
//
//	//Mensagem na saída padrão
//	cout << "Primeira aplicação em C++" << endl;


//	//Parte 2
//
//	//Estrutura de pilha
//	Veiculo veiculo1("v1");
//	{
//		Veiculo veiculo2("v2");
//			{
//				Veiculo veiculo3("v3");
//			}
//	}

//	//Criando objetos que não se destroem sozinhos
//	Veiculo * obj1 = new Veiculo("v1");
//	{
//		Veiculo * obj2 = new Veiculo("v2");
//			{
//				Veiculo * obj3 = new Veiculo("v3");
//			}
//	}

//	//Criando e destruindo objetos explicitamente
//	Veiculo * obj1 = new Veiculo("v1");
//	{
//		Veiculo * obj2 = new Veiculo("v2");
//			{
//				Veiculo * obj3 = new Veiculo("v3");
//				delete obj3;
//			}
//		delete obj2;
//	}
//	delete obj1;


	//Parte 3

	//Testando métodos get e set fazendo uso do arquivo veiculo.h
	Veiculo * v1 = new Veiculo("Lamborghini");

	cout << "O veículo criado possui: " << v1->getNumRodas() << " rodas." << endl;

	v1->setNumRodas(3);

	cout << "O veículo criado passou a ter: " << v1->getNumRodas() << " rodas." << endl;

	delete v1;


	//parte 4: Feito


	//parte 5: Feito




return 0;
}


