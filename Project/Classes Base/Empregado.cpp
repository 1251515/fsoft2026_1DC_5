#include "Empregado.h"

namespace loja {

    empregado(std::string nome) {
        this->nomeEmpregado = nome;
    }

    void empregado::setPWD(std::string pwd) {
        this->pwdEmpregado = pwd;
    }

    void empregado::gerarID(int numEmpregado) {
        if (numEmpregado > 0) {
            this->idEmpregado = 1000000 + numEmpregado;
        }
    }

    int empregado::getID() {
        return this->idEmpregado;
    }

    std::string empregado::getNome() {
        return this->nomeEmpregado;
    }
};