#pragma once

#include "../model/Venda.h"
#include "../model/Itemvenda.h"
#include <string>


namespace loja::view {

    class VendaView {

    public:

        static int menuVendas();
        static int menuGestaoPagamento();

        static int pedirIDempregado();
        static int pedirIDProduto();
        static int pedirQuantidade();
        static bool adicionarMaisProdutos();
        static int pedirNIF();
        static TipoPagamento pedirTipoPagamento();
        static void mostrarVendas(const std::vector<venda>& vendas);
        const std::vector<itemVenda>& getVendas() const;

    };

}

