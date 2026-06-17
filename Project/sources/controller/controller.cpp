#pragma once

#include "../../headers/controller/Controller.h"
#include <iostream>
#include <string>

using namespace loja::controller;
using namespace loja::view;

void Controller::exec() {

    while (true) {
        switch (View::menuPrincipal()) {

            case 1:
                menuClientes();
                break;

            case 2:
                menuEmpregados();
                break;

            case 3:
                menuProdutos();
                break;

            case 4:
                menuVendas();
                break;

            case 0:
                return;

            default:
                break;
        }
    }
}

void Controller::menuClientes() {

    while (true) {
        switch (clienteView::menuClientes()) {

            case 1:
                criarCliente();
                break;

            case 2:
                removerCliente();
                break;

            case 3:
                listagemClientes();
                break;

            case 4:
                procurarCliente();
                break;

            case 0:
                return;

            default:
                break;
        }
    }
}

void Controller::menuEmpregados() {
    while (true) {
        switch (EmpregadoView::menuEmpregados()) {

            case 1:
                criarEmpregado();
                break;

            case 2:
                removerEmpregado();
                break;

            case 3:
                listagemEmpregados();
                break;

            case 4:
                procurarEmpregado();
                break;

            case 0:
                return;

            default:
                break;
        }
    }
}

void Controller::menuProdutos() {
    while (true) {
        switch (ProdutoView::menuProdutos()) {

            case 1:
                criarProduto();
                break;

            case 2:
                removerProduto();
                break;

            case 3:
                listagemProdutos();
                break;

            case 4:
                procurarProduto();
                break;

            case 5:
                setPrecoProduto();
                break;

            case 6:
                setStockProduto();
                break;

            case 0:
                return;

            default:
                break;
        }
    }
}

void Controller::menuVendas() {
    while (true) {
        switch (VendaView::menuVendas()) {

            case 1:
                criarVenda();
                break;

            case 0:
                return;

            default:
                break;
        }
    }
}

void Controller::criarCliente() {

    try {

        std::string nome =
            clienteView::pedirNomeCliente();

        int NIF =
            clienteView::pedirNIF();

        std::string email =
            clienteView::pedirEmail();

        gestorClientes.addCliente(nome, NIF, email);

        View::sucesso("Cliente criado");

    }

    catch (exceptions::LojaException& e) {
        View::erro(e.what());
    }
}

void Controller::removerCliente() {

    try {

        int NIF = clienteView::pedirNIF();

        gestorClientes.removeCliente(NIF);

        View::sucesso("Cliente removido");
    }

    catch (exceptions::LojaException& e) {
        View::erro(e.what());
    }
}

void Controller::listagemClientes() {

    clienteView::printClientes(gestorClientes.getClientes());
}

void Controller::procurarCliente() {
    try {

        int NIF = clienteView::pedirNIF();

        cliente* clienteEncontrado = gestorClientes.procurarcliente(NIF);
        clienteView::detalhesCliente(*clienteEncontrado);

    }
    catch (exceptions::LojaException& e) {
        View::erro(e.what());
    }
}


void Controller::criarEmpregado() {

    try {

        std::string nome =
            EmpregadoView::pedirNomeEmpregado();


        gestorEmpregados.addEmpregado(nome);

        View::sucesso("Empregado criado");

    }

    catch (exceptions::LojaException& e) {
        View::erro(e.what());
    }
}

void Controller::removerEmpregado() {

    try {

        int ID = EmpregadoView::pedirIDempregado();

        gestorEmpregados.removeEmpregado(ID);

        View::sucesso("Empregado removido");
    }

    catch (exceptions::LojaException& e) {
        View::erro(e.what());
    }
}

void Controller::listagemEmpregados() {

    EmpregadoView::printEmpregados(gestorEmpregados.getEmpregados());
}

void Controller::procurarEmpregado() {
    try {

        int ID = EmpregadoView::pedirIDempregado();

        empregado* empregadoEncontrado = gestorEmpregados.procurarEmpregado(ID);
        EmpregadoView::detalhesEmpregado(*empregadoEncontrado);

    }
    catch (exceptions::LojaException& e) {
        View::erro(e.what());
    }
}

void Controller::criarProduto() {

    try {

        std::string nome =
            ProdutoView::pedirNomeProduto();

        std::string plataforma =
            ProdutoView::pedirPlataforma();

        float preco =
            ProdutoView::pedirPreco();

        int stock =
            ProdutoView::pedirStock();


        gestorProdutos.addProduto(nome, plataforma, preco, stock);

        View::sucesso("Produto criado");

    }

    catch (exceptions::LojaException& e) {
        View::erro(e.what());
    }
}

void Controller::removerProduto() {

    try {

        int ID = ProdutoView::pedirIDproduto();

        gestorProdutos.removeProduto(ID);

        View::sucesso("Produto removido");
    }

    catch (exceptions::LojaException& e) {
        View::erro(e.what());
    }
}

void Controller::listagemProdutos() {

    ProdutoView::printProdutos(gestorProdutos.getProdutos());
}

void Controller::procurarProduto() {
    try {

        int ID = ProdutoView::pedirIDproduto();

        produto* produtoEncontrado = gestorProdutos.procurarproduto(ID);
        ProdutoView::detalhesProduto(*produtoEncontrado);

    }
    catch (exceptions::LojaException& e) {
        View::erro(e.what());
    }
}

void Controller::setStockProduto() {

    try {

        int ID =
            ProdutoView::pedirIDproduto();

        int stock =
            ProdutoView::pedirStock();

        gestorProdutos.setStock(ID, stock);
    }
    catch (exceptions::LojaException& e) {
        View::erro(e.what());
    }
}

void Controller::setPrecoProduto() {

    try {

        int ID =
            ProdutoView::pedirIDproduto();

        float preco =
            ProdutoView::pedirPreco();

        gestorProdutos.setStock(ID, preco);
    }
    catch (exceptions::LojaException& e) {
        View::erro(e.what());
    }
}