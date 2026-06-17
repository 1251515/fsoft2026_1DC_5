#pragma once

#include "../../headers/views/View.h"
#include <iostream>
#include <iomanip>

using namespace std;

int loja::view::View::menuPrincipal() {
    int opcao;

    cout << "1 - Clientes" << endl;
    cout << "2 - Empregados" << endl;
    cout << "3 - Produtos" << endl;
    cout << "4 - Vendas";
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

        if (opcao < 0 || opcao > 5) {
            cout << "ERRO: Escolha uma opção válida";
            continue;
        }

        if (opcao >= 0 && opcao <= 4) {
            break;
        }
}
    return opcao;
}

void loja::view::View::erro(const std::string mensagem) {
    cout << "\nERRO: " << mensagem << endl;
}

void loja::view::View::sucesso() {
    cout << "\nSucesso!" << endl;
}