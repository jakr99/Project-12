#include <iostream>
#include "funcs.h"
#include "TrianglePrinter.h"

using namespace std;

int main()
{
    TrianglePrinter t;

    for(unsigned int i = 0; i < 7; i++)
    {
        t.newrow();
        for (unsigned int k = 0; k  <= i; k++){
            t.add(combination(i, k));
        }
        cout << factorial(i) << endl;
    }

    t.print();
    cout << " n=5 m=2 " << combination(5,2) << endl;

    return 0;
}
