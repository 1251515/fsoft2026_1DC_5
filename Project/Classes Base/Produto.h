#ifndef FSOFT2026_1DC_5_PRODUTO_H
#define FSOFT2026_1DC_5_PRODUTO_H

namespace loja {

    class produto {

        private:
            int idprod;
            int stock;
            std::string tipo;
            std::string nome;
            float preco;

        public:
            produto(std::string tipo, std::string nome);
			void setStock(int stock);
			int getStock();
			void setPreco(float preco);
			float getPreco();

    };
}

#endif