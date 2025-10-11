#include <iostream>
using namespace std ;
main () {
int i, j, n ;
i = 0 ;
n = i++; //0

cout << "A : i = " << i << " n = " << n << "\n" ; // i =1 n =0
i = 10 ;
n = ++ i ; // n = 11 ;
cout << "B : i = " << i << " n = " << n << "\n" ; // i= 11 n = 11
i = 20 ;
j = 5 ;
n = i++ * ++ j ; // n =  20 *  6
cout << "C : i = " << i << " j = " << j << " n = " << n << "\n" ; // i = 21 and j =6 and n = 120
i = 15 ;
n = i += 3 ; // n = i and i = i +3 = 15 +3 = 18
cout << "D : i = " << i << " n = " << n << "\n" ; // i = 18 n = 18
i = 3 ; 
j = 5 ;
n = i *= --j ; // n = i and i = i * (j -1) = 3 * 4 = 12
cout << "E : i = " << i << " j = " << j << " n = " << n << "\n" ; // i = 12 j = 4 n = 12
}