#pragma once


#include "../../headers/model/Produto.h"
#include "../../headers/model/GestorProdutos.h"
#include "../../headers/exceptions/Exceptions.h"
#include <vector>
#include <string>
#include <iostream>

namespace loja::gestor {

    int gestor_produtos::nextID = 3000000;

    int gestor_produtos::gerarID() {
        return nextID++;
    }

    void gestor_produtos::addProduto(const std::string& nome,
                                    const std::string& plataforma,
                                    float preco,
                                    int stock) {

        if (nome.empty() || plataforma.empty() || preco <= 0 || stock < 0) {
            throw exceptions::DadosInvalidosException("Dados Inválidos");
        }
        produto novo (nome, plataforma, gerarID(), preco, stock);
        gameList.push_back(novo);
    }

    void gestor_produtos::setStock(const int idProd, int newstock) {
        if (newstock < 0) {
            throw exceptions::DadosInvalidosException("Stock Inválido");
        }

        for (int i = 0; i < gameList.size(); i++) {
            if (gameList[i].getID() == idProd) {
                gameList[i].stock = newstock;
                return;
            }
        }

        throw exceptions::DadosNaoEncontradosException("ID não encontrado");
    }

    void gestor_produtos::setPreco(const int idProd, int novopreco) {
        if (novopreco < 0) {
            throw exceptions::DadosInvalidosException("Preço Inválido");
        }
            for (int i = 0; i < gameList.size(); i++) {
                if (gameList[i].getID() == idProd) {
                    gameList[i].preco = novopreco;
                    return;
                }
            }
            throw exceptions::DadosNaoEncontradosException("ID não encontrado");
        }


    void gestor_produtos::removeProduto(const int idProd) {
        for (int i = 0; i < gameList.size() - 1; i++) {
            if (gameList[i].getID() == idProd) {
                gameList.erase(gameList.begin() + i);
                return;
            }
        }
        throw exceptions::DadosNaoEncontradosException("ID não encontrado");
    }

    std::vector<produto> gestor_produtos::getProdutos() const {
        return this->gameList;
    }

    produto* gestor_produtos::procurarProdutoID(int ID) {
        for (auto& e : gameList) {
            if (e.getID() == ID) {
                return &e;
            }
        }
        throw exceptions::DadosNaoEncontradosException("ID não encontrado");
    }

    produto *gestor_produtos::procurarProdutoNome(
                                                const std::string &nome,
                                                const std::string &plataforma) {

        for (auto& e : gameList) {
            if (e.getNome() == nome && e.getPlataforma() == plataforma) {
                return &e;
            }
        }
        throw exceptions::DadosNaoEncontradosException("Jogo não encontrado");
    }
}

