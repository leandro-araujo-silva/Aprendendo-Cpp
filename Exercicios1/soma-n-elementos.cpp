#include <iostream>

using namespace std;

int main () {
  int n, soma=0;

  cout << "Digite o numeros de elementos a serem somados: ";
  cin >> n;

  if (n < 0) {
    cout << "Numero invalido!\n";
    return 0;
  }

  for (int i = 0; i <= n; i++) {
    soma += i; 
  }

  cout << "A soma dos elementos e igual a " << soma << "." << endl;

  return 0;
}