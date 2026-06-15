//
// Created by bruno on 15/06/2026.
//

#ifndef FSOFT2026_1DC_5_PAGAMENTO_H
#define FSOFT2026_1DC_5_PAGAMENTO_H
#pragma once

#include <string>

namespace loja {

    enum class TipoPagamento {
        MULTIBANCO,
        MBWAY,
        CARTAO_CREDITO,
        DINHEIRO
    };

    enum class EstadoPagamento {
        PENDENTE,
        APROVADO,
        RECUSADO
    };

    class pagamento {
    private:
        TipoPagamento tipo;
        EstadoPagamento estado;

    public:
        pagamento(TipoPagamento tipo);

        TipoPagamento getTipo() const;
        EstadoPagamento getEstado() const;
        void setEstado(EstadoPagamento estado);

        std::string getTipoStr() const;
        std::string getEstadoStr() const;
    };

}
#endif //FSOFT2026_1DC_5_PAGAMENTO_H
