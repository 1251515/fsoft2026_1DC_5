#pragma once

#include "../model/Cliente.h"
#include "../model/gestorClientes.h"
#include <vector>
class listaClientes {
    public:
        void printClientes (const std::vector<loja::cliente>& lista);
};