#include <bits/stdc++.h>

using namespace std;

int main() {
  char mensagem[26 + 1]; // tamanho maximo = 26 + caracter \0

  while (cin >> mensagem) // entrada até EOF (End Of File)
  {
    int n;
    cin >> n; // quantidade de indices a serem lidas
    for (int i = 0; i < n; i++) {
      int indice;
      cin >> indice;
      cout << mensagem[indice - 1]; // -1 porque o vetor mensagem é
                                    // indexado em 0 e a entrada é em 1
    }
    cout << endl; // apos exibir a mensagem, é necessário encerrar a
                  // linha
  }
  return 0;
}