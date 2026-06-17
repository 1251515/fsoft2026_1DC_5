#pragma once

#include "Venda.h"
#include "Itemvenda.h"
#include <vector>
#include <string>

namespace loja::gestor {

    class gestorVendas {

        private:
            std::vector<venda> listaVendas;
            static int nextID;

        public:

            void addVenda(const venda& venda);
            venda* procurarVenda(int idVenda);
            std::vector<venda> getVendas();
            static int gerarIDvenda();
            std::vector<venda> getVendasPorCliente(int NIF) const;

    };
}