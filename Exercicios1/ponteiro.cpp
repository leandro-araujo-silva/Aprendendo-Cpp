#include <iostream>

using namespace std;

int main() {
  int var1;
  int* pont1;
  var1=5;
  pont1=&var1;
  cout << "Valor da variavel, atraves do seu nome: " << var1 << endl;
  cout << "Endereco armazenado no ponteiro: " << pont1 << endl;              // Informa o endereço da variável!
  cout << "Valor da variavel, por meio do ponteiro: " << &pont1 << endl;           // Informa o valor que se encontra no endereço!

  return 0;
}