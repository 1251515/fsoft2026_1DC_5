#pragma once

#include "../../headers/views/EmpregadoView.h"
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

void loja::view::EmpregadoView::printEmpregados(const std::vector<empregado>& lista) {

    cout << left
        << setw(30) << "Nome"
        << setw(7) << "ID"
        << endl;

    cout << string(50, '-') << endl;            //headline

    for (int i = 0; i <= lista.size(); i++) {
        cout << left
            << setw(30) << lista[i].getNome()
            << setw(9) << lista[i].getID()
            << endl;
    }

}

int loja::view::EmpregadoView::menuEmpregados() {
    int opcao;

    cout << "1 - Criar Empregado" << endl;
    cout << "2 - Remover Empregado" << endl;
    cout << "3 - Ver Listagem de Empregados" << endl;
    cout << "4 - Procurar Empregado";
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

string loja::view::EmpregadoView::pedirNomeEmpregado() {

    string nomeEmpregado;

    cout << "Nome do Empregado: ";

    while (true) {

        std::getline(std::cin, nomeEmpregado);

        if (!nomeEmpregado.empty() && nomeEmpregado.find_first_not_of(' ') != std::string::npos /*carater invalido*/) {
            return nomeEmpregado;
        }

        std::cout << "ERRO: Nome inválido.\n";
        std::cout << "Nome do Empregado: ";
    }
}

int loja::view::EmpregadoView::pedirIDempregado() {

    int ID = 0;

    cout << "ID do Empregado: ";

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
        cout << "ID do Empregado: ";

    }
}


void loja::view::EmpregadoView::detalhesEmpregado(const empregado& c) {

    std::cout << "Nome : " << c.getNome() << '\n';
    std::cout << "ID  : " << c.getID() << '\n';
}