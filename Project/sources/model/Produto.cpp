#include "../../headers/model/Produto.h"
#include <string>

using namespace loja;

namespace loja {

    produto::produto(std::string plataforma, std::string nome, int num) {
        this->plataforma = plataforma;
        this->nomeProd = nome;
		gerarID(num);
    }

    std::string produto::getPlataforma() const{
        return this->plataforma;
    }

    std::string produto::getNome() const{
        return this->nomeProd;
    }


    int produto::getStock() const{
        return this->stock;
    }

    float produto::getPreco() const {
        return this->preco;
    }

    int produto::getID() const{
        return this->idProd;
    }

    void produto::setStock(int stock) {
        if (stock >= 0) {
            this->stock = stock;
        }
    }


    void produto::setPreco(float preco) {
        if (preco >= 0) {
            this->preco = preco;
        }
    }


    void produto::gerarID(int numProduto) {
        if (numProduto > 0) {
            this->idProd = 3000000 + numProduto;
        }
    }


}