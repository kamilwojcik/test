#include "klasa1.h"
#include <iostream>

using namespace std;

int klasa1::licznik=0;

klasa1::klasa1()
{
    a=100;
    licznik++;
}

void klasa1::Print()
{
    cout<<"Ta instancja ma zmienna a="<<a<<endl;
    cout<<"To jest "<<licznik<<" instancja tej klasy"<<endl;
}



