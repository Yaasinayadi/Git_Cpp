#include <iostream>
#include <vector>
using namespace std;

class Client {
    private:
        int idClient;
        string CIN;
        string Nom;
    public:
        Client():idClient(0), CIN(""), Nom(""){}
        Client(int id, string cin, string nom) {
            idClient = id;
            CIN = cin;
            Nom = nom;
        }
        void afficherInfos() {
            cout << "Id_client: " << idClient << endl;
            cout << "Cin: " << CIN << endl;
            cout << "Nom: " << Nom << endl;
        }
        friend class Banque;
};
class compteBancaire {
    private:
        int numCompte;
        double solde;
        int codeSecret;
        Client *cli;
    public:
        compteBancaire(int numC, double montant, int codeS,Client* prop){
            numCompte = numC;
            solde = montant;
            codeSecret = codeS;
            cli =  prop;
        }
        void deposer(double montant) {
            solde += montant;
        }
        bool retirer(double montant, int code) {
            if(code == codeSecret) {
                if (solde >= montant) {
                    solde -= montant;
                    cout << "tirement reussite" << endl;
                    return true;
                }
                else {
                    cout << "Solde Insuffissant" << endl;
                    return false;
                }
            }
            else {
                cout << "Code secret incorrect" << endl;
                return false;
            }
        }
        friend class AgentBancaire;
        friend class Banque;
};
class AgentBancaire {
    private:
        int idAgent;
        string nomAgent;
    public:
        void ConsulterCodeSecret(compteBancaire& cd) {
            cout << "Code secret: " << cd.codeSecret << endl;
        }
        void transferer(compteBancaire& CbEn, compteBancaire& CbRec, double montant) {
            if(CbEn.retirer(montant, CbEn.codeSecret) == true) {
                CbRec.deposer(montant);
            }
            else {
                cout << "Erreur..." << endl;
            }
    }
};
class Banque {
    private:
        vector<compteBancaire *> listeCb;
    public:
        void ajouterCompte(compteBancaire *cb) {
            listeCb.push_back( cb);
        }
        void afficherCompter() {
            for(auto com: listeCb) {
                cout << "Num Compte: " << com->numCompte << endl;
                cout << "Solde: " << com->solde << endl;
                cout << "codeSecret: " << com->codeSecret << endl;
                if(com->cli != nullptr) {
                    com->cli->afficherInfos();
                }
                cout << "---------\n";
            }
        }
        void auditInterne() {
            for(auto com: listeCb) {
                cout << "Num Compte: " << com->numCompte << endl;
                cout << "Solde: " << com->solde << endl;
                cout << "codeSecret: " << com->codeSecret << endl;
                if(com->cli != nullptr) {
                    cout << "Client: " << com->cli->Nom << endl;
                    cout << "Cin: " << com->cli->CIN << endl;
                    cout << "Id_cli: " << com->cli->idClient << endl;
                    cout << "Num compte: " << com->numCompte << endl;
                    cout << "CodeSecure: " << com->codeSecret << endl;
                    cout << "Solde: " << com->solde << endl; 
                }
                cout << "---------\n";
            }
        }
};


int main() 
{
    Client cl1(1, "k15402", "Ayadi");
    Client cl2(2, "K47851", "Benjaloune");
    Client cl3(3, "k45718", "Kharbouch");

    compteBancaire Cm1(123, 1512.50, 1425, &cl1);
    compteBancaire Cm2(124, 5471.50, 4781, &cl2);
    compteBancaire Cm3(125, 1800.00, 1420, &cl3);

    //cas normale
    Cm1.deposer(1800.50);
    Cm1.retirer(1500, 1425);
    cout << "\n------\n";
    
    //mauvais code
    Cm2.deposer(500.0);
    Cm2.retirer(600,0000);
    cout << "\n------\n";
    
    //depase solde banquaire
    
    Cm3.deposer(100);
    Cm3.retirer(2500, 1420);
    cout << "\n------\n";

    // tansferer money from cm1 to cm2
    AgentBancaire Ab;
    Ab.ConsulterCodeSecret(Cm2);
    Ab.transferer(Cm1, Cm2, 1200);
    cout << "\n------\n";


    Banque Lis;
    Lis.ajouterCompte(&Cm1);
    Lis.ajouterCompte(&Cm2);
    Lis.ajouterCompte(&Cm3);

    //-----AfficheInfo
    Lis.afficherCompter();

    //Affiche details Internes comptes
    Lis.auditInterne();




    return 0;
}