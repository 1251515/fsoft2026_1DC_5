//
// Created by bruno on 15/06/2026.
//


#ifndef FSOFT2026_1DC_5_EXCEPTIONS_H
#define FSOFT2026_1DC_5_EXCEPTIONS_H
#pragma once

#include <string>
#include <stdexcept>

namespace loja {

    // DadosDuplicadosException
    class DadosDuplicadosException : public std::exception {
    private:
        std::string mensagem;
    public:
        explicit DadosDuplicadosException(const std::string& msg)
            : mensagem(msg) {}
        const char* what() const noexcept override {
            return mensagem.c_str();
        }
    };

    //DadosNaoEncontradosException
    class DadosNaoEncontradosException : public std::exception {
    private:
        std::string mensagem;
    public:
        explicit DadosNaoEncontradosException(const std::string& msg)
            : mensagem(msg) {}
        const char* what() const noexcept override {
            return mensagem.c_str();
        }
    };

    // DadosInvalidosException
    class DadosInvalidosException : public std::exception {
    private:
        std::string mensagem;
    public:
        explicit DadosInvalidosException(const std::string& msg)
            : mensagem(msg) {}
        const char* what() const noexcept override {
            return mensagem.c_str();
        }
    };

    // StockInsuficienteException
    class StockInsuficienteException : public std::exception {
    private:
        std::string mensagem;
    public:
        explicit StockInsuficienteException(const std::string& msg)
            : mensagem(msg) {}
        const char* what() const noexcept override {
            return mensagem.c_str();
        }
    };

}
#endif //FSOFT2026_1DC_5_EXCEPTIONS_H
