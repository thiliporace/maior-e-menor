#include <iostream>

using namespace std;

int main() {
  int numero = 0;
  int maior = INT32_MIN;
  int menor = INT32_MAX;
  int contador = 0;
  const int QUANTIDADE_NUMEROS = 10;
  while (contador < QUANTIDADE_NUMEROS) {
    cout << "Digite um numero (" << (contador + 1) << "): ";
    cin >> numero;

    if (numero > maior)
      maior = numero;
    if (numero < menor)
      menor = numero;
    ++contador;
  }
  cout << "Menor numero é " << menor << " e maior numero é " << maior << ".\n";
}