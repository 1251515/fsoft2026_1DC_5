#pragma once

#include "Empregado.h"
#include <vector>
#include <string>


namespace loja::gestor {

    class gestor_empregados {
    private:
        std::vector<empregado> listaEmpregados;
        static int nextID;
    public:
        bool addEmpregado(const std::string& nome);
        bool removeEmpregado(int ID);
        empregado* procurarEmpregado(int ID);
        const std::vector<empregado>& getEmpregados() const;
        static int gerarID();

    };
}