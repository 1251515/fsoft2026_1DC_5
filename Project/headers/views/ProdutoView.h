#pragma once

#include <vector>
#include <string>
#include "../model/Produto.h"
#include "../model/gestorProdutos.h"


namespace loja::view {

    class ProdutoView {

        public:
            static void printProdutos (const std::vector<produto>& lista);
            static int menuProdutos();

            static std::string pedirNomeProduto();
            static std::string pedirPlataforma();
            static int pedirIDproduto();
            static int pedirStock();
            static float pedirPreco();



            static void detalhesProduto(const produto& c);

    };
}
