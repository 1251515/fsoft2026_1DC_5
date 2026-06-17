
#pragma once

namespace loja {

    class itemVenda {
    private:
        int idProduto;
        int quantidade;
        float precoUnitario;

    public:
        itemVenda(int idProduto, int quantidade, float precoUnitario);

        float getSubtotal() const;

        int getIDProduto() const;
        int getQuantidade() const;
        float getPrecoUnitario() const;

        void setPrecoUnitario(const float preco);
        void setProduto(const int prod);
    };

};

