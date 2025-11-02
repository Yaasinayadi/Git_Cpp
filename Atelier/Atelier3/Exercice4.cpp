#include <iostream>
using namespace std;

class Client {
    private:
        int Id;
        string Nom;
        string Prenom;
    public:
        Client() {
            Id = 0;
            Nom = "";
            Prenom = "";
        }
        Client(int id, string nom, string prenom) {
            Id = id;
            Nom = nom;
            Prenom = prenom;
        }
        Client(const Client& origin){
            Id = origin.Id;
            Nom = origin.Nom;
            Prenom = origin.Prenom;
        }
        ~Client(){
        }
        void afficher() {
            cout << "Id_cli: " << Id << endl; 
            cout << "Nom_cli: " << Nom << endl;
            cout << "Prenom_cli: " << Prenom << endl;
        }
};
class Compte {
    private:
        int numCom;
        float solde;
        Client *cli;
        static int nbrTotalC; // calcule nbre compte sans cree
    public:
        Compte() {
            numCom = 0;
            solde = 0.0;
            cli = nullptr;
            nbrTotalC ++;
        }
        Compte(int num, float sol,const Client& cl){
            numCom = num;
            solde = sol;
            cli = new Client(cl);
            nbrTotalC ++;
        }
        Compte(const Compte& Cm){
            numCom = Cm.numCom;
            solde = Cm.solde;
            cli = new Client(*Cm.cli);
            nbrTotalC ++;
        }
        ~Compte() {
            delete cli;
            cli = nullptr;
            nbrTotalC --;
        }
        void affichageCm() {
            cout << "NumeroCm: " << numCom << endl;
            cout << "Solde: " << solde << endl;
            cout << "Client: \n" ;
            cli->afficher() ;
        }
        float getSold(){
            return solde; 
        }
        static void affiNbrTotal() {
            cout << "Nbre total des comptes: " << nbrTotalC << endl; 
        };

};
int Compte::nbrTotalC = 0;
inline float CalculInteret(float solde, float taux){
    return solde + ((solde * taux) /100);
} //utilise inline code court, simple ,insere directement le code de fonction

int main()
{
    //---Client---//
    Client Cl1(1, "ayadi", "yassine");
    Client Cl2(2, "benzema", "karim");
    Client Cl3(3, "masoudi", "Abdlkader");
    
    //---Compte---//
    Compte Cm1(001, 2000.0, Cl1);
    Compte Cm2(002, 8102.0, Cl2);
    Compte Cm3(003, 5478.0, Cl3);

    Compte::affiNbrTotal();

    //---CP_Compte---//

    Compte Cm4(Cm1);
    Compte Cm5(Cm2);

    Compte::affiNbrTotal();

    //------//

    Compte *Cm = new Compte(006, 8210.0, Cl3);
    Compte::affiNbrTotal();

    delete Cm;
    Compte::affiNbrTotal();

    //---Interets---//

    float NewSolde = CalculInteret(Cm2.getSold(), 4);
    Cm2.affichageCm();
    cout << "New Solde: " << NewSolde << endl;
    
    return 0;
}