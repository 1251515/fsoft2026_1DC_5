#pragma once

#include "../../headers/model/gestorClientes.h"
#include "../../headers/model/Cliente.h"
#include <vector>
#include <iostream>

using namespace loja::gestor;

namespace loja::gestor {

    bool gestorClientes::addCliente(const std::string& nome, const int& NIF, const std::string& email) {

        if (nome.empty() || email.empty() || NIF < 100000000 || NIF > 999999999) {
            return false;
        }
        cliente novo(nome, email, NIF);
        clientList.push_back(novo);
        return true;
    }

    bool gestorClientes::removeCliente(int NIF) {

        for (int i = 0; i <= clientList.size(); i++) {
            if (clientList[i].getNIF() == NIF) {
                clientList.erase(clientList.begin() + i);
                return true;
            }
        }

        std::cout << "ERRO: NIF não encontrado" << std::endl;
        return false;
    }
}
