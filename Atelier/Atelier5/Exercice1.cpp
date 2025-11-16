#include <iostream>
#include <set>
#include <vector>
#include <list>
using namespace std;

template<typename T, typename U>

bool recherche(const T& v, U debut, U Fin) {
    for(auto it = debut; it != Fin; ++it) {
        if (*it == v) {
            return true;
        }
    }
    return false;
}
template<typename T>
void appel(const T& content) {
    for(auto ct: content) {
        cout << ct << endl;
    }
}
int main()
{
    //---1---//
    set<int> nums;

    for(auto i = 1; i != 101; ++i) {
        nums.insert(i);
        
    }
    //----2----//
    set<char> alpha = {'C', 'C', 'A', 'B', 'E'};
    (recherche('F', alpha.begin(), alpha.end())) ? cout << "Valeur Exist\n" : cout << "Valeur don't exist\n" ;
    //----4----//
    vector<string> s = {"yassine", "ayadi", "good", "bad"};
    list<int> l = {1, 2, 3, 4} ;
    float table[] = {2.5, 3.2, 8.6, 2.1};
    
    cout << "\n-------\n";
    appel(s);
    cout << "\n-------\n";
    appel(l);
    cout << "\n-------\n";
    appel(table);


    return 0;
}