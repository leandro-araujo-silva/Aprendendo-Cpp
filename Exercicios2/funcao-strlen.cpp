#include <iostream>
#include <string.h>

using namespace std;

int minhaStrlem(char str[]) {
  int tam = 0;

  while(str[tam] != '\0') {
    tam++;
  }
  return tam;
}

int main() {

  char vet[20] = {"Ola"};

  cout << "strlen: " << strlen(vet) << endl;
  cout << "minhaStrlem: " << minhaStrlem(vet) << endl;

  return 0;
}