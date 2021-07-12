#include <iostream>

using namespace std;

class propaganda{
  private:

  public:

  void inscrever() {
    cout << "Inscreva-se no canal!\n";
  }

  void curta() {
    cout << "Curta esse video!\n";
  }

};

int main() {
  propaganda canal;
  canal.inscrever();
  canal.curta();
}