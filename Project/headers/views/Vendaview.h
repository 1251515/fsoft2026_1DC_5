//
// Created by bruno on 15/06/2026.
//

#ifndef FSOFT2026_1DC_5_VENDAVIEW_H
#define FSOFT2026_1DC_5_VENDAVIEW_H
#endif //FSOFT2026_1DC_5_VENDAVIEW_H
#pragma once

#include "../model/Venda.h"
#include <string>
namespace loja {

    class VendaView {

    public:

        venda getVenda();

        int getVendaID();

        void mostrarEstado(const venda& v);
    };

}

