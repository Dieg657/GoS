#include "localidade.h"

Localidade::Localidade(const char *nome)
{
    nome = nome;
    qtdVeiculos_Saindo = 0;
}

int Localidade::getQtdVeiculos()
{
    return qtdVeiculos_Saindo;
}

void Localidade::setQtdVeiculos(int qtd)
{
    qtdVeiculos_Saindo = qtd;
}

const char *Localidade::getNome()
{
    return nome;
}
