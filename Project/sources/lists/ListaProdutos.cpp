//
// Created by bruno on 16/06/2026.
//
#pragma once

#include "../../headers/lists/ListaProdutos.h"
#include "../../headers/model/gestorProdutos.h"
#include "../../headers/lists/ListaProdutos.h"

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void listaProdutos::mostrarStock(const std::vector<loja::produto>& lista) {
    cout << left
        << setw(10) << "ID"
        << setw(20) << "Nome"
        << setw(15) << "Plataforma"
        << setw(10) << "Stock"
        << setw(10) << "Preço"
        << endl;

    cout << string(65, '-') << endl;

    for (const auto& produto : lista) {
        cout << left
            << setw(10) << produto.getID()
            << setw(20) << produto.getNome()
            << setw(15) << produto.getPlataforma()
            << setw(10) << produto.getStock()
            << setw(10) << fixed << setprecision(2) << produto.getPreco()
            << endl;
    }
}

void listaProdutos::mostrarDetalhes(const loja::produto& produto) {
    cout << "\n=== Detalhes do Produto ===" << endl;
    cout << "ID: " << produto.getID() << endl;
    cout << "Nome: " << produto.getNome() << endl;
    cout << "Plataforma: " << produto.getPlataforma() << endl;
    cout << "Stock: " << produto.getStock() << endl;
    cout << "Preço: €" << fixed << setprecision(2) << produto.getPreco() << endl;
    cout << "=============================\n" << endl;
}