#ifndef PONTO_RETANG5_H_INCLUDED
#define PONTO_RETANG5_H_INCLUDED

struct Ponto2D {
    float x; 
    float y;
};

struct Retangulo {
    struct Ponto2D pse;
    struct Ponto2D pid;
};

double distancia_pontos(struct Ponto2D *p1, struct Ponto2D *p2);

#endif // PONTO_RETANG5_H_INCLUDED