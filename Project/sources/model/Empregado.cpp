#include "Empregado.h"
#include <string>

namespace loja {

    empregado::empregado(std::string nome, int num) {
        this->nomeEmpregado = nome;
        this->idEmpregado = 1000000 + gerarID(num);
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