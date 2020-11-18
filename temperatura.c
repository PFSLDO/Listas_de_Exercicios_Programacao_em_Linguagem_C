#include <stdio.h>
int main() {
    int temp;
    //printf("Digite a temperatura:");
    scanf("%d", &temp);
    if (temp < 0 || temp > 100) {
        printf("Invalida\n");
        break;
    }
    if (temp >= 0 && temp < 25) {
        printf("Fria\n");
        break;
    }
    if (temp >= 25 && temp <= 40) {
        printf("Morna\n");
        break;
    }
    if (temp > 40 && temp <= 100) {
        printf("Quente\n");
        break;
    }
return 0;
}