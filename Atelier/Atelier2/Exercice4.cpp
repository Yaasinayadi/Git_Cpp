#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "n: " ;
    cin >> n ;
    int *p1 = new int[n];
    for(int i=0; i< n; i++){
        cout << "arr["<< i+1 << "] = " ;
        cin >> p1[i] ;
    }
    int *p2 = new int[n];
    for(int i=0; i<n; i++){
        p2[i] = p1[i] * p1[i];
    }
    delete[] p1;
    cout << "\n-----\n" << endl;
    for(int i=0; i<n;i++){
        cout << "carre[ " << i+1 << "]= "<< *(p2 + i) << endl;
    }
    delete[] p2;
    return 0;
}