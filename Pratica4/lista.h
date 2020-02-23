
#include <iostream>

using namespace std;

template <class T>
class Lista {
private:
	// itens da lista, capacidade e tamanho atual
	T* itens;
	int capacidade;
	int tamAtual;
	int auxiliar;

public:
	Lista(int capacidade) {
		// inicilização do array, capacidade e tamanho
		this->capacidade = capacidade;
		this->itens = new T[capacidade];
		this->tamAtual=0;
		this->auxiliar = 0;
	}

	~Lista() {
		//destruição do array
		delete [] itens;
	}

	void adiciona (const T & item) {
		// adiciona um item ao final da lista; lança “Lista cheia” caso cheia
		if(this->tamAtual == this->capacidade-1){
			throw overflow_error("Lista cheia");
		}else{
			this->itens[tamAtual]=item;
			this->tamAtual++;
		}
	}

	T pega(int idx) {
		// pega um item pelo indice (começa em 1);
		// lança “Item inválido” se posição inválida
        if (idx >(this->tamAtual)|| idx < 1){
            throw invalid_argument("Índice inválido");
        } else{
            return this->itens[idx-1];
        }
	}

	void insere (int idx, const T & item) {
		// insere um item na posição indicada
		// lança “Lista cheia” caso cheia
		// lança “Item inválido” se posição inválida
		// desloca itens existentes para a direita
        if (this->tamAtual== this->capacidade){
            throw overflow_error("Lista cheia");
        }
        if (idx>=this->tamAtual || idx < 1){
            throw invalid_argument("Índice inválido");
        }
        else {
        	this->auxiliar = (this->tamAtual - idx);
        	int tamAtualCopia = tamAtual;
        	for(int i=0; i <= auxiliar;i++){
        		//cout << "O valor da item[AUX] é: " << itens[auxiliar] << endl;
        		this->itens[tamAtualCopia] = this->itens[tamAtualCopia-1];
        		//cout << "O novo valor da item[AUX] é: " << itens[auxiliar] << endl;
        		tamAtualCopia--;
        	}
        	this->itens[idx-1]=item;
            this->tamAtual++;
        }
	}

	void remove(int idx) {
		// remove item de uma posição indicada
		// lança “Item inválido” se posição inválida
		// desloca itens para a esquerda sobre o item removido
        if (this->tamAtual==0){
            throw underflow_error("Lista vazia");
        }
        if (idx > this->tamAtual || idx < 1){
            throw invalid_argument("Índice inválido");
        }
        else {
        	//delete itens[idx-1];
        	this->auxiliar = (this->tamAtual - idx);
        	//cout << "O valor da TAM é: " << tamAtual << endl;
        	//cout << "O valor da AUX é: " << auxiliar << endl;
        	//cout << "O valor da IDX é: " << idx << endl;
        	for (int i=0; i < auxiliar; i++){
        		//cout << "O valor da [IDX-1] é: " << itens[idx-1] << endl;
        		itens[idx-1]=itens[idx];
        		//cout << "O novo valor da [IDX-1] é: " << itens[idx-1] << endl;
        		idx++;
            }
            this->tamAtual--;
        }
	}

	void exibe() {
		// exibe os itens da saida padrão separados por espaços
        for (int i=0; i < this->tamAtual; i++){
            cout << this->itens[i] << " ";
        }
        cout<<endl;
	}

};
