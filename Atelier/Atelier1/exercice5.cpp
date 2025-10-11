#include <iostream>
#include <array>
using namespace std;
int main()
{
    int n;
    int fil ;
    // cout << sizeof(int) ;
    int *arr = (int*) malloc(n * sizeof(int));
    cout << "Enter the taille of array: ";
    cin >> n;
    
    for(int i=0; i<n; i++){
        cout << "array [" << i+1 << "] = ";
        cin >> arr[i];
        
    }
    // for(int i=0; i<n; i++){
    //     cout << "array [" << i+1 << "] = " << arr[i] << endl;
    // }
    
    return 0;
}