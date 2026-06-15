//
// Created by bruno on 15/06/2026.
//

#ifndef FSOFT2026_1DC_5_VENDACONTROLLER_H
#define FSOFT2026_1DC_5_VENDACONTROLLER_H
#pragma once

#include "../views/VendaView.h"
#include "../lists/ListaVendas.h"

namespace loja {

    class VendaController {

    private:

        VendaView view;
        ListaVendas* lista;

    public:

        VendaController(ListaVendas* lista);

        void criarVenda();

        void estadoVenda();

        void alterarVenda();
    };

}
#endif //FSOFT2026_1DC_5_VENDACONTROLLER_H
