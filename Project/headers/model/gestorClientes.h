#ifndef FSOFT2026_1DC_5_GESTORCLIENTES_H
#define FSOFT2026_1DC_5_GESTORCLIENTES_H

#include <vector>

#include "Cliente.h"

namespace loja::gestor {

    class gestorClientes {

        private:
            std::vector<Cliente> clientList;

        public:
            bool addCliente (cliente& cliente);
            bool removeCliente (int NIF);

    }
}

#endif