/**********************************************************
* O cálculo é feito a partir do quadro da pág. 110 do 
* Guia de navegação entre calendários (Ian Stewart)
* Veja também o exemplo corrigido de cálculo na pág. 109
* É um cálculo cumulativo, feito em 5 passos de (a) até (e)
* A redação do texto é um pouco confusa.
* Onde está escrito "Calcule", deveria ser "Some"
* Aquele símbolo que parece um L nos passos (b) e (c)
*  é a função piso (floor), ou seja, um arredondamento
*  sempre para baixo. Por exemplo, a primeira parte é
*  floor((Y-1)/4). Exemplo de resultado:
*  floor((2020-1)/4)=floor(504.75)=504.
*  Mais info em https://pt.wikipedia.org/wiki/Parte_inteira
*  Em C, existe a função floor em math.h.
* O passo (d) deveria ser escrito assim:
*   Não some nada se M<=2 (ou seja, janeiro ou fevereiro);
*   Se M>2 e Y for bissexto, subtraia 1; caso contrário, 
*   subtraia 2. 
* 
* Observe que no passo (d) você usará a função
*  verifica_bissexto que você já fez.
* 
***********************************************************/

int verifica_bissexto(int ano);

int greg2rd(int ano, int mes, int dia) {
    int result;
    
    result = 365 * (ano - 1);
    result = result + (((ano-1)/4)-((ano-1)/100)+((ano-1)/400));
    result = result + ((367*mes-362)/12);
    
    if (mes <= 2) {
        result = result + dia;
        return result;
    }
    
    if (verifica_bissexto(ano) == 1) {
        result = result - 1 + dia;
        return result;
    }
    else if (verifica_bissexto(ano) == 0) {
        result = result - 2 + dia;
        return result;
    }
}