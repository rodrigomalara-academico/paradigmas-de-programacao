#include <iostream>
using namespace std;

class Retangulo {
	private:
	 int largura;
	 int comprimento;
	public:
	 void set(int l, int c);
	 
	 int area() { // primeira forma de implementar um metodo
	 	return this->largura * this->comprimento;
	 }	 
};

void Retangulo::set(int x, int y) { // outra forma de implementar um metodo
  largura = x;
  comprimento = y;
}

int main() {	
	Retangulo ret;

	int x, y;
	cout << "Digite a largura e a altura de um retangulo: ";
	cin >> x >> y;
	
	ret.set(x,y);
	cout << "Area do retangulo: " << ret.area();

	

}
