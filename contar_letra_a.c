#define VPL_MOODLE
#include <stdio.h>

int main() {
    char texto[20];
    int i, counter = 0;
    #ifndef VPL_MOODLE
    printf("Digite uma palavra: ");
    #endif
    scanf("%19s", texto); //scanf não lê espaços. Em outro exercício, usamos fgets
    while (texto[i] != '\0') {
        if (texto[i] == 'a') {
            counter ++;
        }
        i++;
    }
    printf("%d", counter);
    return 0;
}