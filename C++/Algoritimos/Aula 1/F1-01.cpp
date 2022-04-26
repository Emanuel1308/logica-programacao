// 1-Escreva um algoritmo que leia três números inteiros e positivos (A, B, C) e calcule a seguinte expressão:
//   D=R+S/2   R=(A + B)^2 S=(B + C)^2

#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{

  int A, B, C, R, S;
  double D;

  // Entrada dos números
  cout << "Digite o primeiro numero: ";
  cin >> A;
  cout << "Digite o segundo numero: ";
  cin >> B;
  cout << "Digite o terceiro numero: ";
  cin >> C;

  // Calculo
  R = pow((A + B), 2);
  S = pow((B + C), 2);
  D = (R + S) / 2;

  // Resultado
  cout << "O resultado total foi de: " << D;
}