#include <iostream>

using namespace std;

int main () {
  double ab1, ab2, media, reav, final, maior=0, media2, mediaf;

  cout << "Digite a nota da ab1: ";
  cin >> ab1;
  cout << "Digite a nota da ab2: ";
  cin >> ab2;

  maior = ab1;

  if (ab2 > maior) {
    maior = ab2;
  }

  media = (ab1 + ab2) / 2;

  cout << "Sua nota: " << media << endl;

  if (media >= 7) {
    cout << "Vc foi aprovado!\n";
  } else {
    cout << "Vai fazer reavaliacao!\n";

    cout << "Digite a nota da reavaliacao: ";
    cin >> reav;

    media2 = (maior + reav) / 2;

    cout << "Nova media: " << media2 << endl;

    if (media2 >= 7) {
      cout << "Voce foi aprovado!\n";
    } else {
      cout << "Vai fazer prova final\n";

      cout << "Digite a nota da sua prova final: ";
      cin >> final;

      mediaf = (media2 + final) / 2;

      cout << "Nova media: " << mediaf << endl;

      if (mediaf >= 5) {
        cout << "Voce foi aprovado!\n";
      } else {
        cout << "Voce foi reprovado!\n";
      }
    }

  }

  return 0;
}