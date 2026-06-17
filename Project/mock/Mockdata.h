#pragma once

#include "../Headers/Model/GestorClientes.h"
#include "../Headers/Model/GestorEmpregados.h"
#include "../Headers/Model/GestorProdutos.h"
#include "../Headers/Model/GestorVendas.h"
#include <string>
#include <vector>

namespace loja {
    class Mock {

    public:

        static void load(
            gestor::gestorClientes& clientes,
            gestor::gestor_empregados& empregados,
            gestor::gestor_produtos& produtos,
            gestor::gestorVendas& vendas
        );
    };
};