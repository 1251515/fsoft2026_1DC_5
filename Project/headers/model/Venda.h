#pragma once

#include <vector>
#include "Itemvenda.h"

namespace loja {

    class venda {

    private:

        int idVenda;
        int idCliente;
        int idEmpregado;

        std::vector<itemVenda> produtos;

        bool concluida;

        static int nextID;

    public:

        venda(const int idCliente,
            const int idEmpregado);

        int getID() const;

        bool getEstado();

        int getClienteID() const;

        void setEstado(bool estado);

        static int gerarIDvenda();

        void adicionarItem(const itemVenda& item);

        float getTotal() const;

    };

}

