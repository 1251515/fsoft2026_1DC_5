#pragma once

#include <vector>
#include <string>
#include "Cliente.h"

namespace loja::gestor {

    class gestorClientes {

        private:
            std::vector<cliente> clientList;

        public:
            bool addCliente (const std::string& nome, const int& NIF, const std::string& email);
            bool removeCliente (int NIF);
            std::vector<cliente> getClientes () const;
    };
}
