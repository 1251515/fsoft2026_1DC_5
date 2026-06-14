#include "../../headers/model/Empregado.h"
#include "../../headers/model/gestorEmpregados.h"
#include <string>

using namespace loja;

namespace loja {

    empregado::empregado(const std::string& nome, const int& id) {
        this->nomeEmpregado = nome;
        this->idEmpregado = id;
    }

    int empregado::getID() const {
        return this->idEmpregado;
    }

    std::string empregado::getNome() const {
        return this->nomeEmpregado;
    }
};