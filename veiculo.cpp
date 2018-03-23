#include "veiculo.h"

Veiculo::Veiculo(float tx_orig, float tm_duracao)
{
    this->tempo_origem = tx_orig;
    this->tm_duracao_via = tm_duracao;
}

float Veiculo::getTxOrigem() {
    return tempo_origem;
}

float Veiculo::getTmDuracaoVia() {
    return tm_duracao_via;
}
