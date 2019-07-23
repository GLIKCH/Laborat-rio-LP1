#include "Despesa.h"

Despesa::Despesa()
{
    valor=0;
    tipo="Indefinido";
}

Despesa::Despesa(double valor, std::string tipo)
{
   this->valor = valor;
   this->tipo=tipo;

}

double Despesa::getValor()
{
    return valor;
}

std::string Despesa::getTipo()
{
    return tipo;
}

void Despesa::setValor(double valor)
{
    this->valor = valor;
}

void Despesa::setTipo(std::string tipo)
{
    this->tipo=tipo;
}
