#include "ClassesBase.h"
#include <iostream>
#include <string>

using namespace std;

void listaEmpregados();
void listaProdutos();
void listaClientes();

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

void listaEmpregados() {

    int cmd;

    loja::empregado emp1("Manuel Cardoso", 1);
    emp1.setPWD("Manel123_");

    loja::empregado emp2("Pedro Mota", 2);
    emp2.setPWD("PedroTukTuk");

    loja::empregado emp3("António Coutinho", 3);
    emp3.setPWD("Cubinho762*");

    do {

        cout << emp1.getNome() << " - " << emp1.getID() << endl;
        cout << emp2.getNome() << " - " << emp2.getID() << endl;
        cout << emp3.getNome() << " - " << emp3.getID() << endl;

        cin >> cmd;

    } while (cmd != 0);
}


void listaProdutos() {

    int cmd;

    loja::produto gow1 ("PS2", "God of War", 1);
    loja::produto er ("PS5", "Elden Ring", 2);
    loja::produto re9 ("PC", "Resident Evil: REQUIEM", 3);

    do {

        cout << gow1.getNome() << " - " << gow1.getPlataforma() << " - " << gow1.getPreco() << "€" << " - " << gow1.getStock() << " - " << gow1.getID() << endl;
        cout << er.getNome() << " - " << er.getPlataforma() << " - " << er.getPreco() << "€" << " - " << er.getStock() << " - " << er.getID() << endl;
        cout << re9.getNome() << " - " << re9.getPlataforma() << " - " << re9.getPreco() << "€" << " - " << re9.getStock() << " - " << re9.getID() << endl;

        cin >> cmd;

    } while (cmd != 0);
}

void listaClientes() {

    int cmd;

    loja::cliente cl1("Mário Cotrim", "mariocotrim@gmail.com", 202748464);

    loja::cliente cl2("Ricardo Campos", "richie22camp@gmail.com", 261997367);

    loja::cliente cl3("Samuel Mira", "samthekid@gmail.com", 195678090);

    do {

        cout << cl1.getNome() << " - " << cl1.getEmail() << cl1.getNIF() << endl;
        cout << cl2.getNome() << " - " << cl2.getEmail() << cl2.getNIF() << endl;
        cout << cl3.getNome() << " - " << cl3.getEmail() << cl3.getNIF() << endl;

        cin >> cmd;

    } while (cmd != 0);
}