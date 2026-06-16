#pragma once

#include <string>
#include <vector>
#include "../model/Empregado.h"
#include "../model/gestorEmpregados.h"


namespace loja::view {

    class EmpregadoView {

        public:
            static void printEmpregados(const std::vector<empregado>& lista);
            static int menuEmpregados();

            static std::string pedirNomeEmpregado();
    };

}

