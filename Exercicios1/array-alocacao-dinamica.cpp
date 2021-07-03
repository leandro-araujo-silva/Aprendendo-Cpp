#include <iostream>

using namespace std;

int main() {
  int tamanho;
  cout << "Digite o tamanho do vetor!" << endl;
  cin >> tamanho;
  int* vetor = new int[tamanho];

  for(int i=0; i < tamanho; i++) {
    cout << "Digite o elemento " << i+1 << " do vetor: ";
    cin >> vetor[i];
  }

  for (int i = 0; i < tamanho; i++) {
    cout << "Vetor[" << i << "] = " << vetor[i] << endl;
  }

  // delete [] vetor;         * Serve para deletar o vetor

  return 0;
}