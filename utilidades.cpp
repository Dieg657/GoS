#include "utilidades.h"

Utilidades::Utilidades()
{

}

long double Utilidades::fatorial(int x)
{
    long double aux;
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

long double Utilidades::calcularBloqueio(int faixa, double erlang){
    long double bloqueio = 0;

    bloqueio = calcNum(erlang,faixa)/calcDenominador(erlang, faixa);

    return bloqueio;
}

double Utilidades::calcErlang(double tx_media_p_min, double tx_media_ocupacao_min)
{
    double erlang = ((tx_media_p_min / 60) * tx_media_ocupacao_min)/60;
    return erlang;
}

long double Utilidades::calcNum(long double erlang, long int qtdFaixa){
    long double resultado = 0;

    resultado = pow(erlang,qtdFaixa)/fatorial(qtdFaixa);

    return resultado;
}

long double Utilidades::calcDenominador(double erlang, int faixa)
{
    long double resultado = 0;

    for (int i = 0; i < faixa; i++) {
        resultado += (pow(erlang,i))/fatorial(i);
    }

    return resultado;
}
