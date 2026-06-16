#pragma once

#include <string>
#include <vector>
#include "../model/gestorProdutos.h"
#include "../views/ProdutoView.h"
#include "../model/gestorClientes.h"
#include "../views/ClienteView.h"
#include "../model/gestorEmpregados.h"
#include "../views/EmpregadoView.h"



namespace loja::controller {

    class Controller {

    public:
        static void erro (const std::string mensagem_erro);
        static void sucesso();




    };
}