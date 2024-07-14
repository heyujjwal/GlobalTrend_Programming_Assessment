int factorial( int n) 
{ 
     if(n == 0) 
          return 1; 
    int i = n, fact = 1; 
    while (n / i != n) { 
        fact = fact * i; 
        i--; 
    } 
    return fact; 
} 
