#include "cabecalho.hpp"

int main()
{

    /*Localidade * origem = new Localidade("a");
    Via *via = new Via();
    std::ofstream myfile;
    myfile.open("saida.csv");
    myfile << "Faixas;Carros;Duração;Bloqueio%\n";
    for (int i = 1; i <= 3; i++) {
        via->setFaixas(i);
        for (int j = 1; j <= 200; j++) {
            origem->setQtdVeiculos(j); //Seta a quantidade dos veículos
            for (int k = 1; k <= 60; k++) {
                via->setDuracao(k); // Define a duração dos veículos na via
                via->setTrafego(origem->getQtdVeiculos());
                myfile << via->getFaixas() << ";" << origem->getQtdVeiculos() << ";" << via->getDuracao() << ";" << via->getBloqueio() << "\n";
            }
        }
    }
    myfile.close();*/

    Utilidades obj;
    std::srand(std::time(nullptr));
    float origem = 0, tempo = 0;
    for(int i = 0; i < 10; i++){

        origem += obj.taxa_origem(rand() % 300 + 30);
		tempo += obj.tempo_medio(rand() % 30 + 1);

    }
    origem = origem / 10;
    tempo = tempo / 10;
    std::cout << "Origem: " << origem << std::endl;
    std::cout << "Duracao: " << tempo << std::endl;
    std::cout << std::endl;
    return 0;
}
