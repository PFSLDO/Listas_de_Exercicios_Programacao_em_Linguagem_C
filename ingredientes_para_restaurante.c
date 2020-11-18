#define VPL_MOODLE
#include <stdio.h>

int main() {
    float food[4];
    int buy[4], i, meals;

    #ifndef VPL_MOODLE
    printf("Digite 4 valores de massa (em gramas) dos seguintes ingredientes: arroz, feijão, carne, cenoura\n");
    #endif

    for (i = 0; i <= 3; i ++) {
        scanf("%f", &food[i]);
    }

    #ifndef VPL_MOODLE
    printf("Digite a quantia de refeições que serão feitas com os ingredientes\n");
    #endif

    scanf("%d", &meals);

    for (i = 0; i <= 3; i ++) {
        buy[i] = food[i] * meals;
        printf("%d\n", buy[i]);
    }
return 0;
}