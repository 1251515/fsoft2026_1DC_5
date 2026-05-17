#include "Produto.h"


namespace loja {

    produto::produto(std::string tipo, std::string nome) {
        this->tipo = tipo;
        this->nomeProd = nome;
    }

    void produto::setStock(int stock) {
        if (stock >= 0) {
            this->stock = stock;
        }
    }

    int produto::getStock() {
        return this->stock;
    }

    void produto::setPreco(float preco) {
        if (preco >= 0) {
            this->preco = preco;
        }
    }

    float produto::getPreco() {
        return this->preco;
    }

    void produto::gerarID(int numProduto) {
        if (numProduto > 0) {
            this->numProduto = 3000000 + numProduto;
        }
    }

    int produto::getID() {
        return this->idProd;
    }
}