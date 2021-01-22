int verifica_bissexto(int ano) {
    int bi;

    if (ano % 400 == 0) {
        bi = 1;
        return bi;
    }
    else if ((ano % 4 == 0) && (ano % 100 != 0)) {
        bi = 1;
        return bi;
    }
    bi = 0;
    return bi;
}