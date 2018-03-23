#ifndef VEICULO_H
#define VEICULO_H

#include "cabecalho.hpp"

class Veiculo
{
private:
	float tempo_origem;
	float tm_duracao_via;
public:
    Veiculo(float tx_orig, float tm_duracao);
	float getTxOrigem();
	float getTmDuracaoVia();
};

#endif // VEICULO_H
