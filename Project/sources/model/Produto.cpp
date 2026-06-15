#include "../../headers/model/Produto.h"
#include <string>

using namespace loja;

namespace loja {

    produto::produto(const std::string& nome,
                    const std::string& plataforma,
                    const int& id,
                    const float& preco,
                    const int& stock) {

        this->plataforma = plataforma;
        this->nomeProd = nome;
        this->preco = preco;
        this->stock = stock;
        this->idProd = id;
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


}