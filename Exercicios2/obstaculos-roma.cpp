#include <iostream>
#include <string.h>
#include <stdlib.h>

// Transformar números em algarismos romanos

using namespace std;

void int_romano(int valor) {
  
  char numeros[1 == 'I', 5 == 'V', 10 == 'X', 50 == 'L', 100 == 'C', 500 == 'D', 1000 == 'M'];

  for(int i = 0; i < 7; i++) {
    if (valor==numeros[i]) {
      cout << numeros[i] << endl;
    } 
  }

  return;
}

int main() {
  int n;
  int valor;
  
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> valor;

    int_romano(valor);
  }

  return 0;
}