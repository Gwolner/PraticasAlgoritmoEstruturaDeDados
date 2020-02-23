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
	cout << "Ve�culo terrestre " << this->nome << " moveu.\n";
}

void Aquatico::mover(){
	cout << "Ve�culo aqu�tico " << this->nome << " moveu.\n";
}

void Aereo::mover(){
	cout << "Ve�culo a�reo " << this->nome << " moveu.\n";
}

 void Anfibio::mover(){
	 Terrestre::mover();
	 Aquatico::mover();
 }
