#include <iostream>
using namespace std;

class Voiture {
private:
        string marque;
        string modele;
        int annee;
        float kilometrage;
        float vitesse ;
public:
    Voiture(){
        marque = "";
        modele = "";
        annee = 0;
        kilometrage = 0.0;
        vitesse = 0.0;
    }
    Voiture(string marq, string mode, int ans, float kilo, float vite):
    marque(marq), modele(mode), annee(ans), kilometrage(kilo),vitesse(vite){
        // marque = marq;
        // modele = mode;
        // annee = ans;
        // kilometrage = kilo;
        // vitesse = vite;
    }
    void accelerer(float valeur){
        vitesse  += valeur;
    }
    void freiner(float valeur){
        if(vitesse - valeur > 0)
            vitesse -=  valeur;
        else
            vitesse = 0;
    }
    void avancer(float distance) {
        kilometrage += distance;
    }
    void GetInfo() const{
        cout << "Marque: " << marque << endl;
        cout << "Modele: " << modele << endl;
        cout << "Annee: " << annee << endl;
        cout << "Kilometrage: " << kilometrage << endl;
        cout << "vitesse: " << vitesse << endl;
    }
    ~Voiture(){
        cout << "La voiture est detruite" << endl;
    }
};
int main()
{
    Voiture vt("Mercedes","E-class", 1996, 115102, 220) ;
    vt.accelerer(50);
    vt.avancer(50);
    vt.GetInfo();
    vt.freiner(280);
    vt.GetInfo();
    

    return 0;
}