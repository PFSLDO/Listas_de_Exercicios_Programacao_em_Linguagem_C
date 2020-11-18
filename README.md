<h1 align="center">Lista de Exercícios de Programação em Linguagem C</h1>
<p align="justify">Listas de exercícios da matéria de Programação em Linguagem C (IFSC) com suas respectivas resoluções. As questões correspondentes a cada arquivo do respositótio podem ser visualizadas abaixo:<br></p>
<h2 align="center">X e Y zero?</h1>
<p align="justify">O código seguinte deve dar três informações a partir de dois valores, x e y: se o valor x é zero, se x não é zero ou se x e y são iguais a zero. Confira se está correto. Caso não esteja, corrija e teste.<br></p>

```
    #define VPL_MOODLE
    #include <stdio.h>
    int main() {
      int x, y;
      #ifndef VPL_MOODLE
      printf("Digite os valores de x e de y:");
      #endif
      scanf("%d %d", &x, &y);
      if (x == 0) {
      if (y == 0)
        printf("x e y zero\n");
      else printf("x nao zero\n");
      else printf("soh x zero\n");
      }
    return 0;
    }
```
<h2 align="center">Manhã ou tarde?</h1>
<p align="justify">O código seguinte deve informar se é manhã, tarde ou noite a partir do valor informado da hora do dia. Considere manhã das 6h até meio-dia, tarde até 17 horas. Confira se está correto. Caso não esteja, corrija e teste.<br></p>

```
    #define VPL_MOODLE
    #include <stdio.h>
    int main() {
      int hora;
      #ifndef VPL_MOODLE
      printf("Digite a hora:");
      #endif
      scanf("%d", &hora);
      if (hora > 12) {
        printf("Tarde\n");
      }
      if (hora >18)
        printf("Noite\n");
      else printf("Manha\n"); //sem acento
      return 0;
    }
```
<h2 align="center">Hora inválida?</h1>
<p align="justify">No código anterior, inclua uma verificação: se hora for menor que zero ou maior que 23, informar “Invalida” (sem acento).<br></p>
<h2 align="center">Manhã, tarde ou noite?</h1>
<p align="justify">No código anterior, inclua os minutos. Agora, a lógica deve ser:<br>
manhã das 6h00 até 11h59; tarde das 12h00 até 17h59; noite das 18h00 até 5h59. Verifique se o valor informado dos minutos é válido (0 a 59). Caso contrário, informe “Minuto invalido” (sem acento).<br></p>
<h2 align="center">Temperatura</h1>
<p align="justify">O código seguinte deve receber a leitura de temperatura de um sensor colocado em um recipiente com água e informar: "Quente", para temperatura maior que 40oC; "Morna" para temperatura entre 25 e 40oC; "Fria", para menor que 25oC; "Inválida", se estiver abaixo de 0 ou acima de 100oC. Confira se está correto. Caso não esteja, corrija e teste. Considere que a variável que armazena a temperatura é do tipo inteiro.<br></p>

```
#include <stdio.h>
int main() {
  int temp;
  printf("Digite a temperatura:");
  scanf("%d", &temp);
  if (temp < 0 && temp >100) {
    printf("Inválida\n");
  }
  if (temp > 40) {
    printf("Quente\n");
  else if (temp >= 25)
    printf("Morna\n");
  }
  else printf("Fria\n");
  return 0;
}
```
<h2 align="center">Múltiplos</h1>
<p align="justify">Escreva um programa que leia dois números inteiros e informe se são múltiplos ou não.<br>
Saída (sem acentos):<br>
Multiplos<br>
NAO multiplos<br></p>
<h2 align="center">Centena, dezena e unidade</h1>
<p align="justify">Escreva um programa que leia um valor inteiro até 999 e informe quantas centenas, dezenas e unidades formam esse número. Dica: usar resto da divisão.<br>
Saída: 3 números, separados por espaço, indicando a quantidade de centenas, dezenas e unidades, respectivamente.<br></p>
<h2 align="center">Caixa eletrônico</h1>
<p align="justify">Escreva um programa para selecionar as notas de papel moeda em um caixa eletrônico. A entrada é o valor solicitado pelo cliente. Confira se o valor é múltiplo de 5 (menor nota disponível). Separe o valor em notas de 100, 50, 10 e 5, usando as maiores notas possíveis.<br>
Saída:<br>
4 números, separados por espaço, representando o número de notas de 100, 50, 10 e 5, respectivamente OU Invalido (sem acento), se o valor não for múltiplo de 5<br></p>

<h2 align="center">Tabuada</h1>
<p align="justify">Peça um número inteiro que se deseje saber a tabuada. Mostre a tabuada desse número, de 1 até 10.<br>
Exemplo: Número desejado: 3<br>
Saída:<br>

3 x 1 = 3<br>
3 x 2 = 6<br>
3 x 3 = 9<br>
3 x 4 = 12<br>
3 x 5 = 15<br>
3 x 6 = 18<br>
3 x 7 = 21<br>
3 x 8 = 24<br>
3 x 9 = 27<br>
3 x 10 = 30<br></p>


<h2 align="center">Linha asteriscos</h1>
<p align="justify">Peça um número inteiro e imprima uma linha de asteriscos com esse tamanho informado.<br>
Exemplo: 5<br>
Saída:<br>
*****<br></p>

<h2 align="center">Retângulo de asteriscos</h1>
<p align="justify">Peça dois números inteiros, que irão representar a largura e altura de um retângulo de asteriscos. Imprima na tela.<br>
Exemplo: 5 3<br>
Saída:<br>
*****<br>
*****<br>
*****<br></p>


<h2 align="center">Triângulo de asteriscos</h1>
<p align="justify">Peça um número inteiro, que irá representar o tamanho da base de um triângulo, a ser impresso na tela como mostra o exemplo.<br>
Exemplo: 5<br>
Saída:<br>
*<br>
**<br>
***<br>
****<br>
*****<br></p>

<h2 align="center">Triângulo invertido de asteriscos</h1>
<p align="justify">Peça um número inteiro, que irá representar o tamanho da base de um triângulo, que estará no topo da tela e será impresso como mostra o exemplo.<br>
Exemplo: 5<br>
Saída:<br>
*****<br>
****<br>
***<br>
**<br>
*<br>
<br></p>

<h2 align="center">Triângulo numérico</h1>
<p align="justify">Peça um número inteiro, que irá representar o tamanho da base de um triângulo, e imprima na tela como mostra o exemplo.<br>
Exemplo: 5<br>
Saída:<br>
1<br>
2#1<br>
3#2#1<br>
4#3#2#1<br>
5#4#3#2#1<br></p>

<h2 align="center">Triângulo numérico</h1>
<p align="justify">Peça um número inteiro, que irá definir a altura da copa de uma árvore de Natal e desenhe na tela como mostra o exemplo.<br>
Exemplo: 5<br>
Saída:<br>
    *<br>
   ***<br>
  *****<br>
 *******<br>
*********<br>
   ***<br></p>

<h2 align="center">Info 0 a 5</h1>
<p align="justify">Faça um programa em C que peça um número de 0 a 5 e informe o seguinte:<br>
– Se for 0 ou 2, informe que é um número par<br>
– Se for 3 ou 5, informe que é um número primo<br>
– Se for 1 ou 4, informe que é um quadrado perfeito<br>
- Se for maior que 5 ou menor que 0, informe que é inválido<br>
Use switch/case<br></p>

<h2 align="center">Movendo-se na casa</h1>
<p align="justify">No slide 5 de https://www.programmingbasics.org/pt/beginner/fsm.html é mostrado um exemplo simplificado de diagrama de estados. Fiz uma modificação, incluindo um estado inicial Rua.<br>
Use o programa base e implemente o restante no formato de uma máquina de estados usando switch. Os eventos de movimentação são representados por uma única letra (N, S, L, O, F). F é para fim do programa, quando estiver de volta na "Rua".<br></p>

```
#define VPL_MOODLE
#include <stdio.h>

enum {RUA, SALA, QUARTO, COZINHA}; // uma forma de representar números inteiros
// com um "apelido". RUA = 0, SALA = 1, ...

int main() {
  int state = RUA;
  char event;

  while (1) {
    #ifndef VPL_MOODLE
    printf("\nVocê está em %d. Para onde você quer ir? ", state);
    #else
    printf("%d\n", state);
    #endif
    scanf(" %c", &event); //espaco na frente para consumir o 'enter'

    switch (state) {
      case RUA:
      if (event == 'S') {
        state = SALA;
        break;
      }
      if (event == 'F') {
        return 0;
      }
    }
  }
  return 0;
}
```

<h2 align="center">Temperatura média com vetor</h1>
<p align="justify">Faça um programa que peça 5 temperaturas, faça a média e mostre o resultado. Em seu código, use vetor (array) para armazenar as temperaturas. Use um laço para fazer a soma necessária para o cálculo da média.<br></p>

<h2 align="center">Ingredientes para restaurante</h1>
<p align="justify">Pedir peso de 4 ingredientes para refeição (arroz, feijão, carne, cenoura). Importante: Use vetor para armazenar essas quantidades.<br>
Pedir o número total de refeições a produzir.<br>
Mostrar quantidade a comprar de cada ingrediente.<br>
Exemplo: 100g de arroz, 50 de feijão, 120 de carne e 40 de cenoura.<br>
Para produzir 10 refeições, o resultado deve ser:<br>
Você deve comprar:<br>
1000g de arroz, 500 de feijão, 1200 de carne e 400 de cenoura.<br></p>
