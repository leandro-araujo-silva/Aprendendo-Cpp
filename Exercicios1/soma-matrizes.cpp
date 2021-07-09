#include <iostream>

using namespace std;

void leia_matriz(int matriz[][10], int tam) {
  int valor;

  for (int i = 0; i < tam; i++) {
    for(int j = 0; j < tam; j++) {
       cout << "Matriz[" << i << "][" << j << "]: ";
       cin >> valor;
       matriz[i][j] = valor;
    }
  }
}

void soma_matrizes(int m1[][10], int m2[][10], int r1[][10], int tam) {
  int valor;

  for(int i = 0; i < tam; i++) {
    for(int j = 0; j < tam; j++) {
      valor = m1[i][j] + m2[i][j];
      r1[i][j] = valor;
    }
  }
}

void subtracao_matrizes(int m1[][10], int m2[][10], int r2[][10], int tam) {
  int valor;

  for(int i = 0; i < tam; i++) {
    for(int j = 0; j < tam; j++) {
      valor = m1[i][j] - m2[i][j];
      r2[i][j] = valor;
    }
  }
}

int main() {
  int mat1[10][10], mat2[10][10], r1[10][10], r2[10][10];
  int tam, resposta;

  cout << "Digite o tamanho da matriz: ";
  cin >> tam;

  leia_matriz(mat1, tam);

  leia_matriz(mat2, tam);

  soma_matrizes(mat1, mat2, r1, tam);

  subtracao_matrizes(mat1, mat2, r2, tam);

  cout << "\nSoma: a+b\n";
  for(int i = 0; i < tam; i++) {
    for (int j = 0; j < tam; j++) {
      resposta = r1[i][j];
      cout << resposta << " ";
    }
    cout << endl;
  }

  cout << "\nSubtracao: a-b\n";
  for(int i = 0; i < tam; i++) {
    for (int j = 0; j < tam; j++) {
      resposta = r2[i][j];
      cout << resposta << " ";
    }
    cout << endl;
  }

  return 0;
}