#include <iostream>
using namespace std;
int main()
{
    int n = 5, p = 9 ;
    float x ;
    int q ;
    //-------1-------
    
    q = n < p ; /*n < p ~ 5 < 9 : true -> q = 1*/
    //-------2------- 

    q = n == p; /*n == p ~ 5 == 9 : false -> q= 0*/;
    //-------3-------

    q = p % n + p > n ;/*p % n = 4 && p > n = 1 : q =4+1 = 5*/
    //-------4-------
    
    x= p/n; /*9/ 5 = 1.8 and x is float : x = 1.8 */
    //-------5-------

    x =(float) p /n ; /*9/5 = 1.8 -> x = 1.8*/
    //-------6-------
    
    x = (p + 0.5) /n; /*9+0.5 /5 = 1.9 ~ x float -> x = 1.9*/
    //-------8-------

    q = n * (p >n ? n : p); /* p> n ~ true ->q = n * n = 25 */
    //-------9-------

    q = n * (p <n ? n : p); /*p< n~ false -> q = n * p = 45*/
    

    
    return 0;
}