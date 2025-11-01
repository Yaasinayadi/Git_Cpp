#include <iostream>
using namespace std;

class Fichier {
    private:
        char *P;
        int longeur;
    public:
        Fichier() {
            P = nullptr;
            longeur = 0;
        }
        void Creation(int l){
            longeur = l ;
            P = new char[longeur];
        }
        void Remplit() {
            if(P == nullptr) return ;
            for(int i =0; i <longeur; i++){
                P[i] = 'C';
            }
        }
        void Affiche() {
            if(P == nullptr) return;
            for(int i = 0; i<longeur; i++){
                cout << "P[" <<i<<"]= " << P[i] << endl;
            }
        }
        ~Fichier() {
            delete[] P;
            P = nullptr;
        }
};

int main()
{
    Fichier *f = new Fichier();
    f->Creation(5);
    f->Remplit();
    f->Affiche();

    delete f;
    f = nullptr;
    return 0;
}