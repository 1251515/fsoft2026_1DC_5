#pragma once

#include "../../headers/views/ProdutoView.h"
#include <vector>
#include <iostream>
#include <iomanip>      //formatação


using namespace std;

int loja::view::ProdutoView::menuProdutos() {

    int opcao;

    cout << "1 - Criar Produto" << endl;
    cout << "2 - Remover Produto" << endl;
    cout << "3 - Ver Listagem de Produtos" << endl;
    cout << "4 - Procurar Produto" << endl;
    cout << "5 - Alterar Preço de Produto" << endl;
    cout << "6 - Alterar Stock de Produto" << endl;
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

       if (opcao < 0 || opcao > 7) {
           cout << "ERRO: Escolha uma opção válida";
           continue;
       }

       if (opcao >= 0 && opcao <= 6) {
           break;
       }

   }
    return opcao;

}

void loja::view::ProdutoView::printProdutos (const std::vector<loja::produto>& listaProdutos) {

    cout << left
        << setw(30) << "Nome"
        << setw(10) << "Plataforma"
        << setw(6) << "Preço"
        << setw(5) << "Stock"
        << setw(7) << "ID"
        << endl;

    cout << string(60, '-') << endl;            //headline

    for (int i = 0; i <= listaProdutos.size(); i++) {
        cout << left
            << setw(30) << listaProdutos[i].getNome()
            << setw(10) << listaProdutos[i].getPlataforma()
            << setw(6) << listaProdutos[i].getPreco()
            << setw(5) << listaProdutos[i].getStock()
            << setw(7) << listaProdutos[i].getID()
            << endl;
        }
    }

string loja::view::ProdutoView::pedirNomeProduto () {

    string nomeProd;

    cout << "Nome do produto: ";

    while (true) {

        std::getline(std::cin, nomeProd);

        if (!nomeProd.empty() && nomeProd.find_first_not_of(' ') != std::string::npos /*carater invalido*/) {
            return nomeProd;
            }

        std::cout << "ERRO: Nome inválido.\n";
        std::cout << "Nome: ";
    }
}

string loja::view::ProdutoView::pedirPlataforma () {

    string plataforma;

    cout << "Plataforma: ";

    while (true) {

        std::getline(std::cin, plataforma);

        if (!plataforma.empty() && plataforma.find_first_not_of(' ') != std::string::npos /*carater invalido*/) {
            return plataforma;
        }

        std::cout << "ERRO: Plataforma inválida.\n";
        std::cout << "Plataforma: ";
    }
}




