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


int Utilidades::origem(int taxa){
    unsigned int k;
    long double y, x;
    std::srand(time(NULL));

    y = std::expm1(taxa);
    x = 1;
    k = -1;

    std::cout << "y:" << y << std::endl;
    do{
        x *= std::rand() % 100 + 1;
        k++;
    }while(x <= y);

    return k;
}
