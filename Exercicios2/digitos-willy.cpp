#include <iostream>

using namespace std;

void ler_digito(int n) {
  int mult = 1;
  int valor;

  if (n <= 0) {
    return;
  } else {
    valor = n / 10;
    if (valor % 2 == 0) {
      mult = mult * 2 * valor;
    }
  }
}

int main() {

}