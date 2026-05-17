#include "Produto.h"


namespace loja {

    produto::produto(std::string plataforma, std::string nome) {
        this->plataforma = plataforma;
        this->nomeProd = nome;
    }

    std::string produto::getPlataforma() {
        return this->plataforma;
    }

    std::string produto::getNome() {
        return this->nomeProd;
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
            this->idProduto = 3000000 + numProduto;
        }
    }

    int produto::getID() {
        return this->idProd;
    }
};