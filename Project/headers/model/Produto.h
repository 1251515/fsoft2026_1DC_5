#pragma once

#include <string>

namespace loja {

    class produto {		//IDs a começar em 3 são sempre Produtos

        private:
            int idProd;
            int stock;
            std::string plataforma;
            std::string nomeProd;
            float preco;

        public:
            produto(std::string plataforma, std::string nome, int num);
			std::string getPlataforma();
			std::string getNome();
			void setStock(int stock);
			int getStock();
			void setPreco(float preco);
			float getPreco();
			void gerarID(int numProduto);
			int getID();
    };
};

