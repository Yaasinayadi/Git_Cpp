#include <iostream>
#include <vector>
using namespace std;

class BaRessour {
    protected:
        int Id;
        string Titre;
        string Auteur;
        int Annee;
    public:
        BaRessour():Id(0), Titre(""), Auteur(""), Annee(0){}
        BaRessour(int id, string titre, string auteur, int annee) {
            Id = id;
            Titre = titre;
            Auteur = auteur;
            Annee = annee;
        }
        virtual void afficheInfos() {
            cout << "Id: " << Id << endl;
            cout << "Titre: " << Titre << endl;
            cout << "Auteur: " << Auteur << endl;
            cout << "Annee: " << Annee << endl;
        };
        virtual void Telecharger() = 0;
        string getTitre() {
            return Titre;
        }
        int getAnnee() {
            return Annee;
        }
        string getAuteur() {
            return Auteur;
        }
        bool operator==(const BaRessour& br) {
            return (this->Id == br.Id);
        }
};
class Telechargeable {
    public:
        virtual void telechargement() = 0;
        virtual void afficherMessage() = 0;
};
class Livre: public BaRessour, public Telechargeable {
    private:
        int nombrePages;
    public:
        Livre(int id, string titre, string auteur, int annee, int nbrP): BaRessour(id, titre, auteur ,annee) {
            nombrePages = nbrP;
        }
        Livre(): Telechargeable() {}
        void afficheInfos() override { //override =  method exist in class parent
            cout << "Id: " << Id << endl;
            cout << "Titre: " << Titre << endl;
            cout << "Auteur: " << Auteur << endl;
            cout << "Annee: " << Annee << endl;
            cout << "Nbre Pages: " << nombrePages << endl;
        }
        void Telecharger() override {
            cout << "Telecharger Livre: " << Titre << endl;
        }

        void telechargement() override {
            cout << "Telechargement..." << endl;
        }
        void afficherMessage() override{
            cout << "Telechargeable completed" << endl;
        }
};
class Magazine: public BaRessour, public Telechargeable {
    private:
        int numEdition;
    public:
        Magazine(int id, string titre, string auteur, int annee, int numEd): BaRessour(id, titre, auteur, annee) {
            numEdition = numEd;
        }
        Magazine(): Telechargeable() {}
        void afficheInfos() override {
            cout << "Id: " << Id << endl;
            cout << "Titre: " << Titre << endl;
            cout << "Auteur: " << Auteur << endl;
            cout << "Annee: " << Annee << endl;
            cout << "Num Edition: " << numEdition << endl;
        }
        void Telecharger() override {
            cout << "Telecharger Magazin: " << Titre << endl;
        } 
        void telechargement() override {
            cout << "Telechargement..." << endl;
        }
        void afficherMessage() override{
            cout << "Telechargeable completed" << endl;
        }
};
class Video: public BaRessour, public Telechargeable {
    private:
        string duree;
    public:
        Video(int id, string titre, string auteur, int annee, string dur): BaRessour(id, titre, auteur, annee) {
            duree = dur;
        }
        Video(): Telechargeable() {}
        void afficheInfos() override {
            cout << "Id: " << Id << endl;
            cout << "Titre: " << Titre << endl;
            cout << "Auteur: " << Auteur << endl;
            cout << "Annee: " << Annee << endl;
            cout << "Duree: " << duree << endl;
        }
        void Telecharger() override {
            cout << "Telecharger Video: " << Titre << endl;
        } 
        void telechargement() override {
            cout << "Telechargement..." << endl;
        }
        void afficherMessage() override{
            cout << "Telechargeable completed" << endl;
        }
};
class Mediatheque {
    private:
        vector<BaRessour *> Lr;
    public:
        void ajouterRes(BaRessour* r) {
            Lr.push_back(r);
        }
        void afficher() {
            for(int i =0; i< Lr.size(); i++) {
                Lr[i]->afficheInfos();
            }
        }
        void recherche(string titre) {
            for(auto Tit : Lr) {
                if(Tit->getTitre() == titre)
                    Tit->afficheInfos();
            }
        }
        void recherche(int annee) {
            for(auto ans: Lr) {
                if(ans->getAnnee() == annee)
                    ans->afficheInfos();
            }
        }
        void recherche(string auteur, int annee) {
            for(auto var: Lr) {
                if(var->getAuteur() == auteur && var->getAnnee() == annee) {
                    var->afficheInfos();
                }
            }
        }
    
};
int main() 
{
    Livre lv(1, "L'Etranger", "Albert Camus", 1942, 200);
    Magazine mg(2, "Science & Vie", "Equipe Rédaction", 2023, 178);
    Video vd(3, "Titanic", "James Cameron", 1997, "2h15");
    //-----Afficher info-----//
    lv.afficheInfos();
    mg.afficheInfos();
    vd.afficheInfos();
    //---Telecharger---//

    //->Livre
    cout << "Livre: \n";
    lv.Telecharger();
    lv.telechargement();
    lv.afficherMessage();
    
    
    //->Magazin
    cout << "Magazin: \n";
    mg.Telecharger();
    mg.telechargement();
    mg.afficherMessage();

    //->Video
    cout << "Video: \n";
    vd.Telecharger();
    vd.telechargement();
    vd.afficherMessage();

    if(lv.operator==(vd))
        cout << "Le meme ID" << endl;
    else
        cout << "ID different" << endl;
    
        Mediatheque media;

        media.ajouterRes(&lv);
        media.ajouterRes(&mg);
        media.ajouterRes(&vd);

        media.afficher();

        media.recherche("Titanic");
        media.recherche(2023);
        media.recherche("Albert Camus", 1942);



    return 0;
}




