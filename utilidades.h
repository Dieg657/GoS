#ifndef UTILIDADES_H
#define UTILIDADES_H
#include "cabecalho.hpp"

class Utilidades
{
private:
    long double calcNum(long double erlang, long int qtdFaixa);
    long double calcDenominador(double erlang, int faixa);
public:
    Utilidades();
    static long double fatorial(int x);
    int taxa_origem(int taxa);
    float tempo_medio(int tempo);
    std::pair<double, double> calcularMedias(std::vector<Veiculo *> &lista);
    void imprimirVeiculos(std::vector<Veiculo *> &lista);
    long double calcularBloqueio(int faixa, double erlang);
    double calcErlang(double tx_media_p_min, double tx_media_ocupacao_min);
};

#endif // UTILIDADES_H
