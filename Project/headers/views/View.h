#pragma once

#include <string>

namespace loja::view {

    class View {

        public:
            static int menuPrincipal();
            static void erro (const std::string mensagem);
            static void sucesso(const std::string mensagem);
    };
}