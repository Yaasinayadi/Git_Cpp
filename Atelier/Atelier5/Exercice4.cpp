#include <iostream>
using namespace std ;
class A{ 
    int n ;
    float x ;
public :
    A (int p = 2)
    { n = p ; x = 1 ; 
    cout << "** construction objet A : " << n << " " << x << "\n" ; // n = 2, x = 1 
    }
} ;
class B{ 
    int n ;
    float y ;
public :
    B (float v = 0.0) 
    { n = 1 ; y = v ; // n =1, y = 0
    cout << "** construction objet B : " << n << " " << y << "\n" ;
    }
} ;
class C : public B, public A{ 
    int n ;
    int p ;
public :
    C (int n1=1, int n2=2, int n3=3, float v=0.0) : A (n1), B(v)
    { n = n3 ; p = n1+n2 ; //n = 3, p = 2 + 2 = 4
    cout << "** construction objet C : " << n << " " << p <<"\n" ;
    }
} ;
main()
{ 
    C c1 ;
    // cons..Object B: n =1, v = 0
    // cons..Object A: n = 1 , x = 1
    // cons..Object C: n = 3 , p = 1 + 2 =3
    C c2 (10, 11, 12, 5.0) ; 
    // cons..Object B: n = 1, y = 5
    // cons..Object A: n = 10, x = 1
    // cons..Object C: n = 12, p = 21
}