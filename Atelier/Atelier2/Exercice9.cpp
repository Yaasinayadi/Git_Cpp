#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
class vecteur3d {
    private:
        float x;
        float y;
        float z;
    public:
        vecteur3d(float v1 =0, float v2 =0, float v3 =0):
        x(v1), y(v2), z(v3){}
        void affichage() const{
            cout << "(" << x << ", " << y <<", " << z << ")" << endl;
        }
        vecteur3d Somme(vecteur3d& v2) {
            return  vecteur3d( x + v2.x , y + v2.y , z+ v2.z );
        }
        float ProdScalaire(vecteur3d& v2){
            return (x *v2.x + y *v2.y + z * v2.z); 
        }
        bool Coincide(vecteur3d& v2) const{
            return (x == v2.x && y == v2.y && z == v2.z);
          
        }
        float Norme() const{
            return sqrt(x*x+ y*y +z*z);
        }
        vecteur3d Normax(vecteur3d& v2){
            if(v2.Norme() > Norme())
                return v2 ;
            else
                return *this;
        }

};
int main()
{
    vecteur3d V1(4,7,8);
    vecteur3d V2(6,1,3);

    V1.affichage();
    V2.affichage();
    cout << "\nSUM: \n";
    V1.Somme(V2).affichage();
    cout << "\nProdScalaire: \n";
    cout << V1.ProdScalaire(V2) << endl;
    
    if(V1.Coincide(V2))
        cout << "Vecteur V1 and V2 Have the same Values" << endl;
    else
        cout << "Values different" << endl;
    cout <<"\nNorme: \n" ;
    cout << V1.Norme() << endl;
    cout << V2.Norme() << endl; 

    cout <<"\nNormax: \n";
    V1.Normax(V2).affichage();

    return 0;
}