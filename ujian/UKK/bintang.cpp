#include <iostream>
using namespace std;

int  main (){
    float a,b;
    for (a=10; a>=1; a--)
    {
        for (b=1; b<=a;b++)
            cout <<"*"<< " ";
            cout <<endl;
    }

    return 0;
}
