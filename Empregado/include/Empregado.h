#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>


class Empregado
{
    private:
        std::string nome;
        std::string sobrenome;
        double salario;

    public:
        Empregado();
        Empregado(std::string nome, std::string sobrenome, int salario);

        std::string getNome();
        std::string getSobrenome();
        int getSalario();
        void setNome(std::string nome);
        void setSobrenome(std::string sobrenome);
        void setSalario(int salario);

    protected:

};

#endif // EMPREGADO_H
