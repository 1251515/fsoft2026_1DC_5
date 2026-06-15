//
// Created by bruno on 15/06/2026.
//

#ifndef FSOFT2026_1DC_5_PRODUTOVIEW_H
#define FSOFT2026_1DC_5_PRODUTOVIEW_H
#pragma once

#pragma once

#include <vector>
#include <string>
#include "../../headers/model/Produto.h"
class ProdutoView {

public:

    loja::produto getProduto();


    int getProdutoID();


    void mostrarProduto(const loja::produto& p);

    void mostrarStock(const std::vector<loja::produto>& produtos);
};
#endif //FSOFT2026_1DC_5_PRODUTOVIEW_H
