#pragma once

#include "../model/Cliente.h"
#include "../model/gestorClientes.h"
#include <vector>
class listaClientes {
    public:
        void printLista (const std::vector<loja::cliente>& lista);
};