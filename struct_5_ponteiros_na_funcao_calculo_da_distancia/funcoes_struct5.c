/* Struct 5 Ponteiros na Função cálculo da distância*/

#include "struct5.h"
#include <math.h>

double distancia_pontos(struct Ponto2D *p1, struct Ponto2D *p2) {
    float d = sqrt(((p2->x - p1->x) * (p2->x - p1->x)) + ((p2->y - p1->y) * (p2->y - p1->y)));
    return d;
}
