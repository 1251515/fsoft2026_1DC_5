//
// Created by bruno on 16/06/2026.
//

#ifndef FSOFT2026_1DC_5_LISTAPRODUTOS_H
#define FSOFT2026_1DC_5_LISTAPRODUTOS_H

#endif //FSOFT2026_1DC_5_LISTAPRODUTOS_H
#pragma once

#include "../model/Produto.h"
#include "../model/gestorProdutos.h"
#include <vector>

class listaProdutos {
public:
    void mostrarStock(const std::vector<loja::produto>& lista);
    void mostrarDetalhes(const loja::produto& produto);
};