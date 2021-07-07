#include <iostream>

using namespace std;

int main() {
  double familia[5], total=0, media;

  for(int i = 0; i < 5; i++) {
    cout << "Gasto da familia[" << i << "] = ";
    cin >> familia[i];
    total += familia[i];
  }

  media = total / 5.0;
  cout << "\nA media de gastos das familias e igual a " << media << "\n\n";

  for(int i = 0; i < 5; i++) {
    if(familia[i] > media) {
      cout << "O gasto da familia[" << i << "] e maior que a media!\n";
    } else if(familia[i] == media) {
       cout << "O gasto da familia[" << i << "] e igual a media!\n";
    } else {
       cout << "O gasto da familia[" << i << "] e menor que a media!\n";
    }
  }

  return 0;
}