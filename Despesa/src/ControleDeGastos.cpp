#include "ControleDeGastos.h"
#include <iostream>
#include "Despesa.h"

using namespace std;

ControleDeGastos::ControleDeGastos()
{

}

void ControleDeGastos::setDespesa(int pos, Despesa d)
{
    despesas[pos] = d;
}

bool ControleDeGastos::existeDespesaTipo(std::string tipo)
{
    for(int i=0; i<max_Tamanho ;i++){
        if(despesas[i].getTipo()== tipo)
            return true;
    }

    return 0;
}

double ControleDeGastos::calculaTotalDespesa()
{
    double soma = 0;

    for(int i = 0;i<max_Tamanho; i++){
        soma += despesas[i].getValor();
    }
    return soma;
}

void ControleDeGastos::print()
{
    for(int i=0;i<max_Tamanho;i++){
        if(despesas[i].getValor()>0){
            cout<<"Indice: "<<i<<"\n"<<"Valor: "<<despesas[i].getValor()<<"\n"<<
            "Tipo: "<<despesas[i].getTipo()<<endl;
            cout<<endl;
        }
    }


}


