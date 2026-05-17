#ifndef FSOFT2026_1DC_5_PRODUTO_H
#define FSOFT2026_1DC_5_PRODUTO_H

namespace loja {

    class produto {

        private:
            int idProd;
            int stock;
            std::string tipo;
            std::string nomeProd;
            float preco;

        public:
            produto(std::string tipo, std::string nome);
			void setStock(int stock);
			int getStock();
			void setPreco(float preco);
			float getPreco();
			void gerarID(int numProduto);
			int getID();		//IDs a começar em 3 são sempre Produtos
    };
}

#endif