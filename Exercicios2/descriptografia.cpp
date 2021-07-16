#include <iostream>
#include <string.h>

using namespace std;

void minhaStrlem(char str[]) {
  int tam = 0;
  int cont = 1;
  int roda = 0;

  while(str[tam] != '\0') {
    if(str[tam] == '-') {
      cout << cont;
    } else if(str[tam] == '*') {
      cout << "(" << cont;
    }
    
    if (str[tam] == '*' && str[tam+1]== '\0'){
      cout << "))";
    }

    cont++;
    tam++;
  }
  /*
  while(str[roda] != '\0') {
    if(str[roda] == '*') {
      cout << ")" << endl;
    }
    roda++;
  }
  */
  return;
}

int main() {

  char vet[100];

  gets(vet);
  //fgets(vet, 100, stdin);

  minhaStrlem(vet);

  return 0;
}