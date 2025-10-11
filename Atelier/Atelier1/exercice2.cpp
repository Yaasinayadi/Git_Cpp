

int main()
{
    char c = '\x05' ;
    long p = 1000 ;
    float x = 1.25 ;
    double z = 5.5 ;
    int n = 5 ;

    // --------1--------
    n + c + p ;
    /*
    'n' is int, 'c' take the ascii value 5, p is int
    
    type: int 
    value: 5 + 5 + 1000 = 1010
    */
   // ---------2--------
   2 * x + c;
   
   /*
    x is float and c take the ascii value 5

    type: float 
    value: 2 * 5 + 5 = 7.5
   */
   // ---------3--------
   (char) n + c ;

   /*
    'n' is char equal '5', value of 'c' is 5 
   
    type: int 
    value: 5 + 5 = 10
    */
    // ---------4--------
    (float)z + n/2;


    /*
    'z' become float , 'n/2' return int of division

    type: float
    value: 5.5 + 5/ 2 =  5.5 + 2 = 7.5
    */
  
 
  
  return 0;
}