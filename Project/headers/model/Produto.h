#pragma once

#pragma once

#include <string>

namespace loja {

	class produto {    // IDs a começar em 3 são sempre Produtos

	private:

		std::string plataforma;
		std::string nomeProd;
		int idProd;


	public:

		produto(const std::string& nome,
				const std::string& plataforma,
				const int& id,
				const float& preco,
				const int& stock);

		float preco;
		int stock;
		std::string getPlataforma() const;
		std::string getNome() const;
		int getStock() const;
		float getPreco() const;
		int getID() const;

	};
}

