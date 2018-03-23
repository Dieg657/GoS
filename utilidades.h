#ifndef UTILIDADES_H
#define UTILIDADES_H
#include "cabecalho.hpp"

class Utilidades
{
public:
    Utilidades();
    static unsigned long long fatorial(int x);
    int taxa_origem(int taxa);
    float tempo_medio(int tempo);
    std::pair<double, double> calcularMedias(std::vector<Veiculo *> &lista);
    void imprimirVeiculos(std::vector<Veiculo *> &lista);
};

#endif // UTILIDADES_H
