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

std::vector<Veiculo*> Via::gerarVeiculos(int qtdeIteracoes, int txMinVeiculosPorMinuto, int txMaxVeiculosPorMinuto, int minTmpPermanencia, int maxTmpPermanencia)
{
    Utilidades obj;

    std::vector<Veiculo*> veiculos;
    float tempoChegada = 0,tempoPermanencia = 0;
    for(int i = 0; i < qtdeIteracoes; i++){
        tempoChegada = obj.taxa_origem(std::rand() % txMaxVeiculosPorMinuto + txMinVeiculosPorMinuto);
        tempoPermanencia = obj.tempo_medio(std::rand() % maxTmpPermanencia + minTmpPermanencia);
        Veiculo *veiculo = new Veiculo(tempoChegada,tempoPermanencia);
        veiculos.push_back(veiculo);

    }
    return veiculos;
}

