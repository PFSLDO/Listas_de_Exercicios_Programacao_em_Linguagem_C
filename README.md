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
<p align="justify">O código seguinte deve informar se é manhã, tarde ou noite a partir do valor informado da hora do dia. Considere manhã das 6h até meio-dia, tarde até 18 horas. Confira se está correto. Caso não esteja, corrija e teste.<br></p>

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
