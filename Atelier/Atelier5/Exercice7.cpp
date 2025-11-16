#include <iostream>
using namespace std;

class erreur {
    public:
        int num;
};
class A {
public:
    A(int n) 
    {
        if(n == 1) {
            erreur er;
            er.num = 999;
            throw er;
        }
    }
};
void f()
    {
        try 
        {
            A a(1);
        }
        catch (erreur er)
        //-take 999 cause of throw er, and er.num = 999 declare inside class A a condition of n ==1 and that happen cause of A a(1)
        {
            cout << "Dans f: " << er.num << "\n";
        }
    } 
int main()
{
    {
        try
        {
            f(); 
        }
        //- return nothing function vide and catch dosn't exist at the moment
        catch(erreur er) {
            cout << "Dans main: " << er.num << "\n";
        }
        //-this would return at the end
        cout << "Suite main\n";
        
    } 

    return 0;
    
}