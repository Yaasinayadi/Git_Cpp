#include <iostream>
#include <array>
using namespace std;
void remplir(int *arr, int n){
    for(int i=0; i< n;i++){
        cout << "array[" << i+1 << "]= " ;
        cin >> *(arr + i);
    }
}
void afficher(const int *arr, int n){
    for(int i =0; i<n; i++){
        cout <<"array[" << i+1 <<"]= "<< *(arr + i) << endl; 
    }
}
int& trouverMax(int *arr, int n) {
    int *max = arr;
    
    for(int i=1; i<n; i++){
        if(*max < *(arr +i))
            *max = *(arr +i);
    }
    return *max ;
}
void inverser(int *arr, int n){
    int temp;
    
    for(int i=0; i<n/2;i++){
        temp = arr[i]; // arr[0]
        arr[i] = arr[n -(i+1)];// arr[0] = arr[3]
        arr[n-(i +1)] = temp ;
        
    }
}


int main()
{
    int n;
    int fil ;
    cout << "Enter the taille of array: ";
    cin >> n;
    int *arr = (int*) malloc(n * sizeof(int));
    
    // for(int i=0; i<n; i++){
    //     cout << "array [" << i+1 << "] = ";
    //     cin >> arr[i];
        
    // }
    
    remplir(arr, n);
    cout << "\n------\n";
    afficher(arr, n);
    cout << "\n------\n";
    int maximum = trouverMax(arr, n);
    cout << maximum;
    cout << "\n------\n";
    inverser(arr, n);
    afficher(arr,n);

    free(arr);
    
    return 0;
}