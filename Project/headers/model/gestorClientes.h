#pragma once

#include <vector>
#include <string>
#include "Cliente.h"


namespace loja::gestor {

    class gestorClientes {

        private:
            std::vector<cliente> clientList;

        public:
            void addCliente (const std::string& nome,
                            const int& NIF,
                            const std::string& email);

            void removeCliente (int NIF);
            std::vector<cliente> getClientes () const;
            cliente* procurarcliente(int NIF);
    };
}
