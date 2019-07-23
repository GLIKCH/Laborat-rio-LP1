#include <iostream>
#include "Empregado.h"

using namespace std;

int main()
{
    Empregado e1 = Empregado("Arthur", "Bizerra", 50);
    Empregado e2 = Empregado();

    cout<<"Empregado:"<<e1.getNome()<<" "<<e1.getSobrenome()<<endl;

    cout<<"Salario:"<<e1.getSalario()<<endl;

    cout<<"Empregado:"<<e2.getNome()<<" "<<e2.getSobrenome()<<endl;
    cout<<"Salario:"<<e2.getSalario()<<endl;

    e2.setNome("Arthur");
    e2.setSobrenome("Dionizio");
    e2.setSalario(5000);
    cout<<endl;

    cout<<"Empregado:"<<e2.getNome()<<" "<<e2.getSobrenome()<<endl;
    cout<<"Salario:"<<e2.getSalario()<<endl;
    cout<<"Salario anual:"<<e2.getSalario()*12<<endl;

    cout<<endl;

    cout<<"Empregado:"<<e1.getNome()<<" "<<e1.getSobrenome()<<endl;
    cout<<"Salario:"<<e1.getSalario()<<endl;
    cout<<"Salario anual:"<<e1.getSalario()*12<<endl;
    cout<<endl;

    cout<<"Salario anual de Arthur Dionizio com aumento de 10%:"<<e2.getSalario()*12*1.1<<endl;
    cout<<"Salario anual de Arthur Bizerra com aumento de 10%:"<<e1.getSalario()*12*1.1<<endl;

    return 0;
}
