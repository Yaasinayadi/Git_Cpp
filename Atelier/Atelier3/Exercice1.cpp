#include <iostream>
#include <vector>
using namespace std;

class Pile {
    private:
        vector<int> P;
    public:
        Pile(){
            P = {};
        }
        void Push(int num) {
            P.push_back(num);
        }
        void Pop() {
            if(P.size() > 0)
                P.pop_back(); 
        }
        void afficher(){
            for(int nbr: P) {
                cout << nbr << " ";
            }
        }

};


int main()
{
    Pile p1;
    Pile p2;
    p1.Push(1);
    p1.Push(2);
    p1.Push(3);
    p1.Push(4);

    p1.afficher();
    cout << "\n--delete--\n";
    p1.Pop();
    p1.Pop();
    p1.afficher();

    //--P2--//
    cout << "\n----\n";
    p2.Push(4);
    p2.Push(6);
    p2.Push(8);
    p2.Push(10);
    p2.afficher();
    cout << "\n--delete--\n";
    p2.Pop();
    p2.afficher();

    return 0;
}