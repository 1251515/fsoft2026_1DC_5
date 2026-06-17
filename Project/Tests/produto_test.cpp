#include <gtest/gtest.h>
#include "../headers/model/Produto.h"

using namespace loja;

TEST(ProdutoTest, CriarProdutoValido) {

    produto p(
        "EA FC 26",
        "PS5",
        3000000,
        69.99f,
        10
    );

    EXPECT_EQ(p.getNome(), "EA FC 26");
    EXPECT_EQ(p.getPlataforma(), "PS5");
    EXPECT_EQ(p.getID(), 3000000);
    EXPECT_EQ(p.getPreco(), 69.99f);
    EXPECT_EQ(p.getStock(), 10);
}