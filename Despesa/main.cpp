#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"

using namespace std;

int main()
{
    ControleDeGastos c = ControleDeGastos();
    Despesa d = Despesa(24.5, "Lanche");
    c.setDespesa(0 , d);
    d= Despesa(12500, "curso de coach");
    c.setDespesa(1, d);

    ControleDeGastos c2 = ControleDeGastos();
    Despesa d2 = Despesa(500, "Revolver");
    c2.setDespesa(2, d2);

    cout<<"Total de despesas: "<< c.calculaTotalDespesa()<<endl;
    cout<<endl;

    c.print();

    cout<<"Total de despesas: "<< c2.calculaTotalDespesa()<<endl;
    cout<<endl;

    c2.print();


    return 0;
}
