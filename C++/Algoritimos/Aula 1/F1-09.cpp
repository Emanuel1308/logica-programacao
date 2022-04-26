// 9 - Elaborar um algoritmo que lê 3 valores a,b,c e verifica se eles formam ou não um triângulo. Supor
// que os valores lidos são inteiros e positivos. Caso os valores formem um triângulo, calcular e
// escrever a área deste triângulo. Se não formam triângulo escrever os valores lidos. (se a > b + c
// não formam triângulo algum, se a é o maior)

#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
  int A, B, C;
  bool problema = false;
  double area, Sp = 0;

  // Entrada dos números
  cout << "Digite o primeiro numero: ";
  cin >> A;
  cout << "Digite o segundo numero: ";
  cin >> B;
  cout << "Digite o terceiro numero: ";
  cin >> C;

  // Calculos
  if (A > B + C)
  {
    problema = true;
  }
  else if (B > A + C)
  {
    problema = true;
  }
  else if (C > A + B)
  {
    problema = true;
  }
  else
  {
    // Sp=(a+b+c)/2 - Semi perimetro
    // area = raiz(Sp.(Sp-A).(Sp-B).(Sp-C)) - Area com os valores dos lados
    Sp = (A + B + C) / 2;
    area = sqrt((Sp * (Sp - A) * (Sp - B) * (Sp - C)));

    cout << "Area: " << area;
  }

  if (problema)
  {
    cout << "Houve um problema, nao é possivel formar um triangulo, pois um dos lados é maior que o outro";
  }
}