#include <string>

namespace loja {

    class empregado {       //IDs a começar em 1 são sempre Empregados

        private:
            int idEmpregado;
            std::string nomeEmpregado;
            std::string pwdEmpregado;

        public:
            empregado(std::string nome, int num);
            std::string getNome();
            void gerarID(int numEmpregado);
            int getID();
            void setPWD(std::string pwd);
    };
};
