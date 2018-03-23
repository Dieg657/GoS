#include "via.h"

Via::Via()
{
    trafego = 0;
    tx_duracao = 0;
    canais = 0;
}

void Via::setTrafego(int qtd_veiculos)
{
    trafego = (float)((qtd_veiculos * getDuracao())/60);
}

float Via::getTrafego()
{
    return trafego;
}

void Via::setDuracao(int duracao)
{
    tx_duracao = duracao;
}

float Via::getDuracao()
{
    return tx_duracao;
}

void Via::setFaixas(int faixas)
{
    canais = faixas;
}

float Via::getFaixas()
{
    return canais;
}

double Via::getBloqueio()
{

    return (calcularPb_num()/calcularPb_denom());
}

std::vector<Veiculo*> Via::gerarVeiculos(int numeroVeiculos,int minOrigem,int maxOrigem,int minTempo,int maxTempo)
{
    Utilidades obj;
    std::srand(std::time(NULL));
    std::vector<Veiculo*> veiculos;
    float origem = 0, tempo = 0;
    for(int i = 0; i < numeroVeiculos; i++){
        origem = obj.taxa_origem(rand() % maxOrigem + minOrigem);
        tempo = obj.tempo_medio(rand() % maxTempo + minTempo);
        Veiculo *veiculo = new Veiculo(origem,tempo);
        veiculos.push_back(veiculo);

    }
    return veiculos;
}

double Via::calcularPb_denom()
{
    double _trafego = pow(getTrafego(), getFaixas());
    double somatorio = 0;
    for (int i = 0; i < canais; i++) {
        somatorio += (double)((pow(_trafego,i)/(long long)(Utilidades::fatorial(i))));
    }

    return somatorio;
}


double Via::calcularPb_num()
{
    double _trafego = pow(getTrafego(),getFaixas());
    long long _fatorialFaixa = Utilidades::fatorial(getFaixas());

    return _trafego/(double)(_fatorialFaixa);
}
