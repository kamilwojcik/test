#include <iostream>
#include "klasa1.h"


//a tu kamil-alt dodaje komentarz

using namespace std;

int main(int argc, char **argv)
{
    klasa1 inst1;
    inst1.a=10;
    cout<<"Do skladnika a jest dostep z zewnatrz: "<<inst1.a<<endl;
    inst1.Print();
    
    klasa1 inst2;
    inst2.Print();
    
    cout<<"zmiana w anotherbranch (kamil)"<<endl;
    return 0;
}
