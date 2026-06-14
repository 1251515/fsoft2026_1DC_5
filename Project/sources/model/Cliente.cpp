#include "../../headers/model/Cliente.h"
#include <string>

using namespace loja;

namespace loja {

	cliente::cliente(const std::string& nome, const std::string& email, const int& NIF) {
		this->nomeCliente = nome;
		this->email = email;
		this->NIF = NIF;
	}

	std::string cliente::getNome() const{
		return this->nomeCliente;
	}

	std::string cliente::getEmail() const{
		return this->email;
	}

	int cliente::getNIF() const{
		return this->NIF;
	}
}