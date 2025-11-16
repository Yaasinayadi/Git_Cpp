#include <iostream>
using namespace std;
class Test{
public:
    static int tableau[] ;
    public :
    static int division(int indice, int diviseur){
        return tableau[indice]/diviseur;
}
};

int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;

int main() {
    int x, y;
    try {
        cout << "Entrez l indice de l entier a diviser: " << endl;
        cin >> x ;
        cout << "Entrez le diviseur: " << endl;
        cin >> y ;
        cout << "Le resultat de la division est: "<< endl;
        int test = Test::division(x,y);
        cout << test << endl;
    }
    catch(...) {
        cout << "Erreur that happend" << endl;
    }
    return 0;
}