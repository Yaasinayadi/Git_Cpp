#include <iostream>
using namespace std;

int main() 
{
    int a = 5;
    int &r = a;
    int *p = &a;
    cout << "Variable: \n";
    cout << a << "--" << r << "--" << *p << endl;
    cout << "Adresses: \n";
    cout << &a << "--" << &r << "--" << p << endl;
    cout << "Valeur pointer: \n";
    cout << *p << endl;

    
   
    return 0;
}