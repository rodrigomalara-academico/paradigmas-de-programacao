#include <iostream>
using namespace std;

void addUm(int &ref) {
	cout << "Versao int" << endl;
    ref = ref + 1;
}
void addUm(float &ref) {
	cout << "Versao float" << endl;
    ref = ref + 1;
}
int main() {
    int valor = 5;
    float valorF = 10.1;
 
    cout << "valores = " << valor << " " << valorF << endl;
    addUm(valor);
    addUm(valorF);
    cout << "valores = " << valor << " " << valorF << endl;
    return 0;
}
