#ifndef LOCALIDADE_H
#define LOCALIDADE_H
#include "cabecalho.hpp"

class Localidade
{
    const char* nome;
    int qtdVeiculos_Saindo;
public:
                Localidade(const char* nome);
    int         getQtdVeiculos();
    void        setQtdVeiculos(int qtd);
    const char *getNome();
};

#endif // LOCALIDADE_H
