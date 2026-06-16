#pragma once

#include <vector>
#include <string>
#include "../../headers/model/Produto.h"
#include "../../headers/model/gestorProdutos.h"


namespace loja::view {

    class ProdutoView {

        public:
            static void printProdutos (const std::vector<produto>& lista);
            static int menuProdutos();

            static std::string pedirNomeProduto();
            static std::string pedirPlataforma();

    };
}
