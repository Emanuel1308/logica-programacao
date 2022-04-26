/* Escrever um algoritmo que lê um conjunto de 4 valores i, a, b, c, onde i é um valor inteiro e positivo
    e a, b, c, são quaisquer valores reais e os escreva. A seguir:
      • Se i=1 escrever os três valores a, b, c em ordem crescente.
      • Se i=2 escrever os três valores a, b, c em ordem decrescente.
      • Se i=3 escrever os três valores a, b, c de forma que o maior entre a, b, c fique dentre os dois
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{

  int i;
  float a, b, c, maior, menor, meio;

  cout << "Digite 1 - CRESCENTE \nDigite 2 - DECRESCENTE \nDigite 3 - MAIOR NO MEIO\n";
  cin >> i;

  // Mior
  if (a >= b)
  {
    maior = a;
  }
  else
  {
    maior = b;
  }
  if (c >= maior)
  {
    maior = c;
  }

  // Menor
  if (a <= b)
  {
    menor = a;
  }
  else
  {
    menor = b;
  }
  if (c <= menor)
  {
    menor = c;
  }

  // Meio
  if (a != maior && a != menor)
  {
    meio = a;
  }
  else if (b != maior && b != menor)
  {
    meio = b;
  }
  else
  {
    meio = c;
  }

  // Imprimir o resultado
  switch (i)
  {
  case 1:
    cout << "Digite o primeiro valor - A: ";
    cin >> a;
    cout << "Digite o segundo valor - B: ";
    cin >> b;
    cout << "Digite o terceiro valor - C: ";
    cin >> c;
    cout << "Crescente: " << menor << ", " << meio << ", " << maior;
    break;
  case 2:
    cout << "Digite o primeiro valor - A: ";
    cin >> a;
    cout << "Digite o segundo valor - B: ";
    cin >> b;
    cout << "Digite o terceiro valor - C: ";
    cin >> c;
    cout << "Decrecente: " << maior << ", " << meio << ", " << menor;
    break;
  case 3:
    cout << "Digite o primeiro valor - A: ";
    cin >> a;
    cout << "Digite o segundo valor - B: ";
    cin >> b;
    cout << "Digite o terceiro valor - C: ";
    cin >> c;
    cout << "Maior no meio: " << menor << ", " << maior << ", " << meio;
    break;

  default:
    cout << "Digite um valor valido";
    break;
  }
}
