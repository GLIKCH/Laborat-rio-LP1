#include <iostream>
#include "Data.h"
#include <stdio.h>

using namespace std;

int main()
{
    Data d1 = Data(31, 12, 2019);
    Data d2 = Data(17, 10, 2002);
    Data d3 = Data(31,2,2012);

    printf("A data eh : %02d/%02d/%d \n", d1.getDia(), d1.getMes(), d1.getAno());
    printf("A data eh : %02d/%02d/%d \n", d2.getDia(), d2.getMes(), d2.getAno());
    printf("A data eh : %02d/%02d/%d \n", d3.getDia(), d3.getMes(), d3.getAno());

    d1.AvancaDia();
    d2.AvancaDia();
    d3.AvancaDia();

    cout<< "\nDatas avancadas\n"<< endl;

    printf("A data eh : %02d/%02d/%d \n", d1.getDia(), d1.getMes(), d1.getAno());
    printf("A data eh : %02d/%02d/%d \n", d2.getDia(), d2.getMes(), d2.getAno());
    printf("A data eh : %02d/%02d/%d \n", d3.getDia(), d3.getMes(), d3.getAno());

    return 0;
}
