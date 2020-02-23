#include <iostream>
#include "veiculo.h"

using namespace std;

int main(){

//	cout << "Digite um valor: \n";
//	int a;
//	cin >> a;
//	cout << "O valor digitado foi: " << a << endl;


//Veiculo v1("VEÍCULO");
//Aquatico aq1("JETSQUI");
//Terrestre t1("TRATOR");
//Aereo ar1("HELICOPTERO");


//Veiculo * terr, * aqua, * aereo;

//terr = new Terrestre("VT1");
//((Terrestre *)terr)->setCapacidadeMax(45);
//cout <<((Terrestre *)terr)->getCapacidadeMax() << endl;

//aqua = new Aquatico("VQ1");
//((Aquatico *)aqua)->setCargaMax(12.5);
//cout << ((Aquatico *)aqua)->getCargaMax() << endl;;

//aereo = new Aereo("VA1");
//((Aereo *)aereo)->setVelocidadeMax(1040.5);
//cout << ((Aereo *)aereo)->getVelocidadeMax() << endl;;


//Veiculo * terr, * aqua, * aereo;

//terr = new Terrestre("VT1");
//aqua = new Aquatico("VQ1");
//aereo = new Aereo("VA1");

//terr->mover();
//aqua->mover();
//aereo->mover();

//delete terr;
//delete aqua;
//delete aereo;


Veiculo * terr, * aqua, * aereo;

terr = new Terrestre("VT1");
dynamic_cast<Terrestre*>(terr)->setCapacidadeMax(45);
cout << dynamic_cast<Terrestre*>(terr)->getCapacidadeMax() << endl;

//aqua = new Aquatico("VQ1");
//dynamic_cast<Aquatico*>(aqua)->setCargaMax(12.5);
//cout << dynamic_cast<Aquatico*>(aqua)->getCargaMax() << endl;;
//
//aereo = new Aereo("VA1");
//dynamic_cast<Aereo*>(aereo)->setVelocidadeMax(1040.5);
//cout << dynamic_cast<Aereo*>(aereo)->getVelocidadeMax() << endl;;

delete terr;
//delete aqua;
//delete aereo;

//Veiculo *anfi = new Anfibio("SAPÃO");
//anfi->mover();


}
