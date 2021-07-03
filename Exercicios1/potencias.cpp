#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
  int b, e, res;
  char novamente;

  do {
    cout << "Digite um inteiro como base: ";
    cin >> b;
    cout << "Digite um inteiro como expoente: ";
    cin >> e;

    res = pow(b, e);

    cout << "Potencia: " << res << endl;

    cout << "Deseja continuar (S/N): ";
    cin >> novamente;
    //getchar();
  } while (novamente == 's' || novamente == 'S');

  return 0;
}