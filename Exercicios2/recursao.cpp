#include <iostream>

using namespace std;

void imprimirDecrescente() {
  for(int i = 30; i >= 0; i--) {
    if(i != 0) {
      cout << i << ", ";
    } else {
      cout << i << endl;
    }
  }
}

void imprimirRecursivo(int x) {
  if(x==0) {
    cout << x;
  } else {
    cout << x << ", ";
    
    imprimirRecursivo(x - 1);
  }
}

int main() {
  imprimirDecrescente();

  cout << "\nCom recursao:\n";
  imprimirRecursivo(30);

  return 0;
}