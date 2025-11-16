#include <iostream>
using namespace std;


class vect{ 
protected : // en prévision d'une éventuelle classe dérivée
    int nelem ; // nombre d'éléments
    int * adr ; // adresse zone dynamique contenant les éléments
    public :
        vect(int nbrE)  {
            nelem = nbrE ;
            adr = new int[nelem];
        }; // constructeur
        vect(const vect& cp) {
            nelem = cp.nelem;
            adr = new int[nelem];

            //cp values in this adr
            for(int i=0; i <nelem; i++) {
                adr[i] = cp.adr[i];
            }
        }
        ~vect() {
            delete[] adr;
            adr = nullptr;
        } ; // destructeur
        int & operator[](int i) {
            return adr[i];
        } ; // accès à un élément par son "indice"
} ;
class vectok: public vect {
public:
    vectok(int n): vect(n){}
    
    //copier constructor
    vectok(const vectok& v): vect(v){}
   
    //asseignment operator
    vectok& operator=(const vectok& v) {
        if(this != &v){
            delete[] adr;
            nelem = v.nelem;
            adr = new int[nelem];

            for(int i=0; i < nelem; i++) {
                adr[i] = v.adr[i];
            }
        }
        return *this;
    };
    int taille() {
        return nelem;
    }
};
int main() 
{   
    vectok vec(5);

    for(int i=0; i< vec.taille(); i++) {
        vec[i] = i;
    }

    //cp 
    vectok vec1(vec);
    //asseigment 
    vectok vec2(5);
    vec2 = vec1; // <--

    //affiche cp 
    for(int i = 0; i<vec1.taille(); i++) {
        cout << vec1[i] << " " ;
    }
    cout << "\n----\n";
    // affiche ass
    for(int i=0; i < vec2.taille(); i++) {
        cout << vec2[i] << " ";
    }


    return 0;
}

