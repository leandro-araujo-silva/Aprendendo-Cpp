#include <iostream>

using namespace std;

int main () {
  int n, fatorial = 1;

  cout << "Digite um numero para calculo do fatorial: ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    fatorial *= i;
  }

  cout << n << "! = " << fatorial << endl;

  return 0;
}