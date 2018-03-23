#include "utilidades.h"

Utilidades::Utilidades()
{

}

unsigned long long Utilidades::fatorial(int x)
{
    unsigned long long  aux;
    if(x == 0){
        aux = 1;
    }else{
        aux = x;
        while(x > 1){
            aux = aux * (x-1);
            x--;
        }
    }
    return aux;
}


int Utilidades::taxa_origem(int taxa){
    unsigned int k;
    long double y, x;
    std::srand(time(NULL));

    y = std::expm1(taxa);
    x = 1;
    k = -1;

    do{
        x *= std::rand() % 100 + 1;
        k++;
    }while(x <= y);

    return k;
}

float Utilidades::tempo_medio(int tempo)
{
    float duracao = tempo * std::log(std::rand() % 60 + 1);
    return duracao;
}
