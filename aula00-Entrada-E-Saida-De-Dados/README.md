# Entrada e Saída de Dados

## Entrada e numérica

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
20 30
```

```C
int a, b, c;

cin >> a;
cin >> b;
cin >> c;
// Exibindo os valores separados por um espaço e encerrando com fim de linha
cout << a << " " << b << " " << c << endl;
```

### ou

```C
cin >> a >> b >> c;
cout << a << " " << b << " " << c << endl;
```

## Lendo palavras, nomes, etc

```bash
Goku
```

```C
char nome[101];

cin >> nome;
cout << "Oi, eu sou o " << nome << endl;
```

## Frases ou nomes completos

```bash
Hello World!
```

```C
char frase[101];

cin.getline(frase, 100);
cout << frase << endl;
```

## Lendo um inteiro seguido de uma frase

```bash
41
Alan Turing
```

```C
int idade;
char nome[101];

cin >> idade;
cin.ignore();
cin.getline(nome, 100);
cout << "Ola, meu nome eh " << nome << " e eu tenho " << idade << "anos." << endl;
```
