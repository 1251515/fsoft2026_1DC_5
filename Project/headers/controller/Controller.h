#pragma once

#include <string>
#include <vector>
#include "../exceptions/Exceptions.h"
#include "../views/View.h"
#include "../model/gestorProdutos.h"
#include "../views/ProdutoView.h"
#include "../model/gestorClientes.h"
#include "../views/ClienteView.h"
#include "../model/gestorEmpregados.h"
#include "../views/EmpregadoView.h"
#include "../model/gestorVendas.h"
#include "../views/VendaView.h"



namespace loja::controller {

    class Controller {

        private:

            gestor::gestor_empregados gestorEmpregados;
            gestor::gestor_produtos gestorProdutos;
            gestor::gestorClientes gestorClientes;
            gestor::gestorVendas gestorVendas;


            void menuClientes();
            void menuEmpregados();
            void menuProdutos();
            void menuVendas();

            void criarCliente();
            void removerCliente();
            void listagemClientes() const;
            void procurarCliente();

            void criarEmpregado();
            void removerEmpregado();
            void listagemEmpregados() const;
            void procurarEmpregado();

            void criarProduto();
            void removerProduto();
            void listagemProdutos() const;
            void procurarProduto();
            void setStockProduto();
            void setPrecoProduto();

            void criarVenda();
            void mostrarComprasCliente() const;

            void carregarMockdata();

        public:

            Controller() = default;
            void exec();

    };
}
