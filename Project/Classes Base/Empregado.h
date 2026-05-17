namespace loja {

    class empregado {       //IDs a começar em 1 são sempre Empregados

        private:
            int idEmpregado;
            std::string nomeEmpregado;
            std::string pwdEmpregado;

        public:
            empregado(std::string nomeEmpregado);
            std::string empregado::getNome();
            void empregado::gerarID(int numEmpregado);
            int empregado::getID()
            void empregado::setPWD(std::string pwd)
    };
};
