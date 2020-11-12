#include <stdio.h>
int main() {
    int temp;
    //printf("Digite a temperatura:");
    scanf("%d", &temp);
    if (temp < 0 || temp > 100) {
        printf("Invalida\n");
    }
    if (temp >= 0 && temp < 25) {
        printf("Fria\n");
    }
    if (temp >= 25 && temp <= 40) {
        printf("Morna\n");
    }
    if (temp > 40 && temp <= 100) {
        printf("Quente\n");
    }
return 0;
}