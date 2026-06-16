
#pragma once

#include <string>

namespace loja {

    enum class TipoPagamento {
        MULTIBANCO,
        MBWAY,
        CARTAO_CREDITO,
        DINHEIRO,
        UNDEFINED
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
        pagamento();

        TipoPagamento getTipo() const;
        void setTipo(TipoPagamento metodo);

        EstadoPagamento getEstado() const;
        void setEstado(EstadoPagamento estado);

        std::string getTipoStr() const;
        std::string getEstadoStr() const;
    };

}
