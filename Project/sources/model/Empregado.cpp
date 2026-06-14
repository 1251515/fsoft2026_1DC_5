#include "../../headers/model/Empregado.h"
#include <string>

using namespace loja;

namespace loja {

    empregado::empregado(std::string nome, int num) {
        this->nomeEmpregado = nome;
        this->idEmpregado = 4000000 + gerarID(num);
    }

    void empregado::setPWD(std::string pwd) {
        this->pwdEmpregado = pwd;
    }

    void empregado::gerarID(int numEmpregado) {
        if (numEmpregado > 0) {
            this->idEmpregado = 4000000 + numEmpregado;
        }
    }

    int empregado::getID() {
        return this->idEmpregado;
    }

    std::string empregado::getNome() {
        return this->nomeEmpregado;
    }
};