#pragma once


#include "../../headers/model/Produto.h"
#include "../../headers/model/GestorProdutos.h"
#include <vector>
#include <string>
#include <iostream>

namespace loja::gestor {

    int gestor_produtos::nextID = 3000000;

    int gestor_produtos::gerarID() {
        return nextID++;
    }

    bool gestor_produtos::addProduto(const std::string& nome, const std::string& plataforma) {
        if (nome.empty() || plataforma.empty()) {
            return false;
        }
        produto novo (nome, plataforma, gerarID(), 0 /*preço*/, 0 /*stock*/);
        gameList.push_back(novo);
        return true;
    }

    void gestor_produtos::setStock(const int idProd, int newstock) {
        for (int i = 0; i < gameList.size() - 1; i++) {
            if (gameList[i].getID() == idProd) {
                gameList[i].stock = newstock;
            }
        }
    }

    void gestor_produtos::setPreco(const int idProd, int novopreco) {
        for (int i = 0; i < gameList.size() - 1; i++) {
            if (gameList[i].getID() == idProd) {
                gameList[i].preco = novopreco;
            }
        }
    }


    bool gestor_produtos::removeProduto(const int idProd) {
        for (int i = 0; i < gameList.size() - 1; i++) {
            if (gameList[i].getID() == idProd) {
                gameList.erase(gameList.begin() + i);
                return true;
            }
        }

        std::cout << "ERRO: ID não encontrado" << std::endl;
        return false;
    }

    std::vector<produto> gestor_produtos::getProdutos() const {
        return this->gameList;
    }
}
