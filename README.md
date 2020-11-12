<h1 align="center">Lista de Exercícios de Programação em Linguagem C</h1>
<p align="justify">Listas de exercícios da matéria de Programação em Linguagem C (IFSC) com suas respectivas resoluções. As questões correspondentes a cada arquivo do respositótio podem ser visualizadas abaixo:<br></p>
<h2 align="center">X e Y zero?</h1>
<p align="justify">O código seguinte deve dar três informações a partir de dois valores, x e y: se o valor x é zero, se x não é zero ou se x e y são iguais a zero. Confira se está correto. Caso não esteja, corrija e teste.<br></p>
```<br>
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

```<br>
