#include <iostream>
#include "funcoes.h"
#include "arranjo.h"
#include "aluno.h"

using namespace std;
using namespace funcoes;

int main(){

//int x = 5, y = 10, z = 30;

//trocar(x, y);
//cout << "Minimo entre " << x << " e " << y << " eh " << minimo(x, y) << endl;
//cout << "Maximo entre " << y << " e " << z << " eh " << maximo(y, z) << endl;


//float x = 5.5, y = 10.15, z = 30.7;
//double x = 5.5, y = 10.15, z = 30.7;
//int x = 5, y = 10, z = 30;
//char *x = "5", *y = "10", *z = "30";
//trocar(x, y);
//cout << "Minimo entre " << x << " e " << y << " eh " << minimo(x, y) << endl;
//cout << "Maximo entre " << y << " e " << z << " eh " << maximo(y, z) << endl;


//Arranjo<int> items(10);
//items.set(4,5);
//items.set(7,15);
//items.set(8,22);
//items.exibir();


//Arranjo<float> arr(5);
//arr.set(1,5.9);
//arr.set(2,15.2);
//arr.set(4,22.1);
//arr.exibir();


Arranjo<float> items(5);
try{
	items.set(3,5.9);
	items.exibir();
}
catch(invalid_argument& e){
	cerr << "Posição informada não corresponde ao array";
}

Arranjo<Aluno> turma(3);

turma.set(0, Aluno("Joao","1234"));
turma.set(1, Aluno("Maria","5235"));
turma.set(2, Aluno("Jose","2412"));
turma.exibir();


return 0;
}
