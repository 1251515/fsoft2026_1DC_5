#include <gtest/gtest.h>
#include "../headers/model/gestorClientes.h"
#include "../headers/exceptions/Exceptions.h"

using namespace loja::gestor;
using namespace loja::exceptions;

TEST(GestorClientesTest, AdicionarCliente) {

    gestorClientes gestor;

    EXPECT_NO_THROW(
        gestor.addCliente(
            "Bruno Sousa",
            123456789,
            "bruno@email.pt"
        )
    );

    EXPECT_EQ(
        gestor.getClientes().size(),
        1
    );
}