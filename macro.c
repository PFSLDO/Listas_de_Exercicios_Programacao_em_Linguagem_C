#include <stdio.h>
#define MEDIA(x, y) ((x + y) / 2)
#define AREA_TRI(b, h) (((b) * (h)) / 2)

int main()
{
    float t1, t2;
    
    scanf("%f %f", &t1, &t2);

    printf("1. Média de %.2f e %.2f é %.2f\n", t1, t2, MEDIA(t1, t2));
    printf("2. Média de %.2f e %.2f é %.2f\n", t1+3, t2+3, MEDIA(t1+3, t2+3));
    printf("3. Área de triângulo b: %.2f e h: %.2f é %.2f\n", t1, t2, AREA_TRI(t1, t2));
    printf("4. Área de triângulo b: %.2f e h: %.2f é %.2f\n", t1+3, t2+3, AREA_TRI(t1+3, t2+3));
    return (0);
}