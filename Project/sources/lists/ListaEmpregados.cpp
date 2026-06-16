#pragma once


#include "../../headers/model/gestorEmpregados.h"
#include "../../headers/model/Empregado.h"
#include "../../headers/lists/ListaEmpregados.h"

#include <iomanip>
#include <vector>
#include <iostream>



using namespace std;

void printEmpregados (const std::vector<loja::empregado>& lista) {

    cout << left
        << setw(40) << "Nome"
        << setw(7) << "ID"
        << endl;

    cout << string(60, '-') << endl;            //headline

    for (int i = 0; i <= lista.size(); i++) {
        cout << left
            << setw(40) << lista[i].getNome()
            << setw(9) << lista[i].getID()
            << endl;

    }
}