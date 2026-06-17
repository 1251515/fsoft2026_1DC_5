#pragma once

#include "../../headers/controller/Controller.h"
#include "../../Mock/Mockdata.h"
#include <iostream>
#include <string>
#include <limits>
using namespace loja::controller;
using namespace loja::view;
void loja::controller::Controller::carregarMockdata() {

    Mock::load(
        gestorClientes,
        gestorEmpregados,
        gestorProdutos,
        gestorVendas
    );
}
void Controller::exec() {
    carregarMockdata();
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

            case 2:
                mostrarComprasCliente();
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
        std::cin.ignore(
    std::numeric_limits<std::streamsize>::max(),
    '\n'
);

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

void Controller::listagemClientes() const {

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

void Controller::listagemEmpregados() const {

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

void Controller::listagemProdutos() const {

    ProdutoView::printProdutos(gestorProdutos.getProdutos());
}

void Controller::procurarProduto() {
    try {

        int ID = ProdutoView::pedirIDproduto();

        produto* produtoEncontrado = gestorProdutos.procurarProdutoID(ID);
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

void Controller::criarVenda() {

    try {

        int IDempregado =
            EmpregadoView::pedirIDempregado();

        int IDcliente =
            clienteView::pedirNIF();

        venda vendaAtual (IDcliente, IDempregado);

        while (true) {
            std::string nomeProduto =
                ProdutoView::pedirNomeProduto();

            std::string plataforma =
                ProdutoView::pedirPlataforma();


            produto* produtoEncontrado =
                gestorProdutos.procurarProdutoNome(nomeProduto, plataforma);


            int quantidade =
                VendaView::pedirQuantidade();


            itemVenda item(produtoEncontrado->getID(),
                    quantidade,
                    produtoEncontrado->getPreco());

            vendaAtual.adicionarItem(item);



            if (!VendaView::adicionarMaisProdutos()) {
                break;
            }
        }

        float total = vendaAtual.getTotal();

        std::cout << "Total da compra: "
                  << total
                  << "€\n";

        vendaAtual.setTotal(total);


        TipoPagamento tipoPagamento = VendaView::pedirTipoPagamento();

        vendaAtual.setPagamento(tipoPagamento);

        if (vendaAtual.getPagamento().getEstado() == EstadoPagamento::RECUSADO) {
            View::erro("Pagamento Recusado");
            return;
        }


        if (vendaAtual.getPagamento().getEstado() == EstadoPagamento::PENDENTE) {
            while (true) {
                switch (VendaView::menuGestaoPagamento()) {
                    case 1:
                        vendaAtual.setEstado(EstadoPagamento::APROVADO);
                        break;

                    case 2:
                        vendaAtual.setEstado(EstadoPagamento::RECUSADO);
                        return;

                    default:
                        break;
                }
            }
        }


        gestorVendas.addVenda(vendaAtual);
        View::sucesso("Compra Efetuada");
    }
    catch (exceptions::LojaException& e) {
        View::erro(e.what());
    }
}


void Controller::mostrarComprasCliente() const {

    try {

        int nif =
            clienteView::pedirNIF();

        std::vector<venda> vendas =
            gestorVendas.getVendasPorCliente(nif);

        VendaView::mostrarVendas(vendas);
    }
    catch (const exceptions::LojaException& e) {

        View::erro(e.what());
    }
}
