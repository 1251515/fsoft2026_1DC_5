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

    for (int i = 0; i < listaProdutos.size(); i++) {
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
        std::cout << "Nome do produto: ";
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

int loja::view::ProdutoView::pedirIDproduto() {

    int ID = 0;

    cout << "ID do Produto: ";

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
        cout << "ID do Produto: ";

    }
}

int loja::view::ProdutoView::pedirStock() {
    int stock = 0;

    cout << "Stock Existente: ";

    while (true) {

        if (!(std::cin >> stock)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            cout << "ERRO: Stock Inválido. \n";
            continue;
        }

        if (stock > 0) {
            return stock;
        }

        cout << "ERRO: Stock Inválido. \n";
        cout << "Stock Inválido: ";

    }
}

float loja::view::ProdutoView::pedirPreco() {
    float preco = 0;

    cout << "Preço do Produto: ";

    while (true) {

        if (!(std::cin >> preco)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            cout << "ERRO: Preço Inválido. \n";
            continue;
        }

        if (preco > 0) {
            return preco;
        }

        cout << "ERRO: Preço Inválido. \n";
        cout << "Preço do Produto: ";

    }
}

void loja::view::ProdutoView::detalhesProduto(const produto& c) {

    std::cout << "Nome : " << c.getNome() << '\n';
    std::cout << "Plataforma  : " << c.getPlataforma() << '\n';
    std::cout << "Preço: " << c.getPreco() << '\n';
    std::cout << "Stock: " << c.getStock() << '\n';
    std::cout << "ID: " << c.getID() << '\n';
}