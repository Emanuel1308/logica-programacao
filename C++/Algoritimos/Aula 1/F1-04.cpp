// 4- Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno. Considerar
// que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente.

#include <iostream>
#include <string.h>

using namespace std;

int main()
{

  double media, n1, n2, n3;

  cout << "Informe a primeira nota: ";
  cin >> n1;
  cout << "Informe a segunda nota: ";
  cin >> n2;
  cout << "Informe a terceira nota: ";
  cin >> n3;

  media = ((n1 * 2) + (n2 * 3) + (n3 * 5) / 3);

  cout << "A media final do aluno foi: " << media;
}