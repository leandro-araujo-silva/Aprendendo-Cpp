#include <iostream>

using namespace std;

int main () {
  double ab1, ab2, media;

  cout << "Digite a nota da ab1: ";
  cin >> ab1;
  cout << "Digite a nota da ab2: ";
  cin >> ab2;

  media = (ab1 + ab2) / 2;

  cout << "Sua nota: " << media << endl;

  // Operador Ternario
  (media >= 7) ? cout << "Aprovado!" : cout << "Reprovado!";

  return 0;
}