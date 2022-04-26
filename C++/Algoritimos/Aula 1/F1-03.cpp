// Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias.

#include <iostream>
#include <string.h>

using namespace std;

int main()
{

  int A, M, D, Td;

  cout << "A quatidade de dias que voce esta vivo e de: ";
  cin >> Td;

  A = Td / 365;
  M = (Td - (A * 365)) / 30;
  D = (Td - (A * 365) - (M * 30));

  cout << "O total foi de: \n"
       << D << " Dias \n"
       << M << " Mes \n"
       << A << " Anos";
}