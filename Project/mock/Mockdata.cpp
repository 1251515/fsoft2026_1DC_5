#include "Mockdata.h"

using namespace loja;

void Mock::load(
    gestor::gestorClientes& clientes,
    gestor::gestor_empregados& empregados,
    gestor::gestor_produtos& produtos,
    gestor::gestorVendas& vendas
) {

    // ======================
    // CLIENTES
    // ======================
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

    // ======================
    // EMPREGADOS
    // ======================
    empregados.addEmpregado("Joao");
    empregados.addEmpregado("Maria");
    empregados.addEmpregado("Pedro");

    // ======================
    // PRODUTOS (CORRIGIDO)
    // agora com preco e stock
    // ======================
    produtos.addProduto(
        "EA FC 26",
        "PS5",
        69.99f,
        10
    );

    produtos.addProduto(
        "God of War Ragnarok",
        "PC",
        59.99f,
        15
    );

    produtos.addProduto(
        "Mario Kart World",
        "Switch",
        49.99f,
        20
    );

    // ======================
    // VENDAS (opcional)
    // ======================
    // deixo vazio como tens no controller
}