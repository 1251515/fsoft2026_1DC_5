cmake_minimum_required(VERSION 3.20)

project(FSoft2026)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(headers)

file(GLOB_RECURSE SOURCES
        sources/*.cpp
)

include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

# Aplicação principal

add_executable(
        FSoft2026
        main.cpp
        ${SOURCES}
        mock/Mockdata.cpp
)

# Executável dos testes

add_executable(
        Tests

        Tests/main_test.cpp

        Tests/produto_test.cpp
        Tests/cliente_test.cpp
        Tests/empregado_test.cpp

        Tests/gestorClientesAdd_test.cpp
        Tests/gestorProdutosAdd_test.cpp
        Tests/gestorEmpregadosAdd_test.cpp
        mock/Mockdata.cpp
        ${SOURCES}
)

target_link_libraries(
        Tests
        GTest::gtest
)

include(GoogleTest)

gtest_discover_tests(Tests)