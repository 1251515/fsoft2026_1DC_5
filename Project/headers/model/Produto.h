#pragma once

#pragma once

#include <string>

namespace loja {

	class produto {    // IDs a começar em 3 são sempre Produtos

	private:
		int idProd;
		int stock;
		std::string plataforma;
		std::string nomeProd;
		float preco;

	public:

		produto(std::string plataforma, std::string nome, int num);


		produto(int id, std::string nome, float preco, int stock);


		std::string getPlataforma() const;
		std::string getNome() const;
		int getStock() const;
		float getPreco() const;
		int getID() const;


		void setStock(int stock);
		void setPreco(float preco);
		void gerarID(int numProduto);
	};
}

