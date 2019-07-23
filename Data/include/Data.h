#ifndef DATA_H
#define DATA_H
#include <string>

class Data{
    public:

        Data();
        Data(int dia, int mes, int ano);

        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);
        int getDia();
        int getMes();
        int getAno();

        void AvancaDia();

    private:
        int dia, mes, ano;
};

#endif
