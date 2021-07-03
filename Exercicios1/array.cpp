#include <iostream>

using namespace std;

int main() {
  int vet[4] = {5,10};

  cout << "[ ";
  for(int i=0; i < 4; i++) {
    cout << vet[i] << " ";
  }
  cout << " ]" << endl;

  int x = sizeof(vet) / sizeof(int);       //Verifica a quantidade de bytes do vetor.
  int y = sizeof(int);
  cout << "Tamanho de inteiro: " << y << endl;
  cout << "Quantidade de elementos (qtd. bytes) do vetor: " << x << endl;

  return 0;
}