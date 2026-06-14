#include "../../headers/model/gestorClientes.h"
#include "../../headers/model/Cliente.h"
#include <vector>
#include <iostream>

using namespace loja::gestor;

namespace loja::gestor {

    bool gestorClientes::addCliente(const cliente& cliente) {

        for (int i = 0; i < clientList.size(); i++) {
            if (cliente.getNIF() == clientList[i].getNIF()) {
                std::cout << "NIF já existente" << std::endl;
                return false;
            }
        }
        clientList.push_back(cliente);
        return true;
    }

    bool gestorClientes::removeCliente(int NIF) {

        for (int i = 0; i < clientList.size(); i++) {
            if (clientList[i].getNIF() == NIF) {
                clientList.erase(clientList.begin() + i);
                return true;
            }
        }

        std::cout << "ERRO: NIF não encontrado" << std::endl;
        return false;
    }
}
