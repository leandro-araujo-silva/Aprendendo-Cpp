class carro
{
private:
  int ano;
  float valor, km;

public:
  //Construtor
  carro(int a, float v, float k);

  // ano
  void setano(int a);

  int getano();

  // Valor
  void setvalor(float v);

  float getvalor();

  // km
  void setkm(float k);

  float getkm();
};