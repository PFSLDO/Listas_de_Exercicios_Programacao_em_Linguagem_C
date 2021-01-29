<h1 align="center">Lista de Exercícios de Programação em Linguagem C</h1>
<p align="justify">Listas de exercícios da matéria de Programação em Linguagem C (IFSC) com suas respectivas resoluções. As questões correspondentes a cada arquivo do respositótio podem ser visualizadas abaixo:<br></p>
<h2 align="center">X e Y zero?</h2>
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
<h2 align="center">Manhã ou tarde?</h2>
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
<h2 align="center">Hora inválida?</h2>
<p align="justify">No código anterior, inclua uma verificação: se hora for menor que zero ou maior que 23, informar “Invalida” (sem acento).<br></p>
<h2 align="center">Manhã, tarde ou noite?</h2>
<p align="justify">No código anterior, inclua os minutos. Agora, a lógica deve ser:<br>
manhã das 6h00 até 11h59; tarde das 12h00 até 17h59; noite das 18h00 até 5h59. Verifique se o valor informado dos minutos é válido (0 a 59). Caso contrário, informe “Minuto invalido” (sem acento).<br></p>
<h2 align="center">Temperatura</h2>
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
<h2 align="center">Múltiplos</h2>
<p align="justify">Escreva um programa que leia dois números inteiros e informe se são múltiplos ou não.<br>
Saída (sem acentos):<br>
Multiplos<br>
NAO multiplos<br></p>
<h2 align="center">Centena, dezena e unidade</h2>
<p align="justify">Escreva um programa que leia um valor inteiro até 999 e informe quantas centenas, dezenas e unidades formam esse número. Dica: usar resto da divisão.<br>
Saída: 3 números, separados por espaço, indicando a quantidade de centenas, dezenas e unidades, respectivamente.<br></p>
<h2 align="center">Caixa eletrônico</h2>
<p align="justify">Escreva um programa para selecionar as notas de papel moeda em um caixa eletrônico. A entrada é o valor solicitado pelo cliente. Confira se o valor é múltiplo de 5 (menor nota disponível). Separe o valor em notas de 100, 50, 10 e 5, usando as maiores notas possíveis.<br>
Saída:<br>
4 números, separados por espaço, representando o número de notas de 100, 50, 10 e 5, respectivamente OU Invalido (sem acento), se o valor não for múltiplo de 5<br></p>

<h2 align="center">Tabuada</h2>
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


<h2 align="center">Linha asteriscos</h2>
<p align="justify">Peça um número inteiro e imprima uma linha de asteriscos com esse tamanho informado.<br>
Exemplo: 5<br>
Saída:<br>
*****<br></p>

<h2 align="center">Retângulo de asteriscos</h2>
<p align="justify">Peça dois números inteiros, que irão representar a largura e altura de um retângulo de asteriscos. Imprima na tela.<br>
Exemplo: 5 3<br>
Saída:<br>
*****<br>
*****<br>
*****<br></p>


<h2 align="center">Triângulo de asteriscos</h2>
<p align="justify">Peça um número inteiro, que irá representar o tamanho da base de um triângulo, a ser impresso na tela como mostra o exemplo.<br>
Exemplo: 5<br>
Saída:<br>
*<br>
**<br>
***<br>
****<br>
*****<br></p>

<h2 align="center">Triângulo invertido de asteriscos</h2>
<p align="justify">Peça um número inteiro, que irá representar o tamanho da base de um triângulo, que estará no topo da tela e será impresso como mostra o exemplo.<br>
Exemplo: 5<br>
Saída:<br>
*****<br>
****<br>
***<br>
**<br>
*<br>
<br></p>

<h2 align="center">Triângulo numérico</h2>
<p align="justify">Peça um número inteiro, que irá representar o tamanho da base de um triângulo, e imprima na tela como mostra o exemplo.<br>
Exemplo: 5<br>
Saída:<br>
1<br>
2#1<br>
3#2#1<br>
4#3#2#1<br>
5#4#3#2#1<br></p>

<h2 align="center">Triângulo numérico</h2>
<p align="justify">Peça um número inteiro, que irá definir a altura da copa de uma árvore de Natal e desenhe na tela como mostra o exemplo.<br>
Exemplo: 5<br>
Saída:<br>
    *<br>
   ***<br>
  *****<br>
 *******<br>
*********<br>
   ***<br></p>

<h2 align="center">Info 0 a 5</h2>
<p align="justify">Faça um programa em C que peça um número de 0 a 5 e informe o seguinte:<br>
– Se for 0 ou 2, informe que é um número par<br>
– Se for 3 ou 5, informe que é um número primo<br>
– Se for 1 ou 4, informe que é um quadrado perfeito<br>
- Se for maior que 5 ou menor que 0, informe que é inválido<br>
Use switch/case<br></p>

<h2 align="center">Movendo-se na casa</h2>
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

<h2 align="center">Temperatura média com vetor</h2>
<p align="justify">Faça um programa que peça 5 temperaturas, faça a média e mostre o resultado. Em seu código, use vetor (array) para armazenar as temperaturas. Use um laço para fazer a soma necessária para o cálculo da média.<br></p>

<h2 align="center">Ingredientes para restaurante</h2>
<p align="justify">Pedir peso de 4 ingredientes para refeição (arroz, feijão, carne, cenoura). Importante: Use vetor para armazenar essas quantidades.<br>
Pedir o número total de refeições a produzir.<br>
Mostrar quantidade a comprar de cada ingrediente.<br>
Exemplo: 100g de arroz, 50 de feijão, 120 de carne e 40 de cenoura.<br>
Para produzir 10 refeições, o resultado deve ser:<br>
Você deve comprar:<br>
1000g de arroz, 500 de feijão, 1200 de carne e 400 de cenoura.<br></p>

<h2 align="center">Contar letra "a"</h2>
<p align="justify">Faça um programa que receba uma palavra e conte quantas vezes a letra "a" aparece nesta palavra. Apresente o número como resultado.<br>
Não use <string.h><br></p>

```
#define VPL_MOODLE
#include <stdio.h>

int main() {
    char texto[20];
    #ifndef VPL_MOODLE
    printf("Digite uma palavra: ");
    #endif
    scanf("%19s", texto); //scanf não lê espaços. Em outro exercício, usamos fgets
    
    return 0;
}
```

<h2 align="center">osrever me gnirtS (String em reverso)</h2>
<p align="justify">Faça um programa que receba uma palavra, preencha uma variável com o conteúdo da string recebida em reverso (usando um laço) e mostre o resultado.<br>
Não use <string.h><br></p>

```
#define VPL_MOODLE
#include <stdio.h>

int main() {
    char texto[20];
    char reverso[20];
    #ifndef VPL_MOODLE
    printf("Digite um texto: ");
    #endif
    scanf("%19s", texto); //scanf não lê espaços. Em outro exercício, usamos fgets

    return 0;
}
```

<h2 align="center">Detector de palíndromo</h2>
<p align="justify">Faça um programa que receba uma palavra, preencha uma variável com o conteúdo da string recebida em reverso e, se a string em reverso for igual à primeira, informar que é um palíndromo.<br></p>

```
#define VPL_MOODLE
#include <stdio.h>
#include <string.h>

int main() {
    char texto[20];
    char reverso[20];
    #ifndef VPL_MOODLE
    printf("Digite um texto: ");
    #endif
    scanf("%19s", texto); //scanf não lê espaços. Em outro exercício, usamos fgets

    return 0;
}
```

<h2 align="center">Nome completo</h2>
<p align="justify">Faça um programa com três variáveis (string): nome, sobrenome e nomecompleto<br>
Peça para o usuário o nome e o sobrenome<br>
Preencha o vetor nomecompleto<br>
Mostre na tela o vetor nomecompleto<br></p>

```
#define VPL_MOODLE
#include <stdio.h>
#include <string.h>

int main() {
    char nome[30];
    char sobrenome[30];
    
    #ifndef VPL_MOODLE
    printf("Digite o nome: ");
    #endif
    fgets(nome, sizeof(nome), stdin); // fgets consegue ler espaços. Problema é que lê o enter
    nome[strlen(nome)-1] = '\0'; // para retirar o enter capturado com fgets


    return 0;
}
```

<h2 align="center">Mês por extenso</h2>
<p align="justify">Faça um programa que peça um mês (no formato número) e retorne esse mês por extenso<br>
Use uma matriz para guardar o mapeamento número -> texto, seguindo o exemplo do número por extenso no material em pdf.<br></p>

```
#define VPL_MOODLE
#include <stdio.h>

const char NExtenso[10][7] = {"zero", "um", "dois", "três", "quatro", "cinco", "seis", "sete", "oito", "nove"};

int main() {
    int num;
    
    #ifndef VPL_MOODLE
    printf("Digite um número de 0 a 9\n");
    #endif
    scanf("%d",&num);
    if ((num>=0) && (num<=9))  {
        printf("Você digitou o número: %s\n", NExtenso[num]);
    }
    else  {
        printf("Digite um número entre 0 e 9\n");
    }

    return 0;
}
```

<h2 align="center">Atividade: Ficção interativa</h2>
<p align="justify">Escreva uma história interativa usando strings como entrada. Você pode usar strcmp para verificar as respostas do usuário. Faça, pelo menos, 3 interações com o usuário.<br>
Exemplos: nome; subir/descer; esquerda/direita; norte/sul; lago/estrada; carro/bicicleta; barco/prancha<br>
Exemplos: https://pt.wikipedia.org/wiki/Fic%C3%A7%C3%A3o_interativa<br>
http://blog.visme.co/10-mind-blowing-interactive-stories-that-will-change-the-way-you-see-the-world/<br>
http://iplayif.com/?story=http%3A%2F%2Fwww.ifarchive.org%2Fif-archive%2Fgames%2Fzcode%2Fzdungeon.z5<br>
Esse não é ficção interativa, mas tem interação com o usuário através do Telegram:<br>
http://aprendizartifice.blogspot.com/2018/02/assistente-de-ensino-teaching-assistant.html<br></p>

<h2 align="center">Corrigindo erro em matriz</h2>
<p align="justify">O programa seguinte deve preencher uma matriz de tamanho LIN x COL com valores em ordem crescente, iniciando em 1. Por exemplo, para uma matriz 3 x 4, o resultado deve ser:<br>
<br>
1 2 3 4<br>
5 6 7 8<br>
9 10 11 12<br>
<br>
Entretanto, o resultado não é o esperado. Identifique os problemas no preenchimento e os corrija.<br></p>

```
#include <stdio.h>
#define LIN 3
#define COL 4
int main() {
    int t, i, M[LIN][COL];
    
    //preencher matriz
    for (t=0; t<LIN; t--) {
        for (i=0; i>COL; i++) {
            M[t][i] = (t+COL)+i-1;
        }
    }
    
    //mostrar na tela
    for (t=0; t<LIN; t++) {
        for (i=0; i<COL; i++) {
            printf ("%d ", M[t][i]);
            printf ("\n");
        }
    }
    return(0);
}
```

<h2 align="center">Conversão de graus para radianos</h2>
<p align="justify">Escreva uma função que converta um valor float de graus para radianos.<br></p>

```
#define VPL_MOODLE
#include <stdio.h>
#include <math.h> // use M_PI
float grau2rad(float ang_grau) {
    
}

int main(void) {
    float angulo_graus;
    float angulo_radianos;
    #ifndef VPL_MOODLE
    printf("Conversor de graus para radianos\n");
    printf("Digite um ângulo em graus: ");
    #endif
    scanf("%f", angulo_graus); // <--- aqui tem um erro. Corrija
    
    angulo_radianos = grau2rad(angulo_graus); //chamada da função
    
    #ifndef VPL_MOODLE
    printf("Em radianos, esse ângulo é: ");
    #endif
    printf("%.2f", angulo_radianos); //<--- ajuste o número de casas decimais
    
    return 0;
}
```

<h2 align="center">Resistência equivalente</h2>
<p align="justify">Faça uma função para calcular a resistência equivalente de 2 resistores. A função deve receber os dois valores (float) e o tipo de conversão ('s' para série e 'p' para paralelo). Se o tipo de conversão for inválido (ou seja, diferente de 's' ou 'p'), a função deve retornar -1.<br></p>

```
#define VPL_MOODLE
#include <stdio.h>

//tipo: s ou p
float resistencia_equiv(float r1, float r2, char tipo) {
    
}

int main(void) {
    float res1;
    float res2;
    char tipoconv;
    #ifndef VPL_MOODLE
    printf("Calculadora de resistência equivalente\n");
    printf("Digite s para série ou p para paralelo: ");
    #endif
    scanf("%c", &tipoconv);

    #ifndef VPL_MOODLE
    printf("Agora, digite os 2 valores de resistência:");
    #endif
    // <--- aqui falta incluir algo. Corrija
    
    req = resistencia_equiv(); // <--- aqui falta algo. Corrija
    if (req==-1) {
        printf("conversão inválida");
        return -1;
    }
    #ifndef VPL_MOODLE
    printf("A resistência equivalente é: ");
    #endif
    printf("%.2f", req);
    
    return 0;
}
```


<h2 align="center">Valor máximo de um vetor</h2>
<p align="justify">Escreva uma função (e um programa para testá-­la) chamada max_vet que receba um vetor de inteiros e o tamanho do vetor, e retorne qual é o maior valor. Protótipo:<br></p>

```
int max_vet(int vet[], int tam)
```

```
#define VPL_MOODLE
#include <stdio.h>

int max_vet(int vet[], int tam) {
    
}

int main(void) {
    int vetor[50];
    int tam;
    int valor_max; 
    
    #ifndef VPL_MOODLE
    printf("Encontrando o valor máximo em um vetor\n");
    printf("Quantos valores você vai digitar? ");
    #endif
    scanf("%d", &tam);
    if (tam < 1 || tam > 50) {
        printf("Desculpe. Erro na entrada.");
        return -1;
    }
    #ifndef VPL_MOODLE
    printf("Agora digite os valores:");
    #endif
    // aqui falta a entrada de dados. Leia do teclado o número de valores informado em tam
    
    valor_max = max_vet(vetor, tam); //chamada da função
    
    #ifndef VPL_MOODLE
    printf("O maior valor é: ");
    #endif
    printf("%d", valor_max);
    
    return 0;
}
```

<h2 align="center">Ano bissexto</h2>
<p align="justify">Escreva uma função (e respectivo programa de teste) que retorne se um ano é bissexto (a função deve retornar: 0, que representa falso ou 1, que representa verdadeiro). Protótipo:<br></p>

```
int verifica_bissexto(int ano)
```

<p align="justify"><br>Você deve escrever a função em um arquivo separado.<br></p>
<h3 align="center">bissexto.c</h3>

```
int verifica_bissexto(int ano) {

}
```

<h3 align="center">main.c</h3>

```
//#define VPL_MOODLE
#include <stdio.h>

int verifica_bissexto(int ano);

int main(void) {
    int ano;
    #ifndef VPL_MOODLE
    printf("Verificador de ano bissexto\n");
    printf("Digite um ano: ");
    #endif
    scanf("%d", &ano);
    
    #ifndef VPL_MOODLE
    printf("Resultado: ");
    #endif
    printf("%c", verifica_bissexto(ano)?'S':'N');
    
    return 0;
}
```

<h2 align="center">Histograma em modo texto</h2>
<p align="justify">Escreva uma função (e um programa para testá­-la) chamada histograma que receba um vetor de inteiros e seu tamanho, e desenhe em modo texto esse vetor, em que cada valor é impresso em uma linha como um número de caracteres, como mostra o exemplo seguinte. Para o vetor [3 5 7 1], a saída deve ser<br>
***<br>
*****<br>
*******<br>          
*<br>
<br>
Como organizar o código:<br>
1. Escreva uma função que desenhe uma linha com um caractere escolhido pelo usuário<br>
<br>
Você já fez isso no exercício aqui do Moodle: 12/11 Linha de asteriscos<br>
void desenha_linha(int n, char c)<br>
<br>
2. Escreva a função histograma que usa a função desenha_linha<br>
void histograma(int vet[], int tam, char c)<br>
<br>
Com a opção de escolher um caractere, o usuário pode desenhar assim, por exemplo:<br>
int a[]={3,5,7,1};<br>
histograma(a, 4, 'o');<br>
ooo<br>
ooooo<br>
ooooooo<br>
o<br>
<br>
ou histograma(a, 4, '#');<br>
###<br>
#####<br>
#######<br>
#<br></p>

<h3 align="center">histograma.c</h3>

```
/****************************************************************
* Função histograma(int vet[], int tam, char c)
* Entradas:
*   vetor com valores inteiros
*   tamanho do vetor
*   caractere a desenhar
* Saída:
*    histograma em modo texto
*    (chama função desenha_linha para cada linha)
* Retorno:
*    nenhum
*****************************************************************/
void histograma(int vet[], int tam, char c) {
    //completar
    desenha_linha(/*completar*/, c);
    printf("\n");
    
}
```

<h3 align="center">linha.c</h3>

```
/****************************************************************
* Função desenha_linha(int n, char c)
* Entradas:
*   número de caracteres
*   caractere a desenhar
* Saída:
*    em tela, imprime n caracteres
* Retorno:
*    nenhum
*****************************************************************/
// É quase o mesmo código que você fez no exercício 12/11: Linha asteriscos
void desenha_linha(int n, char c) {
    
}
```

<h3 align="center">main.c</h3>

```
//#define VPL_MOODLE
#include <stdio.h>

int main(void) {
    int vetor[50];
    int tam;
    char caractere;

    #ifndef VPL_MOODLE
    printf("Histograma em modo texto\n");
    printf("Quantos valores você vai digitar? ");
    #endif
    scanf("%d", &tam);
    if (tam< 1 || tam > 50) {
        printf("Desculpe. Erro na entrada.");
        return -1;
    }
    #ifndef VPL_MOODLE
    printf("Agora digite os valores:");
    #endif
    // aqui falta a entrada de dados. Leia do teclado o número de valores informado em tam
    
    #ifndef VPL_MOODLE
    printf("Qual caractere você quer na visualização? ");
    #endif
    scanf(" %c", caractere);
    
    histograma(vetor, tam, caractere); //chamada da função
    
    return 0;
}
```

<h2 align="center">Gregoriano para RD</h2>
<p align="justify">Escreva uma função (e respectivo programa de teste) que retorne a data no calendário RD (conferir referência, quadro no topo da pág. 110) a partir de uma data no calendário gregoriano. Observe que no idem (d) do quadro, você irá precisar de sua função bissexto. Protótipo:<br></p>

```
int greg2rd(int ano, int mes, int dia)
```

<h3 align="center">bissexto.c</h3>

```
// Simplesmente copie a função que você já fez no exercício 03/12: Ano bissexto
int verifica_bissexto(int ano) {

}
```

<h3 align="center">greg2rd.c</h3>

```
/**********************************************************
* O cálculo é feito a partir do quadro da pág. 110 do 
* Guia de navegação entre calendários (Ian Stewart)
* Veja também o exemplo corrigido de cálculo na pág. 109
* É um cálculo cumulativo, feito em 5 passos de (a) até (e)
* A redação do texto é um pouco confusa.
* Onde está escrito "Calcule", deveria ser "Some"
* Aquele símbolo que parece um L nos passos (b) e (c)
*  é a função piso (floor), ou seja, um arredondamento
*  sempre para baixo. Por exemplo, a primeira parte é
*  floor((Y-1)/4). Exemplo de resultado:
*  floor((2020-1)/4)=floor(504.75)=504.
*  Mais info em https://pt.wikipedia.org/wiki/Parte_inteira
*  Em C, existe a função floor em math.h.
* O passo (d) deveria ser escrito assim:
*   Não some nada se M<=2 (ou seja, janeiro ou fevereiro);
*   Se M>2 e Y for bissexto, subtraia 1; caso contrário, 
*   subtraia 2. 
* 
* Observe que no passo (d) você usará a função
*  verifica_bissexto que você já fez.
* 
***********************************************************/
int greg2rd(int ano, int mes, int dia) {
    
}
```

<h3 align="center">main.c</h3>

```
//#define VPL_MOODLE
#include <stdio.h>

int main(void) {
    int ano, mes, dia, dia_rd;
    #ifndef VPL_MOODLE
    printf("Conversor de calendários\n");
    printf("gregoriano para RD (rata die, Reingold & Dershowitz)\n");
    printf("Digite o ano, mês e dia: ");
    #endif
    scanf("%d %d %d", &ano, &mes, &dia);
    
    dia_rd = greg2rd(ano, mes, dia);
    
    #ifndef VPL_MOODLE
    printf("Em RD, é o dia: ");
    #endif
    printf("%d", dia_rd);
    
    return 0;
}
```

<h2 align="center">RD para dia da semana</h2>
<p align="justify">E esse negócio de RD serve para o quê?<br>
Ter um calendário universal serve para fazer conversões entre os mais diversos calendários e também para saber o dia da semana de qualquer data.<br>
Observe a figura 11.1, pág. 109. Se você tiver uma data em RD, basta usar o módulo por 7 para achar o dia da semana. Então, temos mais uma aplicação para o módulo (% em C), além de descobrir se um número é par ou ímpar.<br>
Escreva uma função (e respectivo programa de teste) que imprima o dia da semana a partir de uma data no calendário RD (conferir referência, pág. 109). O usuário pode informar a língua em que deseja o dia da semana. No mínimo: português, inglês e espanhol. As línguas são definidas com o código de duas letras ISO 639-1 (https://en.wikipedia.org/wiki/List_of_ISO_639-1_codes)<br>
Protótipo:<br></p>
    
```
void rd2weekday(int rd, char lang[])
```

<p align="justify">Exemplo:<br>
rd2weekday(737485, "pt")<br>
domingo (resultado)<br></p>

```
/****************************************************************************
* Para escrever os dias da semana por extenso, use a mesma ideia do
* exercício que você já fez aqui no Moodle 26/11: Mês por extenso
* Use uma matriz para guardar o mapeamento número -> texto (dia da semana)
*****************************************************************************/
//#define VPL_MOODLE
#include <stdio.h>

void rd2weekday(int rd, char lang[]) {
    
}


int main(void) {
    int dia_rd;
    char codigo_lingua[3]; //dois caracteres + \0

    #ifndef VPL_MOODLE
    printf("Calculadora de dia da semana\n");
    printf("Digite um dia RD: ");
    #endif
    scanf("%d", dia_rd); //<--- aqui tem um erro. Corrija
    
    #ifndef VPL_MOODLE
    printf("Em que língua você quer o resultado?\n");
    printf("Digite um código de duas letras: ");
    #endif
    scanf("%2s", codigo_lingua);

    rd2weekday(dia_rd, codigo_lingua); //chamada da função
    
    return 0;
}
```

<h2 align="center">Char e int</h2>
<p align="justify">Execute o programa seguinte e observe que há um problema. Corrija, modificando apenas uma linha do código.<br></p>

```
#include <stdio.h>

int main(void) {
    char vc1=52, vc2=43, vc3;
    vc3 = vc1+vc2;
    printf("1. Resultado de %d + %d = %d\n", vc1, vc2, vc3);
    printf("1. Tamanho das variáveis: %d byte(s)\n", sizeof(vc3));

    char vi1=101, vi2=127, vi3;
    vi3 = vi1+vi2;
    printf("2. Resultado de %d + %d = %d\n", vi1, vi2, vi3);

    return 0;
}
```

<h2 align="center">Tipos inteiros do C99</h2>
<p align="justify">Execute o programa seguinte e observe que há um problema. Corrija, modificando apenas uma linha do código.<br></p>

```
#include <stdio.h>
#include <stdint.h>

int main(void) {
    int8_t vi1=15, vi2=27, vi3;
    vi3 = vi1+vi2;
    printf("1. Resultado de %d + %d = %d\n", vi1, vi2, vi3);
    printf("1. Tamanho das variáveis: %d bytes\n", sizeof(vi3));
    
    int8_t vo1=127, vo2=120, vo3;
    vo3 = vo1+vo2;
    printf("2. Resultado de %d + %d = %d\n", vo1, vo2, vo3);
    
    return 0;
}
```

<h2 align="center">Mais tipos inteiros do C99</h2>
<p align="justify">Execute o programa seguinte e observe que há um problema. Corrija, modificando apenas duas linha do código.<br></p>

```
#include <stdio.h>
#include <stdint.h>

int main(void) {
    int32_t va1=410000000, va2=320000000, va3;
    va3 = va1+va2;
    printf("1. Resultado de %ld + %ld = %ld\n", va1, va2, va3);

    int32_t vu1=3700000000, vu2=4200000000, vu3;
    vu3 = vu1+vu2;
    printf("2. Resultado de %d + %d = %d\n", vu1, vu2, vu3);

    return 0;
}
```

<h2 align="center">MDC</h2>
<p align="justify">Escreva uma função (e respectivo programa de teste) que calcule o MDC (máximo divisor comum) de dois números dados. Você pode implementar o algoritmo de Euclides.<br>
Protótipo da função:<br></p>

```
int mdc(int n1, int n2)
```

<p align="justify">Para os testes efetuados, a declaração dos tipos na função está adequada? Verifique e proponha uma solução.<br></p>

```
int mdc(int n1, int n2) { // vai funcionar para todos os testes? Verifique e modifique
    return -1;
}

int main(void) {
    //scanf(num1, num2);
    resultado = mdc(num1, num2);
    //printf(resultado);
    return 0;
}
```


<h2 align="center">Macro</h2>
<p align="justify">Execute o programa seguinte e observe que há problemas. Corrija, modificando apenas três linhas do código.<br></p>

```
#include <stdio.h>
#define MEDIA(x,y) (x + y / 2)
#define AREA_TRI(b, h) (b * h / 2)

int main()
{
    float t1, t2;
    
    scanf("%f %f", t1, t2);

    printf("1. Média de %.2f e %.2f é %.2f\n", t1, t2, MEDIA(t1, t2));
    printf("2. Média de %.2f e %.2f é %.2f\n", t1+3, t2+3, MEDIA(t1+3, t2+3));
    printf("3. Área de triângulo b: %.2f e h: %.2f é %.2f\n", t1, t2, AREA_TRI(t1, t2));
    printf("4. Área de triângulo b: %.2f e h: %.2f é %.2f\n", t1+3, t2+3, AREA_TRI(t1+3, t2+3));
    return (0);
}
```

<h2 align="center">Operação bit a bit</h2>
<p align="justify">Qustão 3) Monte o circuito da Figura seguinte no Tinkercad. Ignore o botão AJUSTE, por enquanto.<br></p>
<p align="justify">Quando o botão SELEÇÃO for acionado, deve piscar os LEDs em sequência, um de cada vez, indo do primeiro (PD0) até o último (PD7). Você deve usar as operações bit a bit e não digitalWrite.<br></p>

```
#include <avr/io.h>
#include <util/delay.h>
#define SET_BIT(p,bit) ((p)|=(1<<(bit)))
#define CLR_BIT(p,bit) ((p)&=~(1<<(bit)))
#define TST_BIT(p,bit) ((p)&(1<<(bit)))
#define CPL_BIT(p,bit) ((p)^=(1<<(bit)))
#define SELECAO PB1

int main(void) {
	DDRD = 0b11111111; //habilita todos os PDs como saída
    PORTD = 0b11111111; //define todos os leds como apagados; resistor de pull-up habilitado em todos os pinos
    DDRB = 0b11111100; //habilita os dois botões como entrada
    PORTB = 0b11111111; //resistor de pull-up habilitado em todos os pinos PBs
    while(1) {
      	if(!TST_BIT(PINB,SELECAO)) {
            PORTD = PORTD << 1; //desloca bit
            SET_BIT(PORTD,PORTD); //acende o led decorrente do deslocamento anterior
            if(PORTD == 0b11111111) { //acende o primeiro led quando todos estiverem apagados
                PORTD = 0b11111110;
            }
          	if(PORTD == 0b01111110) { //correção de bug causado pela condição anterior; sem a correção, o primeiro led acende quando o último ainda está aceso, por causa do deslocamento de bit
                PORTD = 0b01111111;
            }
            _delay_ms(100);
    	}
  	}
}
```

<p align="justify">Qustão 4) Agora, use sua criatividade e altere o circuito anterior para usar também o botão AJUSTE. Ele pode servir, por exemplo, para:<br></p>
<p align="justify">- alterar a velocidade de acionamento dos LEDs a cada vez que for pressionado<br>
- gerar diferentes sequências com os LEDs<br>
Você pode usar LEDs de diferentes cores e dispô-los na tela como achar melhor. Assim como na questão anterior, você deve usar as operações bit a bit e não digitalWrite.<br></p>


```
#include <avr/io.h>
#include <util/delay.h>
#define SET_BIT(p,bit) ((p)|=(1<<(bit)))
#define CLR_BIT(p,bit) ((p)&=~(1<<(bit)))
#define TST_BIT(p,bit) ((p)&(1<<(bit)))
#define CPL_BIT(p,bit) ((p)^=(1<<(bit)))
#define AJUSTE PB0
#define SELECAO PB1

int main(void) {
	DDRD = 0b11111111; //habilita todos os PDs como saída
    PORTD = 0b11111111; //define todos os leds como apagados; resistor de pull-up habilitado em todos os pinos
    DDRB = 0b11111100; //habilita os dois botões como entrada
    PORTB = 0b11111111; //resistor de pull-up habilitado em todos os pinos PBs
  	int seta = 0;
  	float tempo = 1;
  	while(1) {
      	if(!TST_BIT(PINB,SELECAO)) {
            PORTD = PORTD << 1; //desloca bit
            SET_BIT(PORTD,PORTD); //acende o led decorrente do deslocamento anterior
            if(PORTD == 0b11111111) { //acende o primeiro led quando todos estiverem apagados
                PORTD = 0b11111110;
            }
          	if(PORTD == 0b01111110) { //correção de bug causado pela condição anterior; sem a correção, o primeiro led acende quando o último ainda está aceso, por causa do deslocamento de bit
                PORTD = 0b01111111;
            }
            _delay_ms(100);
    	}
      	if (!TST_BIT(PINB,AJUSTE)) {
        	seta = 1;
        }
      	while (seta == 1) {
            PORTD = PORTD << 1; //desloca bit
            SET_BIT(PORTD,~PORTD); //acende o led decorrente do deslocamento anterior
            if(PORTD == 0b11111111) { //acende o primeiro led quando todos estiverem apagados
                PORTD = 0b11111110;
            }
            _delay_ms(100/tempo); //tempo do deslocamento em função do modo escolhido pelo usuário
          	if (!TST_BIT(PINB,AJUSTE)) { //aumenta a velocidade do deslocamento conforme o usuário seleciona o botão de ajuste
                tempo = tempo + 0.2;
            }
          	if (!TST_BIT(PINB,SELECAO)) { //sai do loop caso o usuário selecione o botão de seleção
                tempo = 1; //atribui o valor inicial da velocidade do deslocamento
              	seta = 0;
            }
    	}
  	}
}
```
