#pragma once

#include "../../headers/model/gestorVendas.h"
#include "../../headers/exceptions/Exceptions.h"

using namespace loja::gestor;

int gestorVendas::nextID = 7000000;


int gestorVendas::gerarIDvenda() {
    return nextID++;
}

void gestorVendas::addVenda(const venda &venda) {
    listaVendas.push_back(venda);
}

std::vector<loja::venda> gestorVendas::getVendas() {
    return listaVendas;
}

loja::venda* gestorVendas::procurarVenda(int ID) {
    for (auto& e : listaVendas) {
        if (e.getIDvenda() == ID) {
            return &e;
        }
    }
    throw exceptions::DadosNaoEncontradosException("ID não encontrado");
}

std::vector<loja::venda> gestorVendas::getVendasPorCliente(int nif) const {

    std::vector<venda> resultado;

    for (int i = 0; i < listaVendas.size(); i++) {

        if (listaVendas[i].getClienteID() == nif) {
            resultado.push_back(listaVendas[i]);
        }
    }

    if (listaVendas.empty()) {
        throw exceptions::DadosNaoEncontradosException("Cliente sem Compras");
    }

    return resultado;
}