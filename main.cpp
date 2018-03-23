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
//    std::srand(std::time(NULL));
//    float origem = 0, tempo = 0;
//    for(int i = 0; i < 10; i++){
//        //std::cout <<  origem += obj.taxa_origem(rand() % 300 + 30) << std::endl;
//        //std::cout << "Duração: " << tempo += obj.tempo_medio(rand() % 30 + 1) << std::endl;
//        origem += obj.taxa_origem(rand() % 300 + 30);
//        tempo += obj.tempo_medio(rand() % 30 + 1);

//    }
//    origem = origem/10;
//    tempo = tempo / 10;
//    std::cout << "Origem: " << origem << std::endl;
//    std::cout << "Duração: " << tempo << std::endl;
//    std::cout << std::endl;

    Via via;
    std::vector<Veiculo*> veiculos = via.gerarVeiculos(100,10,300,0,15);
    std::pair<double,double> medias = obj.calcularMedias(veiculos);
    obj.imprimirVeiculos(veiculos);
    std::cout<<"Media de origem: " << medias.first<<std::endl;
    std::cout<<"Media de chegada: "<<medias.second<<std::endl;
    return 0;
}
