#include <iostream>
using namespace std;

/*------references-------*/
void incrementer(int &nbr) {
    nbr ++;
}
void permuter(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
/*------pointers-------*/
void incremPoint(int *nbr){
    (*nbr) ++;
}
void permuPoint(int *n1, int *n2) {
    int temp ;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main()
{
    /*------references-------*/
    int n =5, f =3 , g = 8;
    incrementer(n);
    cout << "n: "<< n << endl; 
    permuter(f, g);
    cout << "f: " << f << endl;
    cout << "g: " << g << endl;
    /*------pointers-------*/
    cout << "\n----------\n";
    int a =1, b= 4, c = 7;
    incremPoint(&a);
    cout << "a: " << a << endl;
    permuPoint(&b, &c);
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    return 0;
}