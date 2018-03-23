#include "interface.h"

Interface::Interface()
{
    via = new Via();
}

void Interface::menu()
{
    int opc = -1, aux = 0;
    while(opc != 0){
        opcoes();
        std::cin >> opc;
        switch (opc) {
        case 1:{
            if(origem != nullptr){
                std::cout << "Origem ja declarada" << std::endl;
            }else{
                char nome[255];
                std::cin >> nome;
                origem = new Localidade(nome);
            }
            break;
        }
        case 2:{
            if(destino != nullptr){
                std::cout << "Destino ja declarado!" << std::endl;
            }else{
                char nome[255];
                std::cin >> nome;
                destino = new Localidade(nome);
            }
            break;
        }
        case 3:{
            std::cout << "Entre com a quantidade de veiculos vem da origem: " << std::endl;
            std::cin >> aux;
            while(aux < 1){
                std::cout << "ERRO: Entre com uma quantidade maior ou igual a 1!" << std::endl;
                std::cout << "Entre com a quantidade de veiculos vem da origem: " << std::endl;
                std::cin >> aux;
            }
            origem->setQtdVeiculos(aux);
            break;
        }

        case 4:{
            menu_interno(via,origem);
            break;
        }

        case 5:{
            //std::cout << "A taxa de bloqueio e de: " << via->getBloqueio() << "%" << std::endl;
            break;
        }

        case 0:{
            break;
        }

        default:
            break;
        }
    }
}

void Interface::menu_interno(Via *via, Localidade *origem)
{
    int opc = -1, aux = 0;

    while(opc != 0){
        opcoes_interno();
        std::cin >> opc;
        switch (opc) {
        case 1:{
            if(origem->getQtdVeiculos() <= 0){
                std::cout << "ERRO: Insira a quantidade de veiculos que irao se deslocar pela via!" << std::endl;
            }else{
                if(via->getFaixas() <=0 || via->getDuracao() <= 0){
                    std::cout << "ERRO: Configure duração e/ou tamanho da faixa!" << std::endl;
                }else{
                    via->setTrafego(origem->getQtdVeiculos());
                    std::cout << "Trafego: " << via->getTrafego() << " erlangs!" << std::endl;
                }
            }
            break;
        }
        case 2:{
            if(origem->getQtdVeiculos() <= 0){
                std::cout << "ERRO: Insira a quantidade de veiculos que irao se deslocar pela via!" << std::endl;
            }else{
                if(via->getFaixas() <=0 || via->getDuracao() <= 0){
                    std::cout << "ERRO: Configure duração e/ou tamanho da faixa!" << std::endl;
                }else{
                    std::cout << "Duracao: " << via->getDuracao() << " minuto(s)!" << std::endl;
                }
            }
            break;
        }
        case 3:{
            if(origem->getQtdVeiculos() <= 0){
                std::cout << "ERRO: Insira a quantidade de veiculos que irao se deslocar pela via!" << std::endl;
            }else{
                if(via->getFaixas() <=0 || via->getDuracao() <= 0){
                    std::cout << "ERRO: Configure duração e/ou tamanho da faixa!" << std::endl;
                }else{
                    std::cout << "Faixas disponiveis: " << via->getFaixas() << " faixa(s)!" << std::endl;
                }

            }
            break;
        }
        case 4:{
            if(origem->getQtdVeiculos() <= 0){
                std::cout << "ERRO: Insira a quantidade de veiculos que irao se deslocar pela via!" << std::endl;
            }else{
                std::cout << "Insira a quantidade de faixas disponiveis para o deslocamento dos veículos (sentido unico): " << std::endl;
                std::cin >> aux;
                while(aux < 1){
                    std::cout << "ERRO: Quantidade de faixas deve ser maior que zero!" << std::endl;
                    std::cout << "Insira a quantidade de faixas disponiveis para o deslocamento dos veículos (sentido unico): " << std::endl;
                    std::cin >> aux;
                }
                std::cout << __LINE__ << ":" << aux << std::endl;
                via->setFaixas(aux);
            }
            break;
        }
        case 5:{
            if(origem->getQtdVeiculos() <= 0){
                std::cout << "ERRO: Insira a quantidade de veiculos que irao se deslocar pela via!" << std::endl;
            }else{
                std::cout << "Insira o tempo de duracao de deslocamento na via: " << std::endl;
                std::cin >> aux;
                while(aux < 1){
                    std::cout << "ERRO: Duracao deve ser igual ou superior a 1 minuto!" << std::endl;
                    std::cout << "Insira o tempo de duracao de deslocamento na via: " << std::endl;
                    std::cin >> aux;
                    std::cout << aux << std::endl;
                }
                via->setDuracao(aux);
            }
            break;
        }
        case 0:{
            break;
        }
        default:
            break;
        }
    }

}

void Interface::opcoes()
{
    std::cout << "###################################" << std::endl;
    std::cout << "1 - Inserir Origem                 " << std::endl;
    std::cout << "2 - Inserir Destino                " << std::endl;
    std::cout << "3 - Inserir Quantidade de Veiculos " << std::endl;
    std::cout << "4 - Configurar Via                 " << std::endl;
    std::cout << "5 - Calcular Bloqueio              " << std::endl;
    std::cout << "0 - Sair                           " << std::endl;
    std::cout << "###################################" << std::endl;
}

void Interface::opcoes_interno()
{
    std::cout << "#############  Via - Configuracao   ###############" << std::endl;
    std::cout << "1 - Obter trafego (Erlangs)                        " << std::endl;
    std::cout << "2 - Obter duraçao de trafego(Taxa de Duracao)      " << std::endl;
    std::cout << "3 - Obter numero de faixas                         " << std::endl;
    std::cout << "4 - Setar quantidade de faixas (Canais)            " << std::endl;
    std::cout << "5 - Setar duracao de deslocamento (Taxa de Duracao)" << std::endl;
    std::cout << "0 - Sair                                           " << std::endl;
    std::cout << "###################################################" << std::endl;
}
