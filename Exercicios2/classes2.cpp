#include <iostream>

using namespace std;

class carro{
  private:
  int ano;
  float valor, km;

  public:
  
  //Construtor
  carro(int a=0, float v=-1, float k = -1) {
    ano = a;
    valor = v;
    km = k;
  }

  // ano
  void setano(int a) {
    ano = a;
    //this->ano = ano;
  }

  int getano() {
    return ano;
  }
  
  // Valor
  void setvalor(float v) {
    valor = v;
  }

  float getvalor() {
    return valor;
  }

  // km
  void setkm(float k) {
    km = k;
  }

  float getkm() {
    return km;
  }

};

int main() {
  carro palio;
  palio.setano(1995);
  palio.setvalor(10000);
  palio.setkm(150000);
  cout << "Palio: \n";
  cout << "Ano: " << palio.getano() << endl;
  cout << "Valor: " << palio.getvalor() << endl;
  cout << "Quilometragem: " << palio.getkm() << endl << endl;

  carro celta;

  celta.setano(2000);
  celta.setvalor(12000);
  celta.setkm(200000);
  cout << "Celta: \n";
  cout << "Ano: " << celta.getano() << endl;
  cout << "Valor: " << celta.getvalor() << endl;
  cout << "Quilometragem: " << celta.getkm() << endl << endl;

  carro ferrari;

  ferrari.setano(2020);
  ferrari.setvalor(300000);
  cout << "Ferrari: \n";
  cout << "Ano: " << ferrari.getano() << endl;
  cout << "Valor: " << ferrari.getvalor() << endl;
  cout << "Quilometragem: " << ferrari.getkm() << endl << endl;

  carro mercedes(2021, 500000);

  cout << "Mercedes: \n";
  cout << "Ano: " << mercedes.getano() << endl;
  cout << "Valor: " << mercedes.getvalor() << endl;
  cout << "Quilometragem: " << mercedes.getkm() << endl;


  return 0;
}