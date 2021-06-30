#include <iostream>

using namespace std;

int main () {
  float x, y;

  cout << "Dada a funcao f(x) = x2 - 3x + 5, digite um valor de x: ";
  cin >> x;

  y = (x * x - 3 * x + 5);

  cout << "Resultado: f(" << x << ") = " << y << endl;

  return 0;
}