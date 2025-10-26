#include <iostream>
using namespace std;

void function() {
    static int nbre = 0;
    nbre ++;
    cout << "Appel numero: " << nbre << endl;
}
int main()
{
    function();
    function();
    function();
    function();
    


    return 0;
}