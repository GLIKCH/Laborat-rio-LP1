#include "Empregado.h"

using namespace std;

Empregado::Empregado()
{
    nome = "fulano";
    sobrenome= "de tal";
    salario= 0;
}

Empregado::Empregado(string nome, string sobrenome, int salario)
{
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);
}

string Empregado::getNome()
{
    return nome;
}

string Empregado::getSobrenome()
{
    return sobrenome;
}

int Empregado::getSalario()
{
    return salario;
}

void Empregado::setNome(string nome)
{
    this ->nome = nome;
}

void Empregado::setSobrenome(string sobrenome)
{
    this ->sobrenome = sobrenome;
}

void Empregado::setSalario(int salario)
{
    if(salario<0){
        this ->salario = 0;
    }else{
        this->salario=salario;
    }
}
