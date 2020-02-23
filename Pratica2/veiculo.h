#include<iostream>

using namespace std;

#ifndef VEICULO_H_
#define VEICULO_H_

class Veiculo{
	protected:
		string nome;

	public:
		Veiculo(const char *n){
			this->nome = string(n);
			cout <<"Criado veiculo " << this->nome << endl;
		}

		 virtual ~Veiculo(){
			cout << "Veiculo destruido\n";
		}

		virtual void mover() =0;
};

class Terrestre : public virtual Veiculo{
	private:
		int cap_pass;

	protected:
		Terrestre():Veiculo("Qualquer nome"){cout <<"Veiculo terrestre " << this->nome << " construido\n";};

	public:
		Terrestre(const char *n) : Veiculo(n) {
			this->nome = string(n);
			this->cap_pass =5;
			cout <<"Veiculo terrestre " << this->nome << " construido\n";
		}

		virtual ~Terrestre(){
			cout << "Terrestre destruido\n";
		}

		void setCapacidadeMax(int cp);

		int getCapacidadeMax();

		virtual void mover();
};

class Aquatico : public virtual Veiculo{
	private:
		float carga_max;

	protected:
		Aquatico():Veiculo("Qualquer nome"){cout << "Veiculo aquatico " << this->nome << " construido\n";};

	public:
		Aquatico(const char *n) : Veiculo(n){
			this->nome = string(n);
			this->carga_max = 10;
			cout << "Veiculo aquatico " << this->nome << " construido\n";
		}

		virtual ~Aquatico(){
			cout << "Aquatico destruido\n";
		}

		void setCargaMax(float cm);

		float getCargaMax();

		virtual void mover();
};

class Aereo : public Veiculo{
	private:
		float vel_max;

	public:
		Aereo(const char *n) : Veiculo(n){
			this->nome = string(n);
			this->vel_max = 100;
			cout << "Veiculo aereo " << this->nome << " construido\n";
		}

		virtual ~Aereo(){
			cout << "Aereo destruido\n";
		}

		void setVelocidadeMax(float vm);

		float getVelocidadeMax();

		virtual void mover();
};

class Anfibio : public Terrestre, public Aquatico{


	public:
		Anfibio(const char *n): Veiculo(n), Terrestre(), Aquatico(){};

		virtual void mover();







};

#endif /* VEICULO_H_ */
