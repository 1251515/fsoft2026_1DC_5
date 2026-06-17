#pragma once

#include "../../headers/model/gestorClientes.h"
#include "../../headers/model/Cliente.h"
#include "../../headers/exceptions/Exceptions.h"
#include <vector>
#include <iostream>

using namespace loja::gestor;

namespace loja::gestor {

    void gestorClientes::addCliente(const std::string& nome, const int& NIF, const std::string& email) {

        if (nome.empty() || email.empty() || NIF < 100000000 || NIF > 999999999) {
            throw exceptions::DadosInvalidosException("Nome ou NIF Inválido");
        }
        cliente novo(nome, email, NIF);
        clientList.push_back(novo);
    }

    void gestorClientes::removeCliente(int NIF) {

        for (int i = 0; i < clientList.size(); i++) {
            if (clientList[i].getNIF() == NIF) {
                clientList.erase(clientList.begin() + i);
                return;
            }
        }

        throw exceptions::DadosNaoEncontradosException("NIF não encontrado");
    }

    std::vector<cliente> gestorClientes::getClientes() const {
        return this->clientList;
    }

    cliente* gestorClientes::procurarcliente(int NIF) {
        for (auto& e : clientList) {
            if (e.getNIF() == NIF) {
                return &e;
            }
        }
        throw exceptions::DadosNaoEncontradosException("NIF não encontrado");
    }
}
