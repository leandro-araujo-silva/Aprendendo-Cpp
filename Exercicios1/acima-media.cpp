#include <iostream>

using namespace std;

int main() {
  float n1, n2, n3, media, mediat;

  cout << "Informe a nota 1: ";
  cin >> n1;
  cout << "Informe a nota 2: ";
  cin >> n2;
  cout << "Informe a nota 3: ";
  cin >> n3;
  cout << "Informe a media da turma: ";
  cin >> mediat;

  media = (n1 + n2 + n3) / 3;

  cout << "Sua media: " << media << endl;

  if(media > mediat) {
    cout << "Vc esta acima da media!";
  } else if (media == mediat) {
    cout << "Vc esta na media da turma!";
  } else {
    cout << "Vc esta abaixo da media!";
  }

  return 0;
}