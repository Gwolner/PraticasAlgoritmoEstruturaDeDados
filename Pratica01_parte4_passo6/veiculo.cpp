#include "veiculo.h"

void Veiculo :: setNumRodas(int numRodas){
	this->num_rodas = numRodas;
	this->rodas = new Roda[numRodas];
}

int Veiculo :: getNumRodas(){
	return this->num_rodas;
}
