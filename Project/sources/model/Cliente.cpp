#include "Cliente.h"
#include <string>

namespace loja {

	cliente::cliente(std::string nome, std::string email, int NIF) {
		this->nomeCliente = nome;
		this->email = email;
		if (nif >= 100000000) {
			this->NIF = NIF;
		}
	}

	std::string cliente::getNome() {
		return this->nomeCliente;
	}

	std::string cliente::getEmail() {
		return this->email;
	}

	int cliente::getNIF() {
		return this->NIF;
	}
}