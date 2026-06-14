#pragma once

#include <string>

namespace loja {

    class empregado {       //IDs a começar em 4 são sempre Empregados

        private:
            int idEmpregado;
            std::string nomeEmpregado;

        public:
            empregado(const std::string& nome, const int& id);
            std::string getNome() const;
            int getID() const;

    };
};
