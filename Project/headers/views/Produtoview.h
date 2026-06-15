//
// Created by bruno on 15/06/2026.
//

#ifndef FSOFT2026_1DC_5_PRODUTOVIEW_H
#define FSOFT2026_1DC_5_PRODUTOVIEW_H
#pragma once

#include "../../headers/model/Produto.h"
#include <string>
namespace loja {

    class ProdutoView {

    public:
        produto getProduto();

        int getProdutoID();

        void mostrarProduto(const produto& p);

        void mostrarStock(const std::vector<produto>& produtos);
    };

}
#endif //FSOFT2026_1DC_5_PRODUTOVIEW_H
