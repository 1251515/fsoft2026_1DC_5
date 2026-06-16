//
// Created by bruno on 16/06/2026.
//

#ifndef FSOFT2026_1DC_5_ITEMVENDA_H
#define FSOFT2026_1DC_5_ITEMVENDA_H
#endif //FSOFT2026_1DC_5_ITEMVENDA_H
#pragma once
#include <string>

namespace loja {

    class itemVenda {
    private:
        int idProduto;
        int quantidade;
        float precoUnitario;

    public:
        itemVenda(int idProduto, int quantidade, float precoUnitario);

        int getIdProduto() const;
        int getQuantidade() const;
        float getPrecoUnitario() const;
        float getSubtotal() const;

        void setQuantidade(int quantidade);
        void setPrecoUnitario(float preco);
    };

};

