#include <gtest/gtest.h>
#include "../headers/model/Empregado.h"

using namespace loja;

TEST(EmpregadoTest, CriarEmpregadoValido) {

    empregado e(
        "Joao",
        4000000
    );

    EXPECT_EQ(e.getNome(), "Joao");
    EXPECT_EQ(e.getID(), 4000000);
}
