#pragma once

#include "Empregado.h"
#include <vector>


namespace loja::gestor {

    class gestor_empregados {
        private:
            std::vector<empregado> listaEmpregados;
            static int nextID = 4000000;
        public:
            bool addEmpregado(const std::string& nome);
            bool removeEmpregado(int ID);
            static int gerarID();
    };
}