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

        float subtotal;

    public:

        venda(const int idCliente,
            const int idEmpregado);

        bool getEstado();
        void setEstado(EstadoPagamento estado);

        int getClienteID() const;

        int getIDvenda() const;

        void adicionarItem(const itemVenda& item);

        float getTotal() const;
        void setTotal(float total);

        pagamento& getPagamento();
        void setPagamento(TipoPagamento tipo);
        void processarPagamento();

        const std::vector<itemVenda>& getProdutos() const;

    };

}

