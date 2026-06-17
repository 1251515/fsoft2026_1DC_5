#include "../../headers/views/VendaView.h"
#include "../../headers/model/gestorProdutos.h"

#include <string>
#include <iostream>


using namespace std;

int loja::view::VendaView::menuVendas() {

    int opcao;

    cout << "1 - Criar Venda" << endl;
    cout << "2 - Ver lista de Vendas" << endl;
    cout << endl;
    cout << "0 - Sair" << endl;

    while (true) {

        std::cout << "Opção: ";

        if (!(std::cin >> opcao)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            cout << "ERRO: Escolha uma opção válida";
            continue;
        }

        if (opcao < 0 || opcao > 2) {
            cout << "ERRO: Escolha uma opção válida";
            continue;
        }

        if (opcao >= 0 && opcao <= 2) {
            break;
        }

    }
    return opcao;
}

int loja::view::VendaView::pedirIDempregado() {

        int ID = 0;

        cout << "ID Empregado: ";

        while (true) {

            if (!(std::cin >> ID)) {
                std::cin.clear();
                std::cin.ignore(10000, '\n');
                cout << "ERRO: ID Inválido. \n";
                continue;
            }

            if (ID >= 4000000 && ID <= 4999999) {
                return ID;
            }

            cout << "ERRO: ID Inválido. \n";
            cout << "ID Empregado: ";

        }
}

int loja::view::VendaView::pedirIDProduto() {

    int ID = 0;

    cout << "ID Produto: ";

    while (true) {

        if (!(std::cin >> ID)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            cout << "ERRO: ID Inválido. \n";
            continue;
        }

        if (ID >= 3000000 && ID <= 3999999) {
            return ID;
        }

        cout << "ERRO: ID Inválido. \n";
        cout << "ID Produto: ";

    }
}

int loja::view::VendaView::pedirQuantidade(int stock) {

    int quantidade = 0;

    cout << "Quantidade Produto: ";

    while (true) {

        if (!(std::cin >> quantidade)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            cout << "ERRO: ID Inválido. \n";
            continue;
        }

        if (quantidade >= 1 && quantidade <= stock) {
            return quantidade;
        }

        cout << "ERRO: Quantidade inválida. \n";
        cout << "Quantidade Produto: ";

    }
}

bool loja::view::VendaView::adicionarMaisProdutos() {

    int opcao;

    std::cout << "\nAdicionar outro produto?\n";
    std::cout << "1 - Sim\n";
    std::cout << "0 - Nao\n";

    while (true) {

        std::cout << "Opcao: ";

        if (!(std::cin >> opcao)) {

            std::cin.clear();
            std::cin.ignore(10000, '\n');

            std::cout << "ERRO: Introduza uma opcao valida.\n";
            continue;
        }

        if (opcao == 1) {
            return true;
        }

        if (opcao == 0) {
            return false;
        }

        std::cout << "ERRO: Opcao invalida.\n";
    }
}

int loja::view::VendaView::pedirNIF() {

    int NIF = 0;

    cout << "Número de Identificação Fiscal: ";

    while (true) {

        if (!(std::cin >> NIF)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            cout << "ERRO: NIF Inválido. \n";
            continue;
        }

        if (NIF >= 100000000 && NIF <= 599999999) {
            return NIF;
        }

        cout << "ERRO: NIF Inválido. \n";
        cout << "Número de Identificação Fiscal: ";

    }
}

loja::TipoPagamento loja::view::VendaView::pedirTipoPagamento() {

    int opcao;

    std::cout << "\nMetodo de Pagamento\n";
    std::cout << "1 - Multibanco\n";
    std::cout << "2 - MBWay\n";
    std::cout << "3 - Cartao de Credito\n";
    std::cout << "4 - Dinheiro\n";

    do {
        std::cout << "Opcao: ";
        std::cin >> opcao;
    }
    while (opcao < 1 || opcao > 4);

    switch (opcao) {
        case 1: return TipoPagamento::MULTIBANCO;
        case 2: return TipoPagamento::MBWAY;
        case 3: return TipoPagamento::CARTAO_CREDITO;
        default: return TipoPagamento::DINHEIRO;
    }
}
