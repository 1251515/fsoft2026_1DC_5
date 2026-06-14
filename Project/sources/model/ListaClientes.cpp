#include "../../headers/model/gestorClientes.h"
#include "../../headers/model/Cliente.h"
#include "../../headers/lists/ListaClientes.h"

#include <iomanip>
#include <vector>
#include <iostream>


using namespace std;

    void printLista (const std::vector<loja::cliente>& lista) {

        cout << left
            << setw(40) << "Nome"
            << setw(9) << "NIF"
            << setw(30) << "Email"
            << endl;

        cout << string(85, '-') << endl;

        for (int i = 0; i < clientList.size(); i++) {
            cout << left
                << setw(40) << lista[i].getNome()
                << setw(9) << lista[i].getNIF()
                << setw(30) << lista[i].getEmail()
                << endl;

        }
    }