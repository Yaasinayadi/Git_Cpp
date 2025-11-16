#include <iostream>
using namespace std;

template <class T>
class point {
private:
    T x, y;
public:
    point(T abs, T ord) {
        x = abs;
        y = ord;
    }
    void affiche();
};
template <class T> 
void point<T>::affiche() {
    cout << sizeof(x) << " " << int(x)  << " " << int(y)  << endl;
}

int main()
{
    //a- they return the ascii value of 60(<) and the asci value of 65(A)
   
    point<char>p(60, 65);
    p.affiche();

    //b- return in affiche int(x) and int(y);
    
    return 0;
}