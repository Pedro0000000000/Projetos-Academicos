# Tipos de Dados em C 🖥️

Este repositório contém exemplos e explicações sobre os tipos de dados básicos em C. Cada tipo tem um propósito específico para armazenar e manipular diferentes tipos de dados, como números inteiros, decimais, caracteres individuais ou strings.

## Tipos de Dados

### `int` (Inteiro)

- **Descrição:** Usado para armazenar números inteiros (sem casas decimais).
- **Tamanho:** 4 bytes na maioria dos sistemas.
- **Exemplo no código:**
  ```c
  int idade = 19;
  int quantidade = 20;
  ```

Uso ideal: Contagens, idades ou qualquer valor inteiro.

### `float` (Ponto flutuante de precisão simples)

- **Descrição:** Usado para armazenar números decimais com precisão simples.
  Tamanho: 4 bytes.
- **Precisão:** Aproximadamente 6 a 7 dígitos significativos.
  ### Exemplo no código:

```c
float altura = 1.72;
```

Uso ideal: Representar valores com casas decimais que não exigem alta precisão (ex.: altura, temperaturas).
double (Ponto flutuante de precisão dupla)
Descrição: Similar ao float, mas com maior precisão.
Tamanho: 8 bytes.
Precisão: Aproximadamente 15 a 16 dígitos significativos.

### Exemplo no código:

```c
double peso = 59.5;
```

Uso ideal: Trabalhar com números decimais quando é necessária maior precisão (ex.: cálculos científicos, financeiros).
char (Caractere)
Descrição: Usado para armazenar um único caractere.
Tamanho: 1 byte.

### Exemplo no código:

```c
char letra = 'P';
```

Uso ideal: Armazenar letras ou símbolos individuais (ex.: iniciais, letras em uma palavra).
char[] (Cadeia de caracteres ou String)
Descrição: Um array de char que armazena uma sequência de caracteres.
Tamanho: Depende do tamanho do array.

### Exemplo no código:

```c
char nome[27] = "Pedro";
```

Uso ideal: Armazenar textos, nomes ou qualquer sequência de caracteres. O último caractere é sempre \0, que indica o fim da string.

# Conclusão

### Esses tipos de dados são fundamentais na linguagem C e são usados para armazenar informações como números inteiros, valores decimais, caracteres e textos. Cada tipo é adequado para diferentes finalidades, garantindo que possamos manipular dados de maneira eficiente.
