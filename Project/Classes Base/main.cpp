#include "ClassesBase.h"
#include "Listas.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

    int cmd;

    do {

        cout << "BEM VINDO À LOJA!" << endl;
        cout << "1. Empregados" << endl;
        cout << "2. Produtos" << endl;
        cout << "3. Clientes" << endl;

        cin >> cmd;

        switch (cmd) {

            case 1:
                listaEmpregados();
                break;

            case 2:
                listaProdutos();
                break;

            case 3:
                listaClientes();
                break;
        }
    } while (cmd != 0);
}