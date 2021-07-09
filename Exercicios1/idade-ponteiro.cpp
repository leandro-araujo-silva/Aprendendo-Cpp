#include <iostream>

using namespace std;

int main() {
  int *idade1 = new int;
  int *idade2 = new int;
  double *media = new double;

  cout << "Digite a idade da primeira pessoa: ";
  cin >> *idade1;

  cout << "Digite a idade de segunda pessoa: ";
  cin >> *idade2;

  *media = (*idade1 + *idade2) / 2.0;

  cout << "\nA media das idades e igual a " << *media << ".\nE esta localizada no endereco " << media << endl;

  return 0;
}