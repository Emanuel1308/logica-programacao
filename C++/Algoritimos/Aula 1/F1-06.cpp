// O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao consumidor

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  double Cf, imposto, distribuidor, Cconsu;

  cout << "Digite o custo de fabrica: ";
  cin >> Cf;

  imposto = (Cf * 45) / 100;       // Valor do inposto
  distribuidor = (Cf * 28) / 100;  // Valor do distribuidor
  Cconsu = imposto + distribuidor; // Valor do consumidor

  cout << "O custo ao consumidor foi de: R$" << Cconsu;
}