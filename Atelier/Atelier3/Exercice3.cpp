#include <iostream>
using namespace std;

struct element {
    int data;
    element *next;
};

class Liste {
    private:
        element *tete;
    public:
    Liste(){
        tete = nullptr;
    }
    void ajouterAuDebut( int v){
        element *el = new element();
        el->data = v;
        
        //---
        el->next = tete;
        //---
        tete = el;
    }
    void supprimerAuDebut() {
        if(tete != nullptr) {
            element *p = tete;
            tete = tete->next;
            delete p;
        }
    }
    void AfficherElement() {
        element *temp = tete;
        while(temp != nullptr) {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
    ~Liste() {
       while (tete != nullptr){
            element *p = tete;
            tete = tete->next;
            delete p;
       }
    }
};

int main()
{
    Liste ls ;
    ls.ajouterAuDebut( 5);
    ls.ajouterAuDebut(6);
    ls.ajouterAuDebut( 7);
    ls.ajouterAuDebut( 8);
    ls.supprimerAuDebut();
    ls.supprimerAuDebut();
    ls.AfficherElement();

    
    
    return 0;
}