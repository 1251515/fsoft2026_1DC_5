#include "Produto.h"


namespace loja {


    produto::produto(std::string tipo, std::string nome) {
        this->tipo = tipo;
        this->nome = nome;
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
}