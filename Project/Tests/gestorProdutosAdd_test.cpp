#include <gtest/gtest.h>

#include "../headers/model/gestorProdutos.h"
#include "../headers/exceptions/Exceptions.h"

using namespace loja::gestor;
using namespace loja::exceptions;
TEST(GestorProdutosTest, AdicionarProduto) {

    gestor_produtos gestor;

    EXPECT_NO_THROW(
        gestor.addProduto(
            "EA FC 26",
            "PS5",
            69.99f,
            10
        )
    );

    EXPECT_EQ(
        gestor.getProdutos().size(),
        1
    );
}