// 2- Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.

#include <iostream>
#include <string.h>

using namespace std;

int main()
{

  int A, M, D, Td, Vm = 0, Va = 0;

  cout << "Digite o ano em que voce nasceu: ";
  cin >> A;
  cout << "Digite o mes em que voce nasceu: ";
  cin >> M;
  cout << "Digite o dia em que voce nasceu: ";
  cin >> D;

  // Validacao do ano
  if ((A % 4) == 0)
  {
    Va = A * 366;
  }
  else
  {
    Va = A * 365;
  }

  // Validacao do mes
  if (M >= 1 && M <= 12)
  {
    if ((D >= 1 && D <= 31) && (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12))
    {
      Vm = M * 31;
    }
    else if ((D >= 1 && D <= 30) && (M == 4 || M == 6 || M == 9 || M == 11))
    {
      Vm = M * 30;
    }
    else if ((D >= 1 && D <= 28) && (M == 2))
    {
      Vm = M * 28;
    }
    else if ((D == 29 && M == 2) && (A % 400 == 0 || A % 4 == 0))
    {
      Vm = M * 29;
    }
  }

  Td = Va + Vm + D;

  cout << "Voce nasceu em: " << D << "/" << M << "/" << A << "\n";
  cout << "A quantidade em dias e: " << Td << " dias";
}