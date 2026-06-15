//
// Created by bruno on 15/06/2026.
//
#include "../../headers/controllers/ProdutoController.h"

using namespace loja;

ProdutoController::ProdutoController(
        ListaProdutos* lista) {

    this->lista = lista;
}

void ProdutoController::criarProduto() {

    produto p = view.getProduto();

    lista->adicionarProduto(p);
}

void ProdutoController::removerProduto() {

    int id = view.getProdutoID();

    lista->removerProduto(id);
}

void ProdutoController::verStock() {

    view.mostrarStock(
        lista->listarProdutos()
    );
}

void ProdutoController::detalhesProduto() {

    int id = view.getProdutoID();

    produto* p = lista->procurarProduto(id);

    if(p != nullptr)
        view.mostrarProduto(*p);
}