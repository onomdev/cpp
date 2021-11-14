#include <iostream>
using std::string;

class AbstractNxenes {
	virtual void Kalimi();
};


class Nxenes {
private:
	string Emri;
	string Lenda;
	int Nota;

public:
	void setEmri(string emri) {
		Emri = emri;
	}
	string getEmri() {
		return Emri;
	}

	void setLenda(string lenda) {
		Lenda = lenda;
	}
	string getLenda() {
		return Lenda;
	}

	void setNota(int nota) {
		Nota = nota;
	}
	int getNota() {
		return Nota;
	}

	void Informacioni() {
		std::cout << "Emri - " << Emri << std::endl;
		std::cout << "Lenda - " << Lenda << std::endl;
		std::cout << "Nota - " << Nota << std::endl;
	}


	Nxenes(string emri, string lenda, int nota) {
		Emri = emri;
		Lenda = lenda;
		Nota = nota;
	}

	void Kalimi() {
		if (Nota > 4)
			std::cout << "suksese "<<Emri<<" kalove." << std::endl;
		else
			std::cout << Emri<< " ke ngelur" << std::endl;
	}


};




int main() {

	Nxenes nxenes1 = Nxenes("Rei", "Matematike", 9);
	Nxenes nxenes2 = Nxenes("John", "Matematike", 4);

	nxenes1.Informacioni();
	nxenes1.Kalimi();
	nxenes2.Informacioni();
	nxenes2.Kalimi();
	
	

	




}