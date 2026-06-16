#pragma once

#include "../model/Empregado.h"
#include "../model/gestorEmpregados.h"
#include <vector>
class listaEmpregados {

    public:
        void printEmpregados (const std::vector<loja::empregado>& lista);
};