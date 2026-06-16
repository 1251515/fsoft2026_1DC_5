//
// Created by bruno on 16/06/2026.
//
#include "../../headers/model/Pagamento.h"

using namespace loja;

namespace loja {

    pagamento::pagamento(TipoPagamento tipo)
        : tipo(tipo), estado(EstadoPagamento::PENDENTE) {}

    TipoPagamento pagamento::getTipo() const {
        return this->tipo;
    }

    EstadoPagamento pagamento::getEstado() const {
        return this->estado;
    }

    void pagamento::setEstado(EstadoPagamento estado) {
        this->estado = estado;
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