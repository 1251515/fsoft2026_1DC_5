#include "../../headers/model/Venda.h"
#include "../../headers/model/Itemvenda.h"

using namespace loja;



venda::venda(int idCliente,
            int idEmpregado) {

    this->idVenda = getIDvenda();
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

void venda::setEstado(EstadoPagamento estado) {

    this->pagamentoVenda = estado;
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

void venda::processarPagamento() {

    pagamento& p = pagamentoVenda;

    switch (p.getTipo()) {

        case TipoPagamento::MBWAY:
        case TipoPagamento::MULTIBANCO:
        case TipoPagamento::CARTAO_CREDITO:
            p.setEstado(EstadoPagamento::APROVADO);
            break;

        case TipoPagamento::DINHEIRO:
            p.setEstado(EstadoPagamento::PENDENTE);
            break;

        default:
            p.setEstado(EstadoPagamento::RECUSADO);
            break;
    }
}


void venda::setTotal(float preco) {
    this->subtotal = preco;
}

