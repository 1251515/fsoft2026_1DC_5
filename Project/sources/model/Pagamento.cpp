
#include "../../headers/model/Pagamento.h"


namespace loja {

    pagamento::pagamento() {
        tipo = TipoPagamento::UNDEFINED;
        estado = EstadoPagamento::PENDENTE;
    }


    TipoPagamento pagamento::getTipo() const {
        return this->tipo;
    }

    void pagamento::setTipo(TipoPagamento metodo) {
        this->tipo = metodo;
    }

    EstadoPagamento pagamento::getEstado() const {
        return this->estado;
    }

    void pagamento::setEstado(EstadoPagamento status) {
        this->estado = status;
    }

    std::string pagamento::getTipoStr() const {
        switch (this->tipo) {
            case TipoPagamento::MULTIBANCO:
                return "Multibanco";
            case TipoPagamento::MBWAY:
                return "MB Way";
            case TipoPagamento::CARTAO_CREDITO:
                return "Cartão de Crédito";
            case TipoPagamento::DINHEIRO:
                return "Dinheiro";
            default:
                return "Desconhecido";
        }
    }

    std::string pagamento::getEstadoStr() const {
        switch (this->estado) {
            case EstadoPagamento::PENDENTE:
                return "Pendente";
            case EstadoPagamento::APROVADO:
                return "Aprovado";
            case EstadoPagamento::RECUSADO:
                return "Recusado";
            default:
                return "Desconhecido";
        }
    }

}