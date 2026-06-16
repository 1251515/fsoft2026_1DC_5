//
// Created by bruno on 15/06/2026.
//
#include "../../headers/model/Venda.h"

using namespace loja;

venda::venda(int idVenda,
            int idCliente,
            int idEmpregado) {

    this->idVenda = idVenda;
    this->idCliente = idCliente;
    this->idEmpregado = idEmpregado;

    concluida = false;
}

int venda::getID() const {

    return this->idVenda;
}

int venda::getClienteID() const {

    return this->idCliente;
}

bool venda::getEstado() {

    return concluida;
}

void venda::setEstado(bool estado) {

    concluida = estado;
}

