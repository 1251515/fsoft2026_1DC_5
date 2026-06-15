//
// Created by bruno on 15/06/2026.
//
#include "../../headers/model/Venda.h"

using namespace loja;

venda::venda(
        int idVenda,
        int idCliente) {

    this->idVenda = idVenda;
    this->idCliente = idCliente;

    concluida = false;
}

int venda::getID() const {

    return idVenda;
}

int venda::getClienteID() const {

    return idCliente;
}

bool venda::getEstado() const {

    return concluida;
}

void venda::setEstado(bool estado) {

    concluida = estado;
}

void venda::alterarProdutos(
        const std::vector<int>& p) {

    produtos = p;
}