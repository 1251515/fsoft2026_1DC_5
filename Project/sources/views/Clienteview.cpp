#pragma once

#include "../../headers/views/ClienteView.h"
#include <vector>
#include <iostream>
#include <iomanip>


using namespace std;

void loja::view::clienteView::printClientes(const std::vector<cliente>& lista) {

    cout << left
        << setw(30) << "Nome"
        << setw(9) << "NIF"
        << setw(35) << "Email"
        << endl;

    cout << string(80, '-') << endl;            //headline

    for (int i = 0; i <= lista.size(); i++) {
        cout << left
            << setw(30) << lista[i].getNome()
            << setw(9) << lista[i].getNIF()
            << setw(35) << lista[i].getEmail()
            << endl;
    }
}

int loja::view::clienteView::menuClientes() {

    int opcao;

    cout << "1 - Criar Cliente" << endl;
    cout << "2 - Remover Cliente" << endl;
    cout << "3 - Ver Listagem de Clientes" << endl;
    cout << "4 - Procurar Cliente";
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

        if (opcao < 0 || opcao > 4) {
            cout << "ERRO: Escolha uma opção válida";
            continue;
        }

        if (opcao >= 0 && opcao <= 3) {
            break;
        }

    }
    return opcao;

}

string loja::view::clienteView::pedirNomeCliente() {

    string nomeProd;

    cout << "Nome do Cliente: ";

    while (true) {

        std::getline(std::cin, nomeProd);

        if (!nomeProd.empty() && nomeProd.find_first_not_of(' ') != std::string::npos /*carater invalido*/) {
            return nomeProd;
        }

        std::cout << "ERRO: Nome inválido.\n";
        std::cout << "Nome do Cliente: ";
    }
}

int loja::view::clienteView::pedirNIF() {

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

string loja::view::clienteView::pedirEmail() {

    string email;

    cout << "Nome do Cliente: ";

    while (true) {

        std::getline(std::cin, email);

        if (!email.empty() && email.find_first_not_of(' ') != std::string::npos /*carater invalido*/) {
            return email;
        }

        std::cout << "ERRO: Nome inválido.\n";
        std::cout << "Nome do Cliente: ";
    }
}






