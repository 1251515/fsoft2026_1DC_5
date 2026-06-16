#pragma once

#include "../model/Empregado.h"
#include "../model/gestorEmpregados.h"
#include <vector>
class listaEmpregados {

    public:
        void printLista (const std::vector<loja::empregado>& lista);
};