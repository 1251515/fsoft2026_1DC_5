#include <gtest/gtest.h>

#include "../headers/model/gestorEmpregados.h"
#include "../headers/exceptions/Exceptions.h"

using namespace loja::gestor;
using namespace loja::exceptions;
TEST(GestorEmpregadosTest, AdicionarEmpregado) {

    gestor_empregados gestor;

    EXPECT_NO_THROW(
        gestor.addEmpregado("Joao")
    );

    EXPECT_EQ(
        gestor.getEmpregados().size(),
        1
    );
}