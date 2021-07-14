#include <iostream>

using namespace std;

void maiusculo(char s1[], char s2[])
{
  int i = 0;
  while (s1[i] != '\0')
  {
    s2[i] = toupper(s1[i]);
    i++;
  }
  s2[i] = '\0';
}

void minusculo(char s1[], char s2[])
{
  int i = 0;
  while (s1[i] != '\0')
  {
    s2[i] = tolower(s1[i]);
    i++;
  }
  s2[i] = '\0';
}

int main()
{
  char str1[] = "Within software engineering, programming (the implementation) is regarded as one phase in a software development process. There is an ongoing debate on the extent to which the writing of programs is an art, a craft or an engineering discipline. the end!";
  char str2[50];

  //cout << sizeof(str1)/ sizeof(int) << endl;
  maiusculo(str1, str2);
  cout << str2 << endl;

  minusculo(str1, str2);
  cout << str2 << endl;

  return 0;
}