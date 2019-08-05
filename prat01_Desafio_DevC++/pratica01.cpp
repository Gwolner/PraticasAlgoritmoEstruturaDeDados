#include <iostream>
#include "veiculo.h"
#include <chrono>


using namespace std;

int main(){


	//Parte 6 - Desafio: Comparando tempo de m�todos INLINE e OUTLINE

	//Start
	auto start = std::chrono::high_resolution_clock::now();

	//C�digo em N repti��es
	
	for(int i =0; i < 1000; i++){
		Veiculo * v1 = new Veiculo("Lamborghini");
	
		cout << "O ve�culo criado possui: " << v1->getNumRodas() << " rodas." << endl;
	
		v1->setNumRodas(2);
	
		cout << "O ve�culo criado passou a ter: " << v1->getNumRodas() << " rodas." << endl;
	
		delete v1;
	}

	//Finish
	auto finish = std::chrono::high_resolution_clock::now();
	long elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>
		(finish-start).count() / 1000;

	cout << "tempo[us] = " << elapsed << endl;

return 0;
}

/*
Resultado observado:

INLINE:1937500 uS.

OUTLINE: 1906250 uS.

Diferen�a: 31250 uS.
*/
