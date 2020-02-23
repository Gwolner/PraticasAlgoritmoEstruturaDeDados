
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
		// iniciliza��o do array, capacidade e tamanho
		this->capacidade = capacidade;
		this->itens = new T[capacidade];
		this->tamAtual=0;
		this->auxiliar = 0;
	}

	~Lista() {
		//destrui��o do array
		delete [] itens;
	}

	void adiciona (const T & item) {
		// adiciona um item ao final da lista; lan�a �Lista cheia� caso cheia
		if(this->tamAtual == this->capacidade-1){
			throw overflow_error("Lista cheia");
		}else{
			this->itens[tamAtual]=item;
			this->tamAtual++;
		}
	}

	T pega(int idx) {
		// pega um item pelo indice (come�a em 1);
		// lan�a �Item inv�lido� se posi��o inv�lida
        if (idx >(this->tamAtual)|| idx < 1){
            throw invalid_argument("�ndice inv�lido");
        } else{
            return this->itens[idx-1];
        }
	}

	void insere (int idx, const T & item) {
		// insere um item na posi��o indicada
		// lan�a �Lista cheia� caso cheia
		// lan�a �Item inv�lido� se posi��o inv�lida
		// desloca itens existentes para a direita
        if (this->tamAtual== this->capacidade){
            throw overflow_error("Lista cheia");
        }
        if (idx>=this->tamAtual || idx < 1){
            throw invalid_argument("�ndice inv�lido");
        }
        else {
        	this->auxiliar = (this->tamAtual - idx);
        	int tamAtualCopia = tamAtual;
        	for(int i=0; i <= auxiliar;i++){
        		//cout << "O valor da item[AUX] �: " << itens[auxiliar] << endl;
        		this->itens[tamAtualCopia] = this->itens[tamAtualCopia-1];
        		//cout << "O novo valor da item[AUX] �: " << itens[auxiliar] << endl;
        		tamAtualCopia--;
        	}
        	this->itens[idx-1]=item;
            this->tamAtual++;
        }
	}

	void remove(int idx) {
		// remove item de uma posi��o indicada
		// lan�a �Item inv�lido� se posi��o inv�lida
		// desloca itens para a esquerda sobre o item removido
        if (this->tamAtual==0){
            throw underflow_error("Lista vazia");
        }
        if (idx > this->tamAtual || idx < 1){
            throw invalid_argument("�ndice inv�lido");
        }
        else {
        	//delete itens[idx-1];
        	this->auxiliar = (this->tamAtual - idx);
        	//cout << "O valor da TAM �: " << tamAtual << endl;
        	//cout << "O valor da AUX �: " << auxiliar << endl;
        	//cout << "O valor da IDX �: " << idx << endl;
        	for (int i=0; i < auxiliar; i++){
        		//cout << "O valor da [IDX-1] �: " << itens[idx-1] << endl;
        		itens[idx-1]=itens[idx];
        		//cout << "O novo valor da [IDX-1] �: " << itens[idx-1] << endl;
        		idx++;
            }
            this->tamAtual--;
        }
	}

	void exibe() {
		// exibe os itens da saida padr�o separados por espa�os
        for (int i=0; i < this->tamAtual; i++){
            cout << this->itens[i] << " ";
        }
        cout<<endl;
	}

};
