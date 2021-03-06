#ifndef VIA_H
#define VIA_H
#include "cabecalho.hpp"

class Via
{
private:
    float     tx_duracao;
    float     canais;
    float   trafego;
    double   calcularPb_num();
    double calcularPb_denom();
public:
            Via();
    void    setTrafego(int qtd_veiculos);
    float   getTrafego();
    void    setDuracao(int duracao);
    float   getDuracao();
    void    setFaixas(int faixas);
    float   getFaixas();
    double getBloqueio();
};

#endif // VIA_H
