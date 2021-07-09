#include <iostream>

using namespace std;

int main () {
  int tam;
  char res;

  do {

    cout << "Digite o tamanho de um vetor: ";
    cin >> tam;

    float vetor[tam];

    for(int i =0; i < tam; i++) {
      cout << "Digite o valor do vetor[" << i << "]: ";
      cin >> vetor[i];
    }

    for (int i = 0; i < tam ; i++) {
      cout << "Vetor[" << i << "] = " << vetor[i] << endl; 
    }

    cout << "Gostaria de imprimir outro vetor (s/n): ";
    cin >> res;  

    delete [] vetor;                   

  } while (res == 'S' || res == 's');

  return 0;

}