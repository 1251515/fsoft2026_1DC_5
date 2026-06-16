//
// Created by bruno on 16/06/2026.
//
#include "../../headers/model/ItemVenda.h"

using namespace loja;

namespace loja {

    itemVenda::itemVenda(int idProduto, int quantidade, float precoUnitario)
        : idProduto(idProduto), quantidade(quantidade), precoUnitario(precoUnitario) {}

    int itemVenda::getIdProduto() const {
        return this->idProduto;
    }

    int itemVenda::getQuantidade() const {
        return this->quantidade;
    }

    float itemVenda::getPrecoUnitario() const {
        return this->precoUnitario;
    }

    float itemVenda::getSubtotal() const {
        return this->quantidade * this->precoUnitario;
    }

    void itemVenda::setQuantidade(int quantidade) {
        if (quantidade > 0) {
            this->quantidade = quantidade;
        }
    }

    void itemVenda::setPrecoUnitario(float preco) {
        if (preco >= 0) {
            this->precoUnitario = preco;
        }
    }

}