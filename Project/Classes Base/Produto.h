#ifndef FSOFT2026_1DC_5_PRODUTO_H
#define FSOFT2026_1DC_5_PRODUTO_H

namespace loja {

    class produto {		//IDs a começar em 3 são sempre Produtos

        private:
            int idProd;
            int stock;
            std::string plataforma;
            std::string nomeProd;
            float preco;

        public:
            produto(std::string plataforma, std::string nome);
			std::string produto::getPlataforma();
			std::string produto::getNome()
			void setStock(int stock);
			int getStock();
			void setPreco(float preco);
			float getPreco();
			void gerarID(int numProduto);
			int getID();
    };
};

#endif