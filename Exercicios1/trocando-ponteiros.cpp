#include <iostream>

using namespace std;

void leia_ponteiros(int *p1, int *p2) {
  int *aux = new int;

  aux = p1;
  p1 = p2;
  p2 = aux;

  cout << "Trocando os enderecos\n";

  cout << "Endereco do ponteiro 1: " << p1 << endl;
  cout << "Endereco do ponteiro 2: " << p2 << endl;
}

void troca_valores(int p1, int p2) {
  int aux;

  aux = p1;
  p1 = p2;
  p2 = aux;

  cout << "Trocando os valores\n";

  cout << "Valor do ponteiro 1: " << p1 << endl;
  cout << "Valor do ponteiro 2: " << p2 << endl;
}

int main() {
  int *pont1 = new int;
  int *pont2 = new int;

  cout << "Digite o valor do ponteiro 1: ";
  cin >> *pont1;

  cout << "Digite o valor do ponteiro 2: ";
  cin >> *pont2;

  cout << "Endereco do ponteiro 1: " << pont1 << endl;    
  cout << "Endereco do ponteiro 2: " << pont2 << endl;

  cout << endl;

  leia_ponteiros(pont1, pont2);

  cout << endl;

  cout << "Valor do ponteiro 1: " << *pont1 << endl;
  cout << "Valor do ponteiro 2: " << *pont2 << endl;

  cout << endl;

  troca_valores(*pont1, *pont2);

  return 0; 
}