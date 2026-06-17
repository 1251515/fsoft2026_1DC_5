#include "../../headers/controller/Controller.h"
#include "../../headers/model/GestorClientes.h"
#include "../../headers/model/GestorProdutos.h"
#include "../../headers/model/GestorEmpregados.h"
#include "../../headers/model/GestorVendas.h"

using namespace std;
using namespace loja::controller;
using namespace loja::model;

int main() {

    GestorClientes* gestorClientes = new GestorClientes();
    GestorProdutos* gestorProdutos = new GestorProdutos();
    GestorEmpregados* gestorEmpregados = new GestorEmpregados();
    GestorVendas* gestorVendas = new GestorVendas();

    Controller controller(
        gestorClientes,
        gestorProdutos,
        gestorEmpregados,
        gestorVendas
    );

    controller.exec();

    cout << "Application has exited" << endl;

    delete gestorClientes;
    delete gestorProdutos;
    delete gestorEmpregados;
    delete gestorVendas;

    return 0;
}