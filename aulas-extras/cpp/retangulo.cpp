#include <iostream>>
using namespace std;

class Retangulo {
  private:
    int largura;
	int comprimento;
  public:
	void set(int l, int c);
	int area() const { // primeira forma de implementar um metodo
	 	return this->largura * this->comprimento;
	}
};

void Retangulo::set(int x, int y) { 
  // outra forma de implementar um metodo
  largura = x;
  comprimento = y;
}

int main () {
	int larg, compr;
	cout << "Digite Largura e Comprimento" << endl;
	cin >> larg;
	cin >> compr;
	
	Retangulo r1; // alocacao estatica - 2 passos
	r1.set(larg, compr);
	cout << "Area do retangulo: " << r1.area() << endl;
	
	Retangulo *r2; // alocacao dinamica - 4 passos
	r2 = new Retangulo();
	r2->set(larg, compr);
	cout << "Area do retangulo: " << r2->area() << endl;
	delete r2;
	
	Retangulo r3(r1);
	cout << "Area do retangulo: " << r3.area() << endl;
}
