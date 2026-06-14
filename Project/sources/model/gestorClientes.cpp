#include "../../headers/model/gestorClientes.h"
#include "../../headers/model/Cliente.h"
#include <vector>
#include <iostream>


namespace loja::gestor {

    bool gestorClientes::addCliente(cliente& cliente) {

        for (int i = 0; i < clientList.size(); i++) {
            if (cliente.getNIF() == clientList[i].getNIF()) {
                std::cout << "NIF já existente" << endl;
                return false;
            }
        }
        clientList.push_back(cliente);
        return true;
    }
}