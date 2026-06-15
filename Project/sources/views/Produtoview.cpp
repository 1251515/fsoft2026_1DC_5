
#include "../../headers/views/Produtoview.h"

using namespace std;
using namespace loja;

produto ProdutoView::getProduto() {

    int id;
    string nome;
    float preco;
    int stock;

    cout << "\nID: ";
    cin >> id;

    cin.ignore();

    cout << "Nome: ";
    getline(cin,nome);

    cout << "Preco: ";
    cin >> preco;

    cout << "Stock: ";
    cin >> stock;

    return produto(id,nome,preco,stock);
}

int ProdutoView::getProdutoID() {

    int id;

    cout << "\nID Produto: ";
    cin >> id;

    return id;
}

void ProdutoView::mostrarProduto(const produto& p) {

    cout << "\nID: " << p.getID();
    cout << "\nNome: " << p.getNome();
    cout << "\nPreco: " << p.getPreco();
    cout << "\nStock: " << p.getStock() << endl;
}

void ProdutoView::mostrarStock(
        const vector<produto>& produtos) {

    for(const auto& p : produtos){

        cout << p.getNome()
             << " -> "
             << p.getStock()
             << endl;
    }
}