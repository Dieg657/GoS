#ifndef INTERFACE_H
#define INTERFACE_H
#include "cabecalho.hpp"

class Interface
{
private:
    Localidade *origem = nullptr, *destino = nullptr;
    Via * via;
public:
    Interface();
    void    menu();
    void    menu_interno(Via *via, Localidade *origem);
    void    opcoes();
    void    opcoes_interno();

};

#endif // INTERFACE_H
