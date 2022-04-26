// Tendo como dados de entrada a altura e o sexo de uma pessoa (M, masculino e F, feminino), construa um      algo ritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
//• Para homens: (72.7*h)-58
//• Para mulheres: (62.1*h)-44.7

#include <iostream>
#include <string.h>

using namespace std;

int main()
{

  double altura, PiH, PiF;
  char S;

  cout << "Digite: \nM - Para Masculino\nF - Para Feminino\n";
  cin >> S;

  switch (S)
  {
  case 'M':
    cout << "Digite a sua altura: ";
    cin >> altura;
    PiH = (72.7 * altura) - 58;
    cout << "O seu peso ideal é de: " << PiH << "Kg";
    break;
  case 'F':
    cout << "Digite a sua altura: ";
    cin >> altura;
    PiF = (62.1 * altura) - 47.7;
    cout << "O seu peso ideal e de: " << PiF << "Kg";
    break;

  default:
    cout << "Informe um valor válido";
    break;
  }
}
