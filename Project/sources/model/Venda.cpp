//
// Created by bruno on 15/06/2026.
//
#include "../../headers/model/Venda.h"
#include "../../headers/model/Itemvenda.h"

using namespace loja;

int nextID = 7000000;

venda::venda(int idCliente,
            int idEmpregado) {

    this->idVenda = gerarIDvenda();
    this->idCliente = idCliente;
    this->idEmpregado = idEmpregado;

    concluida = false;
}

int venda::getIDvenda() const {

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

int venda::gerarIDvenda() {
    return nextID++;
}

void venda::adicionarItem(const itemVenda& item) {
    produtos.push_back(item);
}


float venda::getTotal() const {

    float total = 0;

    for (int i = 0; i < produtos.size() - 1 ; i++) {
        total += produtos[i].getSubtotal();
    }

    return total;
}

pagamento &venda::getPagamento() {
    return pagamentoVenda;
}

void venda::setPagamento(TipoPagamento tipo) {
    pagamentoVenda.setTipo(tipo);
}
