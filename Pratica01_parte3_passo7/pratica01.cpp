#include <iostream>
#include "veiculo.h"

using namespace std;

int main(){

	//Passo 7 - Testando m�todos get e set com arquivos auxiliares
	Veiculo * v1 = new Veiculo("Lamborghini");

	cout << "O ve�culo criado possui: " << v1->getNumRodas() << " rodas." << endl;

	v1->setNumRodas(3);

	cout << "O ve�culo criado passou a ter: " << v1->getNumRodas() << " rodas." << endl;

	delete v1;


	return 0;
}
