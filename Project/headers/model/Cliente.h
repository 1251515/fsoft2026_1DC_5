#pragma once


#include <string>

namespace loja {

    class cliente {

        private:
            int NIF;    //funciona como Client ID
            std::string nomeCliente;
            std::string email;

        public:
            cliente(const std::string& nome, const std::string& email, const int& NIF);
            std::string getNome() const;
            std::string getEmail() const;
            int getNIF() const;
    };
};

