#pragma once

#include <exception>
#include <string>

namespace loja::exceptions {


    class LojaException : public std::exception {

        protected:
            std::string mensagem;

        public:
            explicit LojaException(const std::string& msg)
                : mensagem(msg) {}

            const char* what() const noexcept override {
                return mensagem.c_str();
            }
    };


    class DadosDuplicadosException : public LojaException {

        public:
            explicit DadosDuplicadosException(const std::string& msg)
                : LojaException(msg) {}
    };


    class DadosNaoEncontradosException : public LojaException {

        public:
            explicit DadosNaoEncontradosException(const std::string& msg)
                : LojaException(msg) {}
    };


    class DadosInvalidosException : public LojaException {

        public:
            explicit DadosInvalidosException(const std::string& msg)
                : LojaException(msg) {}
    };


    class StockInsuficienteException : public LojaException {

        public:
            explicit StockInsuficienteException(const std::string& msg)
                : LojaException(msg) {}
    };

}



