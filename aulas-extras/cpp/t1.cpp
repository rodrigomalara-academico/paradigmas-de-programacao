#include <iostream>
#include <ctime> // time.h da linguagem c
using namespace std;

int main() {
  const int TAM = 100;
  int Num1;
  int Num2;
  int n = TAM;
  cout << "Lendo o primeiro numero...: ";
  cin >> Num1;
  cout << endl;
  cout << "Lendo o segundo numero....: ";
  cin >> Num2;
  cout << endl; // \n
  int soma = Num1 + Num2;
  cout << "Soma: " << soma;
  return 0;
}

