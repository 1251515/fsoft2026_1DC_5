#include "../../headers/model/Itemvenda.h"
#include "../../headers/exceptions/Exceptions.h"

using namespace loja;

namespace loja {

    itemVenda::itemVenda(int idProduto, int quantidade, float precoUnitario)
        : idProduto(idProduto), quantidade(quantidade), precoUnitario(precoUnitario) {}


    float itemVenda::getSubtotal() const {
        return this->quantidade * this->precoUnitario;
    }


    void itemVenda::setPrecoUnitario(float preco) {
        if (preco >= 0) {
            this->precoUnitario = preco;
        }
    }

    void itemVenda::setProduto(const int prod) {
        if (prod >= 3000000 && prod <= 3999999) {
            this->idProduto = prod;
        }

        throw exceptions::DadosNaoEncontradosException("ID não encontrado");
    }

    int itemVenda::getIDProduto() const {
        return idProduto;
    }

    int itemVenda::getQuantidade() const {
        return quantidade;
    }

    float itemVenda::getPrecoUnitario() const {
        return precoUnitario;
    }

}
