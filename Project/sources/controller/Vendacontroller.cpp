//
// Created by bruno on 15/06/2026.
//
#include "../../headers/controllers/VendaController.h"

using namespace loja;
using namespace std;

VendaController::VendaController(
        ListaVendas* lista) {

    this->lista = lista;
}

void VendaController::criarVenda() {

    venda v = view.getVenda();

    lista->adicionarVenda(v);
}

void VendaController::estadoVenda() {

    int id = view.getVendaID();

    venda* v = lista->procurarVenda(id);

    if(v != nullptr)
        view.mostrarEstado(*v);
}

void VendaController::alterarVenda() {

    int id = view.getVendaID();

    vector<int> produtos;

    int p;

    cout << "Novos produtos (-1 termina): ";

    while(cin >> p && p != -1){

        produtos.push_back(p);
    }

    lista->alterarVenda(id, produtos);
}