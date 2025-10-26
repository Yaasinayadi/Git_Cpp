#include <iostream>
using namespace std;

int Min(int tab[], int size)
{
    int min = tab[0];
    for(int i=1; i<size; i++){
        if(min > tab[i])
            min =tab[i];
    }
    return min ;
}
int Max(int tab[], int size)
{
    int max = tab[0];
    for(int i=1; i<size; i++){
        if(max < tab[i])
            max =tab[i];
    }
    return max;
}
/*------Use pointers------*/

void MinMax(int tab[],int size, int *min,int *max){
    for(int i=0; i<size; i++){
        if(*min > tab[i])
            *min = tab[i];
        if(*max < tab[i])
            *max = tab[i];
    }
}

int main()
{
    int tab[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "Min: "<< Min(tab, 10) << endl;
    cout << "Max: " << Max(tab, 10) << endl;
    /*------Use pointers------*/
    int min = tab[0];
    int max = tab[0];
    MinMax(tab, 10, &min, &max);
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;
    
    return 0;
}  