#pragma once

#include "../../headers/model/Empregado.h"
#include "../../headers/model/gestorEmpregados.h"
#include "../../headers/exceptions/Exceptions.h"
#include <vector>
#include <iostream>


namespace loja::gestor {

    int gestor_empregados::nextID = 4000000;

    int gestor_empregados::gerarID() {
        return nextID++;
    }

    bool gestor_empregados::addEmpregado(const std::string& nome) {
        if (nome.empty()) {
            throw exceptions::DadosInvalidosException("Nome inválido");
        }
        empregado novo(nome, gerarID());
        listaEmpregados.push_back(novo);
        return true;
    }

    bool gestor_empregados::removeEmpregado(int ID) {

        for (int i = 0; i <= listaEmpregados.size() - 1; i++) {
            if (listaEmpregados[i].getID() == ID) {
                listaEmpregados.erase(listaEmpregados.begin() + i);
                return true;
            }
        }

        throw exceptions::DadosNaoEncontradosException("ID não encontrado");
    }
    empregado* gestor_empregados::procurarEmpregado(int ID) {
        for (auto& e : listaEmpregados) {
            if (e.getID() == ID) {
                return &e;
            }
        }

        throw exceptions::DadosNaoEncontradosException("ID não encontrado");
    }

    const std::vector<empregado>& gestor_empregados::getEmpregados() const {
        return listaEmpregados;
    }

}

