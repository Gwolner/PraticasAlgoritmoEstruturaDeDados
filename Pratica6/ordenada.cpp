#include <iostream>

using namespace std;

class ListaOrdenada {
private:
	int * items;
	int tamanho, capacidade;
public:
	ListaOrdenada(int cap) {
		this->capacidade = cap;
		this->tamanho = 0;
		items = new int[cap];
	}

	~ListaOrdenada() {
		delete [] items;
	}

	void insere(int key) {
			if(this->tamanho == this->capacidade){
			throw overflow_error("Lista cheia");
		}
		else{
			int copiaTam = tamanho;
			for(int i = 0; i < this->tamanho;i++){
				if(key > this->items[copiaTam-1]){
					//this->items[copiaTam] = key;
					i = this->tamanho;
				}else{
					this->items[copiaTam]= this->items[copiaTam-1];
					copiaTam--;
				}
			}
			this->items[copiaTam] = key;
			this->tamanho++;
		}
	}


	int buscaSequencial(int key) {
		for(int i=0;i<this->tamanho;i++){
			if(this->items[i]==key){
				return i;
			}
		}
		return -1;
	}

	int buscaBinaria(int item) {
		return buscaBinaria(0, tamanho - 1, item);
	}

	int valida() {
		for (int i = 0; i < tamanho - 1; i++) {
			if (items[i] > items[i + 1]) return 0;
		}
		return 1;
	}

	void exibe() {
		for (int i = 0; i < tamanho; i++) {
			cout << i << ": " << items[i] << "; ";
		}
		cout << endl;
	}

	void remove(int key){
		int posicao = buscaBinaria(key);
		if (posicao == -1){
			throw "Item não existe";
		}else{
			for(int i = posicao; i < this->tamanho;i++){
				this->items[i] = this->items[i+1];
			}
		}
		this->tamanho--;
	}

private:

	int buscaBinaria(int inicio, int final, int item) {
		if(inicio >final){
			return -1;
		}else{
			int meio = (inicio+final)/2;
			if(this->items[meio] == item){
				return meio;
			}
			if(this->items[meio] < item){
				return buscaBinaria(meio+1,final,item);
			}else{
				return buscaBinaria(0,meio-1,item);
			}
		}
	}

};

//int main () {
//
//	ListaOrdenada lista(10);
//
//	int elementos [] = {10, 5, 25, 1, 5, 13, 50, 99, 33, 12};
//
//	for (int i = 0; i < 10; i++) {
//		lista.insere(elementos[i]);
//	}
//
//	cout << "Lista válida: " << (lista.valida()?"sim":"não") << endl;
//	lista.exibe();
//
//	int teste [] = {5, 7, 16, 99, 45, 12, 33, 1, 60, 6};
//
//	for (int i = 0; i < 10; i++) {
//		cout << "Buscando " << teste[i] << ": sequencial = " << lista.buscaSequencial(teste[i]) << " binaria = " << lista.buscaBinaria(teste[i]) << endl;
//
//	}
//
//}

int main () {

	ListaOrdenada lista(10);

	int elementos [] = {10, 5, 25, 1, 5, 13, 50, 99, 33, 12};

	for (int i = 0; i < 10; i++) {
		lista.insere(elementos[i]);
	}

	cout << "Lista válida: " << (lista.valida()?"sim":"não") << endl;
	lista.exibe();
	lista.remove(12);
	lista.exibe();

//	int teste [] = {5, 7, 16, 99, 45, 12, 33, 1, 60, 6};
//
//	for (int i = 0; i < 10; i++) {
//		cout << "Buscando " << teste[i] << ": sequencial = " << lista.buscaSequencial(teste[i]) << " binaria = " << lista.buscaBinaria(teste[i]) << endl;
//
//	}

}
