#ifndef FSOFT2026_1DC_5_CLIENTE_H
#define FSOFT2026_1DC_5_CLIENTE_H

namespace loja {

    class cliente {

        private:
            int NIF;    //funciona como Client ID
            std::string nomeCliente;
            std::string email;

        public:
            cliente::cliente(std::string nome, std::string email, int NIF);
            std::string cliente::getNome();
            std::string cliente::getEmail();
            int cliente::getNIF();
    };
};

#endif