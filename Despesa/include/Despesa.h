#ifndef DESPESA_H
#define DESPESA_H
#include <iostream>

class Despesa
{
    public:
        Despesa();
        Despesa(double valor, std::string tipo);
        double getValor();
        std::string getTipo();
        void setValor(double valor);
        void setTipo (std::string tipo);

    protected:

    private:
        double valor;
        std::string tipo;
};

#endif // DESPESA_H
