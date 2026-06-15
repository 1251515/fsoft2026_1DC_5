//
// Created by bruno on 15/06/2026.
//

#ifndef FSOFT2026_1DC_5_VENDA_H
#define FSOFT2026_1DC_5_VENDA_H
#pragma once

#include <vector>

namespace loja {

    class venda {

    private:

        int idVenda;
        int idCliente;

        std::vector<int> produtos;

        bool concluida;

    public:

        venda(
            int idVenda,
            int idCliente
        );

        int getID();

        bool getEstado();

        void alterarProdutos(
            const std::vector<int>& p
        );
    };

}
#endif //FSOFT2026_1DC_5_VENDA_H
