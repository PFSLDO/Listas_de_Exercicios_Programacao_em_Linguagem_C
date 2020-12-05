/****************************************************************************
* Para escrever os dias da semana por extenso, use a mesma ideia do
* exercício que você já fez aqui no Moodle 26/11: Mês por extenso
* Use uma matriz para guardar o mapeamento número -> texto (dia da semana)
*****************************************************************************/
#define VPL_MOODLE
#include <stdio.h>

void rd2weekday(int rd, char lang[]) {
    if (rd%7 == 0) {
        if (strcmp (lang, "pt") == 0) {
            printf("domingo\n");
        }
        if (strcmp (lang, "en") == 0) {
            printf("Sunday\n");
        }
        if (strcmp (lang, "es") == 0) {
            printf("domingo\n");
        }
        if (strcmp (lang, "ba") == 0) {
            printf("igandea\n");
        }
    }
    if (rd%7 == 1) {
        if (strcmp (lang, "pt") == 0) {
            printf("segunda-feira\n");
        }
        if (strcmp (lang, "en") == 0) {
            printf("Monday\n");
        }
        if (strcmp (lang, "es") == 0) {
            printf("lunes\n");
        }
        if (strcmp (lang, "ba") == 0) {
            printf("astelehena\n");
        }
    }
    if (rd%7 == 2) {
        if (strcmp (lang, "pt") == 0) {
            printf("terça-feira\n");
        }
        if (strcmp (lang, "en") == 0) {
            printf("Tuesday\n");
        }
        if (strcmp (lang, "es") == 0) {
            printf("martes\n");
        }
        if (strcmp (lang, "ba") == 0) {
            printf("asteartea\n");
        }
    }
    if (rd%7 == 3) {
        if (strcmp (lang, "pt") == 0) {
            printf("quarta-feira\n");
        }
        if (strcmp (lang, "en") == 0) {
            printf("Wednesday\n");
        }
        if (strcmp (lang, "es") == 0) {
            printf("miércoles\n");
        }
        if (strcmp (lang, "ba") == 0) {
            printf("asteazkena\n");
        }
    }
    if (rd%7 == 4) {
        if (strcmp (lang, "pt") == 0) {
            printf("quinta-feira\n");
        }
        if (strcmp (lang, "en") == 0) {
            printf("Thursday\n");
        }
        if (strcmp (lang, "es") == 0) {
            printf("jueves\n");
        }
        if (strcmp (lang, "ba") == 0) {
            printf("osteguna\n");
        }
    }
    if (rd%7 == 5) {
        if (strcmp (lang, "pt") == 0) {
            printf("sexta-feira\n");
        }
        if (strcmp (lang, "en") == 0) {
            printf("Friday\n");
        }
        if (strcmp (lang, "es") == 0) {
            printf("viernes\n");
        }
        if (strcmp (lang, "ba") == 0) {
            printf("ostirala\n");
        }
    }
    if (rd%7 == 6) {
        if (strcmp (lang, "pt") == 0) {
            printf("sábado\n");
        }
        if (strcmp (lang, "en") == 0) {
            printf("Saturday\n");
        }
        if (strcmp (lang, "es") == 0) {
            printf("sábado\n");
        }
        if (strcmp (lang, "ba") == 0) {
            printf("larunbata\n");
        }
    }
}


int main(void) {
    int dia_rd;
    char codigo_lingua[3]; //dois caracteres + \0

    #ifndef VPL_MOODLE
    printf("Calculadora de dia da semana\n");
    printf("Digite um dia RD: ");
    #endif
    scanf("%d", &dia_rd);
    
    #ifndef VPL_MOODLE
    printf("Em que língua você quer o resultado?\n");
    printf("Digite um código de duas letras: ");
    #endif
    scanf("%2s", &codigo_lingua);

    rd2weekday(dia_rd, codigo_lingua); //chamada da função
    
    return 0;
}