#include "Mockdata.h"

using namespace loja;

void Mock::load(
    gestor::gestorClientes& clientes,
    gestor::gestor_empregados& empregados,
    gestor::gestor_produtos& produtos,
    gestor::gestorVendas& vendas
) {

    // Clientes

    clientes.addCliente(
        "Bruno Sousa",
        123456789,
        "bruno@email.pt"
    );

    clientes.addCliente(
        "Ana Silva",
        987654321,
        "ana@email.pt"
    );

    clientes.addCliente(
        "Carlos Costa",
        111222333,
        "carlos@email.pt"
    );

    // Empregados

    empregados.addEmpregado("Joao");
    empregados.addEmpregado("Maria");
    empregados.addEmpregado("Pedro");

    // Produtos

    produtos.addProduto(
        "EA FC 26",
        "PS5"
    );

    produtos.addProduto(
        "God of War Ragnarok",
        "PC"
    );

    produtos.addProduto(
        "Mario Kart World",
        "Switch"
    );

    // Não criar vendas por enquanto
}