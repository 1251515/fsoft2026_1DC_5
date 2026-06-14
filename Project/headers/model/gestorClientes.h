#pragma once

#include <vector>

#include "Cliente.h"

namespace loja::gestor {

    class gestorClientes {

        private:
            std::vector<cliente> clientList;

        public:
            bool addCliente (const cliente& cliente);
            bool removeCliente (int NIF);
    };
}
