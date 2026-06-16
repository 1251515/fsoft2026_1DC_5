#pragma once

#include "../model/Venda.h"
#include "../model/Itemvenda.h"
#include <string>


namespace loja::view {

    class VendaView {

    public:

        static int menuVendas();

        static int pedirIDempregado();
        static int pedirIDProduto();
        static int pedirQuantidade(int stock);
        static bool adicionarMaisProdutos();
        static int pedirNIF();
        static TipoPagamento pedirTipoPagamento();

    };

}

