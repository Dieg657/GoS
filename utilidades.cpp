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
