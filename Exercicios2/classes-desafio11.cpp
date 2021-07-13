#include <iostream>

using namespace std;

class cidadesbrasil {
  private:
  int pop;
  double territorio, pib;

  public:

  // Construtor
  cidadesbrasil(int p=-1, double ter=-1, double bruto= -1) {
    pop = p;
    territorio = ter;
    pib = bruto;
  } 

  // População
  void setpop(int p) {
    pop = p;
  }

  int getpop() {
    return pop;
  }

  // territorio
  void setterritorio(double ter) {
    territorio = ter;
  }

  double getterritorio() {
    return territorio;
  }

  // PIB
  void setpib(double bruto) {
    pib = bruto;
  }

  double getpib() {
    return pib;
  }

};

int main() {
  cidadesbrasil vicosa;
  vicosa.setpop(79388);
  vicosa.setterritorio(299418);
  vicosa.setpib(20832.20);
  cout << "Vicosa:\n";
  cout << "Populacao: " << vicosa.getpop() << endl;
  cout << "Area territorial: " << vicosa.getterritorio() << " km2" << endl;
  cout << "PIB per capita: R$ " << vicosa.getpib() << endl << endl;

  return 0;
}