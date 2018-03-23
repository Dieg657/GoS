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

std::pair<double,double> Utilidades::calcularMedias(std::vector<Veiculo *> &lista)
{
    double mediaOrigem = 0;
    double mediaTempo = 0;
    for(unsigned int i = 0;i <
        lista.size();i++){
        mediaOrigem += lista[i]->getTxOrigem();
        mediaTempo += lista[i]->getTmDuracaoVia();
    }
    mediaOrigem /= lista.size();
    mediaTempo /= lista.size();
    std::pair<double,double> medias(mediaOrigem,mediaTempo);
    return medias;
}

void Utilidades::imprimirVeiculos(std::vector<Veiculo *> &lista)
{
    for(unsigned int i = 0; i < lista.size();i++){
        std::cout<<"\nVeiculo " << i <<": "
                 <<"\nTempo Chegada: " << lista[i]->getTxOrigem()
                 <<"\nTempo Permanencia: " << lista[i]->getTmDuracaoVia()<<"\n\n";
    }
}
