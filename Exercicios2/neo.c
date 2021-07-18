#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  int n;
  int cont = 0;
  char opcoes[200];

  scanf("%d", &n);

  do {
    gets(opcoes);

    for(int i = 0; opcoes[i]; i++) {
      opcoes[i]=tolower(opcoes[i]);
    }

    if(strcmp(opcoes,"alicate")==0) { 
        printf("Martelo\n");
    } else if (strcmp(opcoes,"martelo") == 0) {
        printf("Plastico\n");
    } else if (strcmp(opcoes,"plastico") == 0) {
        printf("Alicate\n");
    }

    cont++;
    opcoes[200];
    
  } while(cont <= n);

  return 0;
}