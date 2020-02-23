#include "veiculo.h"

void Terrestre::setCapacidadeMax(int cp){
	this->cap_pass = cp;
}

int Terrestre::getCapacidadeMax(){
	return cap_pass;
}

void Aquatico::setCargaMax(float cm){
	this->carga_max = cm;
}

float Aquatico::getCargaMax(){
	return carga_max;
}

void Aereo::setVelocidadeMax(float vm){
	this->vel_max = vm;
}

float Aereo::getVelocidadeMax(){
	return vel_max;
}



void Terrestre::mover(){
	cout << "Veículo terrestre " << this->nome << " moveu.\n";
}

void Aquatico::mover(){
	cout << "Veículo aquático " << this->nome << " moveu.\n";
}

void Aereo::mover(){
	cout << "Veículo aéreo " << this->nome << " moveu.\n";
}

 void Anfibio::mover(){
	 Terrestre::mover();
	 Aquatico::mover();
 }
