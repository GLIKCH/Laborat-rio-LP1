#include "Data.h"
#include <iostream>;

using namespace std;

Data::Data()
{
    //ctor
}
Data::Data(int dia, int mes, int ano)
{
    setMes(mes);
    setDia(dia);
    this -> ano = ano;

}

void Data::setDia(int dia)
{
    if(dia>31 || dia<1){
        this -> dia = 1;
    }else if(dia>30 && (mes==4||mes==6||mes==9|| mes==11)||dia>29&&mes==2){
        this -> dia = 1;
        mes++;
    }
    else{
        this -> dia = dia;
    }
}

void Data::setMes(int mes)
{
    if(mes>12 || mes< 1){
        this -> mes= 1;
    }else{
        this->mes = mes;
    }
}

void Data::setAno(int ano)
{

}
void Data::AvancaDia()
{
    dia++;

    if(dia >= 31 && mes == 12){
        dia = 1;
        mes = 1;
        ano++;
    }
    if(dia>=31 && ( mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)){
        dia = 1;
        mes++;
    }
    if(dia>=30 && (mes==4||mes==6||mes==9|| mes==11)){
        dia = 1;
        mes++;
    }
    if(dia>=28 && mes == 2){
        dia = 1;
        mes++;
    }

}

int Data::getDia()
{
    return dia;
}

int Data::getMes()
{
    return mes;
}

int Data::getAno()
{
    return ano;
}
