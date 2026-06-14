#pragma once


#include <string>

namespace loja {

    class cliente {

        private:
            int NIF;    //funciona como Client ID
            std::string nomeCliente;
            std::string email;

        public:
            cliente(std::string nome, std::string email, int NIF);
            std::string getNome() const;
            std::string getEmail() const;
            int getNIF() const;
    };
};

