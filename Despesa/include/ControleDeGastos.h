#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"
#define max_Tamanho 10

class ControleDeGastos
{
    public:
        ControleDeGastos();
        void setDespesa(int pos, Despesa d);
        double calculaTotalDespesa();
        bool existeDespesaTipo(std::string tipo);
        void print();

    protected:

    private:
        Despesa despesas[max_Tamanho];
};

#endif // CONTROLEDEGASTOS_H
