#define VPL_MOODLE
#include <stdio.h>
int main() {
    float temp[5], av;
    int i;
    #ifndef VPL_MOODLE
    printf("Digite 5 valores de temperaturas para receber a média destas\n");
    #endif
    for (i = 0; i <= 4; i ++) {
        scanf("%f", &temp[i]);
    }
    av = (temp[0] + temp[1] + temp[2] + temp[3] + temp[4])/5;
    printf("%f\n", av);
return 0;
}