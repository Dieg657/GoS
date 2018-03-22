#include "cabecalho.hpp"

int main()
{

    Localidade * origem = new Localidade("a");
    Via *via = new Via();
    std::ofstream myfile;
    myfile.open("saida.csv");
    myfile << "Faixas;Carros;Duração;Bloqueio%\n";
    for (int i = 1; i <= 3; i++) {
        via->setFaixas(i);
        for (int j = 1; j <= 200; j++) {
            origem->setQtdVeiculos(j);
            for (int k = 1; k <= 60; k++) {
                via->setDuracao(k);
                via->setTrafego(origem->getQtdVeiculos());
                myfile << via->getFaixas() << ";" << origem->getQtdVeiculos() << ";" << via->getDuracao() << ";" << via->getBloqueio() << "\n";
            }
        }
    }
    myfile.close();
    return 0;
}
