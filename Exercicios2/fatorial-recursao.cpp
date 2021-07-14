#include <iostream>

using namespace std;

int fatorial(int n) {
  if(n == 0 || n == 1) {
    return 1;
  } else {
    return n * fatorial(n-1);
  }
}

int main() {
  int n;

  cout << "Digite um valor: ";
  cin >> n;

  cout << "Fatorial de " << n << " e igual a " << fatorial(n);

  return 0;
}