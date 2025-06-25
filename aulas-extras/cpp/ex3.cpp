#include <iostream>
using namespace std;

// prototipos de funcoes 
void p_troca (int *, int *);
void r_troca (int&, int&);
void r_troca (float&, float&);

int main (void){
  int v = 5, x = 10;
  cout << v << " " << x << endl;
  p_troca(&v, &x);
  cout << v << " " << x << endl;
  r_troca(v, x);
  cout << v << " " << x << endl;
  
  int i=6,j=2;
int *p, *q;
p = &i;
q = &j;
cout << 3 * *p/(*q)+7;
cout << p;
  
  return 0;
}
void p_troca(int *a, int *b)
{
  int temp;
  temp = *a;		
  *a = *b;			
  *b = temp;
} 

void r_troca(int &a, int &b)
{
  int temp;
  temp = a;		
  a = b;			
  b = temp;
}

void r_troca(float &a, float &b)
{
  int temp;
  temp = a;		
  a = b;			
  b = temp;
}

int areaTri(int b, int h) {
	return b*h/2;
}

float areaTri(float b, float h) {
	return b*h/2;
}
