#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void maiusculo(char s1[], char s2[]) {
  int i = 0;
  while(s1[i] != '\0') {
    s2[i] = toupper(s1[i]);
    i++;
  }
  s2[i] = '\0';
}

int main() {
 char str1[75];
 char str2[75];

 gets(str1);

 maiusculo(str1, str2);
 cout << str2 << endl;

 return 0; 
}