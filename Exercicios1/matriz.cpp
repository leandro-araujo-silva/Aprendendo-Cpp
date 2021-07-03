#include <iostream>

using namespace std;

int main() {
  int matriz[2][3];

  cout << "Digite os valores da matriz:\n";

  for(int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Matriz[" << i << "][" << j << "] = ";
      cin >> matriz[i][j];
    }
  }

   for(int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Matriz[" << i << "][" << j << "] = " << matriz[i][j] << endl;
    }
  }

  return 0;
}