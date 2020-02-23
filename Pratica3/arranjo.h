#include <iostream>
//#include <stdexcept>
//#include <limits>

using namespace std;

#ifndef ARRANJO_H_
#define ARRANJO_H_

template <class T>
class Arranjo {
	private:
		int tamanho; // tamanho do arranjo
		T * items; //items do arranjo
	public:
		Arranjo(int tam) {
			// instanciar o array de items com new (pratica 1) e seta tamanho;
			this->tamanho = tam;
			this->items = new T[tamanho];
		}
		virtual ~Arranjo() {
			// destruir o array de items (prática 1);
			delete [] items;
		}

		virtual T get(int idx) {
			// retornar um item do array a partir do indice;
			if(idx >= tamanho)
				throw invalid_argument("Posição fora do array");
			else
				return items[idx];
		}

		virtual void set(int idx, const T & item) {
			// set o item do array apontado pelo indice usando =
			if(idx >= tamanho)
				throw invalid_argument("Posição fora do array");
			else
				items[idx] = item;
		}

		virtual void exibir();
};

template<class T>
void Arranjo<T>::exibir() {
	// exibir cada item numa linha da forma "<idx>: <item>"
	for (int i=0 ; i<tamanho; i++){
			cout << "<" << i << "> <" << this->items[i] << ">\n";
		};
}


#endif /* ARRANJO_H_ */
