#include <iostream>
#include "veiculo.h"

using namespace std;

int main(){

	//Passo 7 - Testando métodos get e set com arquivos auxiliares
	Veiculo * v1 = new Veiculo("Lamborghini");

	cout << "O veículo criado possui: " << v1->getNumRodas() << " rodas." << endl;

	v1->setNumRodas(3);

	cout << "O veículo criado passou a ter: " << v1->getNumRodas() << " rodas." << endl;

	delete v1;


	return 0;
}
