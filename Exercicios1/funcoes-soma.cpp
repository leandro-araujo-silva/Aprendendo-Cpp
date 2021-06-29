#include <iostream>

using namespace std;

int soma(int x, int y) {
  return x + y;
}

int main() {
  int n1, n2, res;

  cout << "Digite um valor: ";
  cin >> n1;
  cout << "Digite outro valor: ";
  cin >> n2;

  res = soma(n1, n2);

  cout << "A soma dos valores resulta em " << res << ".\n" << endl;

  return 0;

}