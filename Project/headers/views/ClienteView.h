#pragma once

#include <string>
#include <vector>
#include "../model/Cliente.h"
#include "../model/gestorClientes.h"

namespace loja::view {

    class clienteView {

        public:
            static void printClientes(const std::vector<cliente>& lista);
            static int menuClientes();

            static std::string pedirNomeCliente();
            static int pedirNIF();
            static std::string pedirEmail();

            static void detalhesCliente(const cliente& c);
    };
}
