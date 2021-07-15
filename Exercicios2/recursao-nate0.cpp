#include <iostream>

using namespace std;

void imprimir_ate_zero(int n) {
  if (n < 0) {
    return;
  }

  if (n > 0) {
    cout << n << ", ";
  } else if (n==0) {
    cout << n << "." << endl;
  }
  
  imprimir_ate_zero(n-1);

}

int main() {
  int n;

  cout << "Digite um numero natural diferente de 0: ";
  cin >> n;

  imprimir_ate_zero(n);

  return 0;
}