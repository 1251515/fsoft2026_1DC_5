//
// Created by bruno on 15/06/2026.
//

#ifndef FSOFT2026_1DC_5_VENDA_H
#define FSOFT2026_1DC_5_VENDA_H
#endif //FSOFT2026_1DC_5_VENDA_H
#pragma once

#include <vector>

namespace loja {

    class venda {

    private:

        int idVenda;
        int idCliente;
        int idEmpregado;

        std::vector<int> produtos;

        bool concluida;

    public:

        venda(
            const int idVenda,
            const int idCliente,
            const int idEmpregado);

        int getID() const;

        bool getEstado();

        int getClienteID() const;

        void setEstado(bool estado);

    };

}

