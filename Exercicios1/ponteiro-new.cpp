#include <iostream>

using namespace std;

int main() {
  int* pont1 = new int;
  int* pont3 = new int;

  *pont1 = 5;
  *pont3 = 35;

  delete pont3;

  *pont3 = *pont1;

  cout << *pont3;

  return 0;
}