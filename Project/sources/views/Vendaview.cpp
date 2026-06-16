//
// Created by bruno on 15/06/2026.
//


#include "../../headers/views/VendaView.h"

using namespace loja;
using namespace std;

venda VendaView::getVenda() {

    int idVenda;
    int idCliente;

    cout << "ID Venda: ";
    cin >> idVenda;

    cout << "ID Cliente: ";
    cin >> idCliente;

    vector<int> produtos;

    int id;

    cout << "Introduza IDs produtos (-1 termina): ";

    while(cin >> id && id != -1){

        produtos.push_back(id);
    }

    return venda(
        idVenda,
        idCliente,
        produtos
    );
}

int VendaView::getVendaID() {

    int id;

    cout << "ID Venda: ";
    cin >> id;

    return id;
}

void VendaView::mostrarEstado(
        const venda& v) {

    cout << "\nEstado: "
         << v.getEstado()
         << endl;
}