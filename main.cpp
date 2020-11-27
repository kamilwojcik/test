#include <iostream>
#include "klasa1.h"

using namespace std;

int main(int argc, char **argv)
{
    klasa1 inst1;
    inst1.a=10;
    cout<<"Do skladnika a jest dostep z zewnatrz: "<<inst1.a<<endl;
    inst1.Print();
    
    klasa1 inst2;
    inst2.Print();
    
    return 0;
}
