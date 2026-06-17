#pragma once

#include <string>
#include <vector>
#include "../model/gestorProdutos.h"
#include "../views/ProdutoView.h"
#include "../model/gestorClientes.h"
#include "../views/ClienteView.h"
#include "../model/gestorEmpregados.h"
#include "../views/EmpregadoView.h"
#include "../exceptions/Exceptions.h"
#include "../model/ItemVenda.h"
#include "../model/Venda.h"
#include "../views/VendaView.h"
#include "../views/View.h"


namespace loja::controller {

    class Controller {

        private:
            gestor::gestor_empregados gestorEmpregados;
            gestor::gestor_produtos gestorProdutos;
            gestor::gestorClientes gestorClientes;


        public:
            static void erro (const std::string mensagem_erro);
            static void sucesso();






    };
}
