# Entrada e Saída de Dados


## Entrada numérica

<details><summary>Ver Conteúdo</summary>

<ol>

### Lendo um inteiro

```bash
10
```

```C
int myInt;

cin >> myInt;
cout << "Inteiro lido = " << myInt << endl;
```

### Lendo vários inteiros separados por espaço ou linhas

```bash
10
20 3.14159265
```

```C
int a, b;
double c;
cin >> a >> b >> c;
// Exibindo valores separados por um
// espaço e encerrando com fim de linha
cout << a << " " << b << " " << c << endl;
```


### Exibindo números de ponto flutuante com casas decimais

```bash
3.14159265
```

```C
#include <iomanip>
//...
double pi;
cin >> pi;
cout << fixed << setprecision(4) << pi << endl; // 3.1416
```

#### Ou usando printf do C

```C
#include <stdio.h>
//...
double pi;
scanf("%lf", &pi);
printf("%.4lf\n", pi);
```


</ol>
</details>


## Entrada texto

<details><summary>Ver Conteúdo</summary>
<ol>


### Uma palavra

```bash
Goku
```

```C
char nome[101];

cin >> nome;
cout << "Oi, eu sou o " << nome << endl;
```

### Frases ou nomes completos

```bash
Hello World!
Ola Mundo!
```

```C
char frase[101];

cin.getline(frase, 100);
cout << frase << endl;

cin.getline(frase, 100);
cout << frase << endl;
```

### Lendo um inteiro seguido de uma frase

```bash
41
Alan Turing
25
Luciano Ribeiro
```

```C
int idade;
char nome[101];

cin >> idade;
cin.ignore();
cin.getline(nome, 100);
cout << "Ola, meu nome eh " << nome << " e eu tenho " << idade << "anos." << endl;

cin >> idade;
cin.ignore();
cin.getline(nome, 100);
cout << "Ola, meu nome eh " << nome << " e eu tenho " << idade << "anos." << endl;
```

</ol>

</details>



## Entrada até EOF

<details><summary>Ver Conteúdo</summary>

<ol>


EOF, ou End-Of-File, é um caracter especial que indica o fim do arquivo. É usado na maratona em casos de testes onde não se sabe com antecedência quantos casos de testes deverão ser processados.

Nesses casos, não é necessário realizar toda a entrada e só depois processar e gerar a saída. É possível (e recomendável), para cada caso de teste lido já realizar o seu processamento e gerar a saída correspondente.

Exemplo de entrada do tipo EOF onde cada linha é um caso de teste contendo dois inteiros e devemos calcular a sua soma.

```bash
10 20
10 33
41 -14
...
51 99
EOF
```

```C
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {     // entrada de um caso
        int resp = a + b;       // processamento
        cout << resp << endl;   // saída
    }
    return 0;
}
```

</ol>

</details>
