#include <gtest/gtest.h>

#include "../Headers/Model/Cliente.h"

using namespace loja;

TEST(ClienteTest, CriacaoValida) {

    cliente c(
        "Bruno",
        "bruno@email.pt",
        123456789
    );

    EXPECT_EQ(
        c.getNome(),
        "Bruno"
    );

    EXPECT_EQ(
        c.getEmail(),
        "bruno@email.pt"
    );

    EXPECT_EQ(
        c.getNIF(),
        123456789
    );
}