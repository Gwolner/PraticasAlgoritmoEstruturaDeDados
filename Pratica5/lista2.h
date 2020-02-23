/*
 * lista2.h
 *
 *  Created on: 16/10/2018
 *      Author: Wolf
 */

#ifndef LISTA2_H_
#define LISTA2_H_

using namespace std;

template <class T>
struct Node {
	T item;
	Node *prox;
};

template <class T>
class Lista {
	private:
		Node<T> *inicio;
		Node<T> *final;
		int tam;

	public:

		Lista() {
			this->inicio=NULL;
			this->final=NULL;
			this->tam=0;
		}

		~Lista() {
			delete [] inicio;
			delete [] final;
		}

		void adiciona (const T & item) {
			Node<T> *newNode = new Node<T>();
			if (newNode==NULL){
				throw overflow_error("Tentativa de criar um novo nó falhou");
			}

			if (this->inicio==NULL){
				newNode->item=item;
				this->inicio=newNode;
				this->final=newNode;
				newNode->prox=NULL;
				this->tam++;
			}
			else{
				newNode->item=item;
				Node<T> *nodeANT=pega(this->tam);
				nodeANT->prox=newNode;
				(this->final)->prox=newNode;
				this->final=newNode;
				newNode->prox=NULL;
				this->tam++;
			}

		}

		//T pega(int idx) {
		//ANALISAR PORQ O DE LINNE FICOU PRO FINAL
		Node<T> *pega(int idx){
			if ((idx<1)||(idx>this->tam)){
				throw invalid_argument("Índice inválido");
			}
			else{
				Node<T> *nodeTEMP = this->inicio;
				idx--;
				while(idx!=0){
					nodeTEMP=nodeTEMP->prox;
					idx--;
				}
				return nodeTEMP;
			}
		}



		void insere (int idx, const T & item) {
			if ((idx<1)||(idx>this->tam)){
			throw invalid_argument("Índice inválido");
			}

			Node<T> *newNode = new Node<T>();

			if (newNode==NULL){
				throw overflow_error("Tentativa de criar um novo nó falhou");
			}

			if (idx==1){
				newNode->item=item;
				newNode->prox=this->inicio;
				this->inicio=newNode;
			}
			else{
				newNode->item=item;
				Node<T> *nodeANT=pega(idx-1);
				newNode->prox=(nodeANT->prox);
				nodeANT->prox = newNode;
			}
			this->tam++;

		}

		T remove(int idx) {
			if ((idx<1)||(idx>this->tam)){
				throw invalid_argument("Índice inválido");
			}
			if (this->inicio == NULL){
				throw underflow_error("Lista vazia");
			}

			Node<T> *nodeTEMP;
			if (idx==1){
				nodeTEMP = this->inicio;
				this->inicio=(this->inicio)->prox;
				if (this->final == nodeTEMP){
					this->final=NULL;
				}

			}
			else{

				Node<T> *nodeANT=pega(idx-1);
				nodeTEMP=nodeANT->prox;
				(nodeANT->prox)=((nodeANT->prox)->prox);
				if (this->final==nodeTEMP){
					(this->final)=nodeANT;
				}
			}

			T dados = nodeTEMP->item;
			this->tam--;
			delete nodeTEMP;
			return dados;
		}

		void exibe() {

			if (this->inicio == NULL){
				throw underflow_error("Lista vazia");
			}
			else{
				Node<T> *nodeAUX = this->inicio;

				while(nodeAUX!=NULL){
					cout<<nodeAUX->item<<" ";
					nodeAUX=(nodeAUX->prox);
				}
				delete nodeAUX;
			}
			cout<<endl;
		}
};


#endif /* LISTA2_H_ */
