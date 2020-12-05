#define VPL_MOODLE
#include <stdio.h>
int main() {
    float temp[5], av = 0;
    int i;
    #ifndef VPL_MOODLE
    printf("Digite 5 valores de temperaturas para receber a média destas\n");
    #endif
    for (i = 0; i < 5; i++) {
        scanf("%f", &temp[i]);
    }
    for (i = 0; i < 5; i++) {
        av = av + temp[i];
    }
    
    av = av/5;
    printf("%f\n", av);
return 0;
}