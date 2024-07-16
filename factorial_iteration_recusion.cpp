1)//Factorial Iterative 

#include <iostream>

 double factorial_iter(int n);

 double factorial_iter(int n) {
    double result = 1;
    
     for (int i = 1; i <= n; ++i) {   
        result *= i;
    }
    return result;
}

int main() {
    int n = 0;
    
     std::cout << "Please enter a non-negative number to find its factorial: ";
    std::cin >> n;
    
     if (n < 0) {
         std::cout << "Factorial is not defined for negative numbers." << std::endl;
        return 1;
    }
    
     double result_iter = factorial_iter(n);
    
     std::cout << "Factorial of " << n << " is equal to " << result_iter << std::endl;
    
    return 0;
}


2)//Factorial recusion
#include <iostream>

 double factorial_rec(int n);
 
 double factorial_rec(int n){
     if(n==0 || n==1){
         return 1;
     }else{
         return n * factorial_rec(n-1);
     }
 }
 
 int main () {
     int n = 0;
     
     std::cout << "Please enter non negative number for factorial calculation: ";
     std::cin >> n;
     
     if(n < 0){
         std::cout << "Number cannot be negative, we can't calculat factorial aprouch: ";
     
         return 1;
     }
     double result_rec = factorial_rec(n);
     std::cout << "You enter the number: " << n << " its factorial equal = " << result_rec << std::endl;
     
     return 0;
 }
