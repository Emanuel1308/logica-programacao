// Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em segundos e mostre-o expresso em horas, minutos e segundos.

#include <iostream>
#include <string.h>

using namespace std;

int main()
{

  int H, M, S, Ts;

  cout << "A duracao do evento em segundos foi de: ";
  cin >> Ts;

  H = Ts / 3600;
  M = (Ts - (H * 3600)) / 60;
  S = (Ts - (H * 3600) - (M * 60));

  cout << "O total foi de: " << H << " horas " << M << " minutos e " << S << " segundos";
}