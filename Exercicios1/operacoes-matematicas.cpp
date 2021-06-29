#include <iostream>
#include <math.h>

using namespace std;

int main () {
  int a=5, b=2;

  //int soma = a + b;
  //cout << "Soma: " << soma << endl;
  cout << "Soma: " << a+b << endl;
  cout << "Subtracao: " << a-b << endl;
  cout << "Multiplicacao: " << a*b << endl;

  double divisao = (float)a / (float)b;

  cout << "Divisao: " << divisao << endl;

  float potencia = pow(a,b);

  cout << "Potencia: " << potencia << endl;

  return 0;
}