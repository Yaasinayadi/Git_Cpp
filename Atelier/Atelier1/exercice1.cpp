int main() 
{
    char c = '\x01' ;
    short int p = 10 ;

    //  -------1--------
    p + 3;
    /* 
    type of 'p' short int and 3 is an int
    
    type : int
    value: 10 + 3 = 13
    */
    
    // -------2--------
    c +1; 
    
    /*
    c = '\x01' return ascii value equal 1
    
    type : int 
    value : 1 + 1 = 2
    */

    // -------3--------
    p + c;
    
    /*
    type of 'p' is int and 'c' return ascii value equal 1
    
    type: int
    value: 10 + 1 = 11
    */
   
    //-------4--------
    3 * p +5 *c;

    /*
    'p' int equal 10, 'c' ascii value equal 1

    type: int 
    value: 3 * 10 + 5 * 1 = 35
    */
    return 0;
}