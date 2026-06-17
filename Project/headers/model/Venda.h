#pragma once

#include <vector>
#include "Itemvenda.h"
#include "Pagamento.h"

namespace loja {

    class venda {

    private:

        int idVenda;
        int idCliente;
        int idEmpregado;

        std::vector<itemVenda> produtos;

        pagamento pagamentoVenda;

        bool concluida;

    public:

        venda(const int idCliente,
            const int idEmpregado);

        bool getEstado();
        void setEstado(bool estado);

        int getClienteID() const;

        int getIDvenda() const;

        void adicionarItem(const itemVenda& item);

        float getTotal() const;

        pagamento& getPagamento();
        void setPagamento(TipoPagamento tipo);

    };

}

