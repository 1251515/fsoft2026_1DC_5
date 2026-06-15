//
// Created by bruno on 15/06/2026.
//

#ifndef FSOFT2026_1DC_5_PRODUTOCONTROLLER_H
#define FSOFT2026_1DC_5_PRODUTOCONTROLLER_H
#pragma once

#include "../views/ProdutoView.h"
#include "../lists/ListaProdutos.h"

namespace loja {

    class ProdutoController {

    private:

        ProdutoView view;
        ListaProdutos* lista;

    public:

        ProdutoController(ListaProdutos* lista);

        void criarProduto();

        void removerProduto();

        void verStock();

        void detalhesProduto();
    };

}
#endif //FSOFT2026_1DC_5_PRODUTOCONTROLLER_H
