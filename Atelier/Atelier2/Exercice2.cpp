#include <iostream>
using namespace std;

int funcOne(int nbr) {
    if (nbr % 2 == 0 )
        return nbr;
    else
        return 0;
}
int funcTwo(int nbr) {
    if (nbr % 3 == 0)
        return nbr ;
    else
        return 0;
}
void Programme(int nbr){
    if(nbr % 2 == 0)
        cout << "Il est pair" << endl;
    if(funcTwo(nbr))
        cout << "Il est multiple de 3" << endl;
    if(funcOne(nbr) && funcTwo(nbr))
        cout << "Il est divisble par 6" << endl;
    
}
int main()
{
    // cout << funcOne(2) << endl;
    // cout << funcOne(3) << endl;
    // cout << "\n----\n";
    // cout << funcTwo(2) << endl;
    // cout << funcTwo(3) << endl;
    cout << "\n----\n";
    Programme(12);
    return 0;
}