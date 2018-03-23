#include "cabecalho.hpp"

int main()
{

    Utilidades obj;
    Via via;
    std::ofstream myfile;
    myfile.open("saida.txt");
    myfile << "Iteração;Taxa Média de Ocupação;Taxa Média de Duração; Bloqueio (%)\n";
    for (int i = 0; i < 100; i++) {

        std::vector<Veiculo*> veiculos = via.gerarVeiculos(100,std::rand() % 20 + 2, std::rand() % 200 + 100,1,4);
        std::pair<double,double> medias = obj.calcularMedias(veiculos);
        //obj.imprimirVeiculos(veiculos);
        std::cout<<"Media de Veiculos/Minuto: " << medias.first<<std::endl;
        std::cout<<"Media de Duração de Ocupação: "<<medias.second<<std::endl;
        myfile << i+1 << ";" << std::to_string(medias.first) << ";" << std::to_string(medias.second) << ";" << std::to_string(obj.calcularBloqueio(1,obj.calcErlang(medias.first,medias.second))) << "\n";
        veiculos.clear();
    }
    myfile.close();

    return 0;
}
