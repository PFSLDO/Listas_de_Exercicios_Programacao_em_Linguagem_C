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
