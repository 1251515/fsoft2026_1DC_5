#pragma once

#include "Produto.h"
#include <vector>
#include <string>


namespace loja::gestor {

    class gestor_produtos {
        private:
            std::vector<produto> gameList;
            static int nextID;

        public:
            void addProduto(const std::string& nome,
                            const std::string& plataforma,
                            float preco,
                            int stock);

            void removeProduto(const int idProd);
            static int gerarID();
            void setStock(const int idProd, int newstock);
            void setPreco(const int idProd, int novopreco);
            std::vector<produto> getProdutos() const;
            produto* procurarProdutoID(int ID);
            produto* procurarProdutoNome (const std::string& nome, const std::string &plataforma);
    };

}