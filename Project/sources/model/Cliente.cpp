#include "../../headers/model/Cliente.h"
#include <string>

namespace loja {

	cliente::cliente(std::string nome, std::string email, int NIF) {
		this->nomeCliente = nome;
		this->email = email;
		if (NIF >= 100000000) {
			this->NIF = NIF;
		} else {
			this -> NIF = 0;
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