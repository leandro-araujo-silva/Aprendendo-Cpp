#include <iostream>
#include <string.h>
#include <stdlib.h>


using namespace std;

/*

void ler_palavra(char palavra[100]) {
    if(palavra=="Alicate") {
      cout << "Martelo" << endl;
    } else if (palavra=="Martelo") {
      cout << "Plastico\n";
    } else if (palavra=="Plastico") {
      cout << "Alicate\n";
    }

    return;
}

*/

int main() {
  int n;
  int cont = 0;

  char opcoes[100];

  cin >> n;

  while(cont <= n) {
    gets(opcoes);

    //ler_palavra(opcoes);
  for(int i = 0; opcoes[i]; i++) {
    if(strcmp(opcoes,"Alicate") == 0 {
      cout << "Martelo" << endl;
    } else if (opcoes=="Martelo") {
      cout << "Plastico\n";
    } else if (opcoes=="Plastico") {
      cout << "Alicate\n";
    }
  }
    
    cont++;
  }

  

  

  return 0;

}