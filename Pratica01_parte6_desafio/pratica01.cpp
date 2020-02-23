#include <iostream>
#include "veiculo.h"
#include <chrono>


using namespace std;

int main(){


	//Parte 6 - Desafio: Comparando tempo de métodos INLINE e OUTLINE

	//Start
	auto start = std::chrono::high_resolution_clock::now();

	//Código em N reptições
	
	for(int i =0; i < 1000; i++){
		Veiculo * v1 = new Veiculo("Lamborghini");
	
		cout << "O veículo criado possui: " << v1->getNumRodas() << " rodas." << endl;
	
		v1->setNumRodas(2);
	
		cout << "O veículo criado passou a ter: " << v1->getNumRodas() << " rodas." << endl;
	
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

Diferença: 31250 uS.
*/
