#pragma once

#include "../../headers/controller/Controller.h"
#include <iostream>
#include <string>

namespace loja::controller {

    void erro(const std::string mensagem_erro) {

        std::cout << "ERRO: " << mensagem_erro << std::endl;
    }

    void sucesso () {
        std::cout << "Criado com sucesso!" << std::endl;
    }
}