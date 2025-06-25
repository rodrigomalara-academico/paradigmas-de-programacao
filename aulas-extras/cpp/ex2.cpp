#include <iostream>
#include <cmath>
using namespace std;

void calculaRaizes(float a, float b, float c, float &x1, float &x2) {
	float delta = b * b - 4 * a * c;
	if (delta > 0) {
		x1 = (-b + sqrt(delta))/2 * a;
		x2 = (-b - sqrt(delta))/2 * a;
	}
}

int main() {
  float a, b, c; // caso de teste: 1, -5, 6
  float x1, x2; // resultado: 2 e 3
  cout << "Coeficientes da equacao do 2o grau: ";
  cin >> a >> b >> c;
  cout << endl;
  calculaRaizes(a, b, c, x1, x2);	
  cout << "Raizes x1: " << x1 << " e " << x2 << endl;
  return 0;
}

